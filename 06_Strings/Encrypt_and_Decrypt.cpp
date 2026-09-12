#include <iostream>
#include <string>
using namespace std;
string ReadText(string Message)
{
	string Text;
	cout << Message << "\n";
	getline(cin, Text);
	return Text;
}
string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;
}
string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}
int main()
{
	const short EncryptionKey = 2;
	string Text = ReadText("Enter Your Text\n");
	string TextAfterEncryption = EncryptText(Text, EncryptionKey);
	string TextAfterDecryption = EncryptText(Text, EncryptionKey);
	cout << "\n Text Before Encryption is " << Text << "\n";
	cout << "\n Text After Encryption is " << TextAfterEncryption << "\n";
	cout << "\n Text After Decryption is " << TextAfterDecryption << "\n";
	return 0;
}