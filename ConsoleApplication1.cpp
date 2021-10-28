#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	string words[] = { "computer","console","desktop" };
	string Selected_word;
	char User_letters[10] = { '-' };
	int random, LengthOfword = 0;
	char A;
	srand(time(0));
	random = rand() % 3;
	Selected_word = words[random];
	for (int i = 0; i < Selected_word.length(); i++)
	{
		LengthOfword++;
	}
	cout << "Radnom word has  " << LengthOfword << " letters.You can choose at list " << LengthOfword + 3 << " letters" << endl;
	for (int i = 0; i < LengthOfword; i++)
	{
		cout << "-" << '\t';

	}
	cout << '\n';
	for (int i = 0; i < LengthOfword; i++)
	{
		User_letters[i] = { '-' };
	}
	for (int i = 0; i < LengthOfword + 3; i++)
	{
		{
			cout << "enter a letter" << endl;
			cin >> A;
			if (isupper(A)) {
				A = tolower(A);
			}
			for (int i = 0; i < LengthOfword; i++)
			{

				if (Selected_word[i] == A)
				{
					User_letters[i] = A;
				}
				else
				{
					cout << "wrong";
				}
			}
			for (int i = 0; i < LengthOfword; i++)
			{
				cout << User_letters[i];
			}
			cout << "\nYou got " << LengthOfword + 2 - i << " letters left to choose" << endl;
			cout << "\n";
			if (Selected_word == User_letters)
				break;
		}
	}
	if (Selected_word == User_letters) {
		cout << "You won." << endl;
	}
	else cout << "you lose" << endl;
	system("pause");
	return 0;

}