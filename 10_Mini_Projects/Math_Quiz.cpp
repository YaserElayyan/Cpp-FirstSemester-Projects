#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;
enum enOperatorType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };
enum enDifficulty { Easy = 1, Med = 2, Hard = 3, MixDif = 4 };
struct strQuestionElements
{
    int Number1 = 0;
    int Number2 = 0;
    enOperatorType OperationType;
    enDifficulty QuestionLevel;
    int PlayerAnswer = 0;
    int CorrectAnswer = 0;
    bool Result = false;
};
struct strQuizElements
{
    int NumberOfQuestion;
    enOperatorType OpT;
    enDifficulty QuestionLevel;
    int NumberOfRightQuestions = 0;
    int NumberOfWrongAnswers = 0;
};
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> Number;
        }
    } while (Number <= 0);

    return Number;
}
int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> Number;
        }
    } while (Number < From || Number > To);
    return Number;
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
int ReadNumber()
{
    int Number = 0;
    cin >> Number;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin >> Number;
    }
    return Number;
}
enDifficulty ChooseDifficulty(int Choice)
{
    switch (Choice)
    {
    case 1:
    {
        return enDifficulty::Easy;
    }
    case 2:
    {
        return enDifficulty::Med;
    }
    case 3:
    {
        return enDifficulty::Hard;
    }
    default:
    {
        return enDifficulty::MixDif;
    }
    }
}
string DifficultyType(enDifficulty Difficulty)
{
    string Dif[4] = { "Easy" , "Med" , "Hard" , "MixDif" };
    return Dif[Difficulty - 1];
}

void ScreenColor(bool Result)
{
    switch (Result)
    {
    case true:
    {
        system("Color 2F");
        break;
    }
    default:
    {
        system("Color 4F");
        cout << "\a";
        break;
    }
    }
}
void ResetScreen()
{
    system("cls");
    system("Color 07");
}
enOperatorType ChooseOperator(int Choice)
{
    switch (Choice)
    {
    case 1 :
    {
      return  enOperatorType::Add;
    }
    case 2 :
    {
        return enOperatorType::Sub;
    }
    case 3 :
    {
        return enOperatorType::Mul;
    }
    case 4 :
    {
        return enOperatorType::Div;
    }
    default :
    {
        return enOperatorType::MixOp;
    }
    }
}
string OperatorType(enOperatorType Operator)
{
    switch (Operator)
    {
    case enOperatorType :: Add:
    {
        return "+";
    }
    case enOperatorType :: Sub :
    {
        return "-";
    }
    case enOperatorType :: Mul:
    {
        return "*";
    }
    case enOperatorType :: Div :
    {
        return "/";
    }
    default :
    {
        return "Mix";
    }
    }
}
enOperatorType GetRandomOperationType()
{
    return (enOperatorType)RandomNumber(1, 4);
}

int SimpleCalcultor(int Number1, int Number2, enOperatorType Operator)
{
    switch (Operator)
    {
    case enOperatorType :: Add:
    {
        return Number1 + Number2;
    }
    case enOperatorType :: Sub :
    {
        return Number1 - Number2;
    }
    case enOperatorType :: Mul :
    {
        return Number1 * Number2;
    }
    case enOperatorType :: Div :
    {
       return  (Number2 != 0) ? (Number1 / Number2) : 0;
    }
    default :
    {
        return Number1 + Number2;
    }
    }
}
strQuestionElements GenerateQuestion(enOperatorType OpT , enDifficulty Difficulty)
{
    strQuestionElements Question;
    if(OpT == enOperatorType::MixOp)
    {
        OpT = enOperatorType(RandomNumber(1,4));
    }
    if (Difficulty == enDifficulty::MixDif)
    {
        Difficulty = enDifficulty(RandomNumber(1, 3));
    }
    Question.OperationType = OpT;
    Question.QuestionLevel = Difficulty;
    switch (Difficulty)
    {
    case enDifficulty::Easy:
    {
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;
    }
    case enDifficulty::Med:
    {
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        break;
    }
    case enDifficulty::Hard:
    {
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        break;
    }
    }
    Question.CorrectAnswer = SimpleCalcultor(Question.Number1, Question.Number2, Question.OperationType);
    return Question;
}
void PrintTheQuestion(strQuestionElements Question, int QuestionNumber , int TotalQuestion)
{
    cout << "\nQuestion [" << QuestionNumber << "/" << TotalQuestion << "]\n";
    cout << Question.Number1 << "\n";
    cout << Question.Number2 << " " <<  OperatorType(Question.OperationType) << "\n";;
    cout << "------------------\n";
}
void CorrectTheQuestionAnswer(strQuestionElements &Question , int QuestionNumber , int TotalQuestions , strQuizElements &Quiz)
{
    PrintTheQuestion(Question, QuestionNumber, TotalQuestions);
    Question.PlayerAnswer = ReadNumber();
    if (Question.PlayerAnswer == Question.CorrectAnswer)
    {
        cout << "Right Answer :-) \n";
        ScreenColor(true);
        Quiz.NumberOfRightQuestions++;
        Question.Result = true;
    }
    else
    {
        cout << "Wrong Answer :-( \n";
        cout << "The Right Answer is : " << Question.CorrectAnswer << "\n";
        ScreenColor(false);
        Quiz.NumberOfWrongAnswers++;
        Question.Result = false;
    }
}
void PlayMathGame()
{
    strQuizElements Quiz;
    Quiz.NumberOfQuestion = ReadPositiveNumber("How Many Question You Want To Play?\n");
    Quiz.QuestionLevel = (enDifficulty)ReadNumberInRange("Enter Question Level [1]:Easy, [2]:Med , [3]:Hard , [4]:Mix ? \n",1,4);
    Quiz.OpT = (enOperatorType)ReadNumberInRange("Enter Operator Type [1]:Add, [2]:Sub , [3]:Mul , [4]:Div , [5]:Mix ? \n", 1, 5);
    for (int Questions = 1; Questions <= Quiz.NumberOfQuestion; Questions++)
    {
        strQuestionElements Question = GenerateQuestion(Quiz.OpT, Quiz.QuestionLevel);
        CorrectTheQuestionAnswer(Question, Questions, Quiz.NumberOfQuestion, Quiz);
    }
    cout << "\n-----------------------------------\n";
    cout << "           FINAL RESULTS           \n";
    cout << "-----------------------------------\n";
    cout << "Number of Questions: " << Quiz.NumberOfQuestion << "\n";
    cout << "Right Answers      : " << Quiz.NumberOfRightQuestions << "\n";
    cout << "Wrong Answers      : " << Quiz.NumberOfWrongAnswers << "\n";
    cout << "-----------------------------------\n";
}
int main()
{
    srand((unsigned)time(NULL));
    char PlayAgain = 'Y';
    do
    {
        ResetScreen();
        PlayMathGame();
        cout << "Do You Want To Play Again ? [Y]:Yes , [N]:No \n";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');

    return 0;
}