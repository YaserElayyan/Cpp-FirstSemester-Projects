#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
enum enRockPaperScissor { Rock = 1, Paper = 2, Scissor = 3 };
enum enGameResult { Win = 1, Lose = 2, Tie = 3 };
struct strRoundInfo
{
	short RoundNumber = 0;
	enRockPaperScissor PlayerChoice;
	enRockPaperScissor ComputerChoice;
	enGameResult RoundWinner;
};
struct strGameInfo
{
	short GameRound = 0;
	short PlayerWins = 0;
	short ComputerWins = 0;
	short DrawTimes = 0;
	string FinalWinner = "";
};
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
int ReadNumberInRange(string Message ,int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number < From || Number >To);

	return Number;
}
enRockPaperScissor ChoiceToEnum(short Choice)
{
	switch (Choice)
	{
	case 1 :
	{
		return enRockPaperScissor::Rock;
	}
	case 2 :
	{
		return enRockPaperScissor::Paper;
	}
	case 3 :
	{
		return enRockPaperScissor::Scissor;
	}
	default :
	{
		return enRockPaperScissor::Rock;
	}
	}
}
enRockPaperScissor UserChoice()
{
	short Choice = ReadNumberInRange("Your Choice [1]:Rock , [2]:Paper , [3]:Scissor ? \n",1,3);
	return ChoiceToEnum(Choice);
}
enRockPaperScissor ComputerChoice()
{
	short Choice = RandomNumber(1, 3);
	return ChoiceToEnum(Choice);
}
enGameResult RoundResult(enRockPaperScissor UserChoice, enRockPaperScissor ComputerChoice)
{
	if (UserChoice == ComputerChoice)
	{
		return enGameResult::Tie;
	}
	else if (UserChoice == enRockPaperScissor::Rock && ComputerChoice == enRockPaperScissor::Scissor)
	{
		return enGameResult::Win;
	}
	else if (UserChoice == enRockPaperScissor::Scissor && ComputerChoice == enRockPaperScissor::Paper)
	{
		return enGameResult::Win;
	}
	else if (UserChoice == enRockPaperScissor::Paper && ComputerChoice == enRockPaperScissor::Rock)
	{
		return enGameResult::Win;
	}
	else
	{
		return enGameResult::Lose;
	}
}
void ScreenColor(enGameResult RoundResult)
{
	switch (RoundResult)
	{
	case enGameResult :: Win :
	{
		system("Color 2F");
		break;
	}
	case enGameResult :: Lose:
	{
		system("Color 4F");
		cout << "\a";
		break;
	}
	case enGameResult :: Tie :
	{
		system("Color 6F");
		break;
	}
	}
}
void ResetScreen()
{
	system("cls");
	system("Color 07");
}
string Tab(short NumberOfTabs)
{
	string Tabs = "";
	for (int i = 1; i <= NumberOfTabs; i++)
	{
		Tabs = Tabs + "\t";
	}
	return Tabs;
}
string ChoiceToString(enRockPaperScissor Choice)
{
	switch (Choice)
	{
	case enRockPaperScissor::Rock:
	{
		return "Rock";
	}
	case enRockPaperScissor::Paper:
	{
		return "Paper";
	}
	case enRockPaperScissor::Scissor:
	{
		return "Scissor"; 
	}
	default:
	{
		return "Unknown";
	}
	}
}
string WhoWonTheRound(enGameResult Result)
{
	switch (Result)
	{
	case enGameResult :: Win:
	{
		return "Player";
	}
	case enGameResult :: Lose :
	{
		return "Computer";
	}
	case enGameResult :: Tie:
	{
		return "Tie (No Winner)";
	}
	default :
	{
		return "Unknown";
	}
	}
}
string FinalWinner(short UserWins, short ComputerWins)
{
	if (UserWins > ComputerWins)
	{
		return "Player";
	}
	else if (ComputerWins > UserWins)
	{
		return "Computer";
	}
	else
	{
		return "No Winner (Tie)\n";
	}
}
void PrintRoundInfo(strRoundInfo RoundInfo)
{
	cout << "-------------------------------Round[" << RoundInfo.RoundNumber << "]-------------------------------\n"; 
	cout << "Player Choice : " << ChoiceToString(RoundInfo.PlayerChoice) << "\n"; 
	cout << "Computer Choice : " << ChoiceToString(RoundInfo.ComputerChoice) << "\n";
	cout << "Round Winner : " << WhoWonTheRound(RoundInfo.RoundWinner) << "\n";
	cout << "------------------------------------------------------------------\n";
}
void PrintGameOverScreen()
{
	cout << "\n\n" <<  Tab(2) << "---------------------------------------------------------------------------\n";
	cout << Tab(6) << "+++GAME OVER+++ ";
	cout << "\n\n" << Tab(2) << "----------------------------------------------------------------------------\n";
}
void PrintGameInfo(strGameInfo GameInfo)
{
	PrintGameOverScreen();
	cout << Tab(2) <<  "----------------------------[GAME RESULT]-------------------------\n"; 
	cout << Tab(2)  << "Game Rounds : " << GameInfo.GameRound << endl;
	cout << Tab(2) << "Player Won Times :" << GameInfo.PlayerWins << endl; 
	cout << Tab(2) << "Computer Won Times : " << GameInfo.ComputerWins << endl;
	cout << Tab(2) <<  "Draw Time : " << GameInfo.DrawTimes << endl; 
	cout << Tab(2) <<  "Final Winner : " << GameInfo.FinalWinner << endl; 
	cout << Tab(2) <<  "-------------------------------------------------------------------\n";
}
void PlayGame()
{
	char PlayAgain = 'Y';
	do
	{
		ResetScreen();
		short HowManyRounds = ReadPositiveNumber("How Many Rounds You Want To Play ?\n");
		strGameInfo GameInfo;
		GameInfo.GameRound = HowManyRounds;
		for (int Round = 1; Round <= HowManyRounds; Round++)
		{
			strRoundInfo RoundInfo;
			RoundInfo.RoundNumber = Round;
			RoundInfo.PlayerChoice = UserChoice();
			RoundInfo.ComputerChoice = ComputerChoice();
			RoundInfo.RoundWinner = RoundResult(RoundInfo.PlayerChoice, RoundInfo.ComputerChoice);
			PrintRoundInfo(RoundInfo);
			ScreenColor(RoundInfo.RoundWinner);
			if (RoundInfo.RoundWinner == enGameResult::Win)
			{
				++GameInfo.PlayerWins;
			}
			else if (RoundInfo.RoundWinner == enGameResult::Lose)
			{
				++GameInfo.ComputerWins;
			}
			else
			{
				++GameInfo.DrawTimes;
			}
		}
		GameInfo.FinalWinner = FinalWinner(GameInfo.PlayerWins, GameInfo.ComputerWins);
		PrintGameInfo(GameInfo);
		cout << "Do You Want To Play Again [Y]:Yes ,[N] : No ?\n";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
	ResetScreen();
}
int main()
{
	srand((unsigned)time(NULL));
	PlayGame();
	return 0;
}