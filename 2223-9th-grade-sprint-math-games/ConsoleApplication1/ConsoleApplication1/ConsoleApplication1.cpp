#include <iostream> 
#include <cmath>
#include <time.h>
#include <conio.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
void binarioText()
{
	fstream newfile;

	newfile.open("..\\..\\..\\textFiles\\Binario.txt", ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) { //checking whether the file is open
		string str;
		while (getline(newfile, str)) { //read data from file object and put it into string.
			cout << str << endl; //print the data of the string
		}
		newfile.close(); //close the file object.
	}
}
void trophy()
{
	fstream newfile;

	newfile.open("..\\..\\..\\textFiles\\Trophy.txt", ios::in); 
	if (newfile.is_open()) { 
		string str;
		while (getline(newfile, str)) { 
			cout << str << endl; 
		}
		newfile.close(); 
	}
} 

void toBinary(int num)
{
	if (num == 0)
	{
		return;
	}
	toBinary(num / 2);
	cout << num % 2;

}



int j;
int score(0);
string username;

int main()
{
	binarioText();
	cout << endl;
	cout << endl;
	bool flag = true;

	while (flag = true)
	{
		j = 0;
		score = 0;
		/* Introduction : */
		cout << "Welcome to";
		cout << " Binario Game!                                           ";
		cout << "\n\n=========================\n\nPlease enter your name : ";
		cin >> username;
		cout << "\n\n=========================\n\nHello " << username << " !\n\n";
		for (int a = 5; a > 0; a--)
		{
			cout << "\rGet ready to play in :  " << a;
		}
		cout << "\r=========================\n\n";
		if (!_kbhit())
		{
			cout << "\r";
			flag = false;
			break;
		}


	}
	/* Level 1 */
	cout << "LEVEL 1 : Right shift bitwise operator quiz ( YOU HAVE ONLY 10 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
	for (int i = 1; i <= 3; i++)
	{
		srand(time(0));

		int secondNum = rand() % 2 + 1;
		int firstNum = rand() % 10 + 1;
		firstNum = (firstNum * 2 * 2 * 2);

		cout << "Question" << i << " ::  " << firstNum << " >> " << secondNum << " = ";
		int numInput;
		time_t start = time(0);
		int y = 10;
		while (!_kbhit())
		{
			if (abs(time(0) - start) > 10)
			{
				j = 1;
				break;
			}
		}
		if (j == 1)
		{
			cout << "Time's Up!!";
			j = 2;
		}
		else
		{
			cin >> numInput;
			if ((time(0) - start) > 10)
			{
				cout << "Time's Up!!";
				j = 2;
			}
			else if (numInput == (firstNum >> secondNum)) cout << "Good Job!!\n\n";
			else
			{
				cout << "Wrong Answer!!";
				j = 2;
			}
		}
		if (j == 2) break;

		score += 10;
	}
	/* Level 2 */
	for (int Y = 1; j != 2 && Y != 2; Y++)
	{
		cout << "LEVEL 2 : Left shift bitwise operator quiz ( YOU HAVE ONLY 10 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		for (int i = 1; i <= 3; i++)
		{
			srand(time(0));

			int secondNum = rand() % 2 + 1;
			int firstNum = rand() % 10 + 1;

			cout << "Question" << i << " ::  " << firstNum << " << " << secondNum << " = ";
			int numInput;
			time_t start = time(0);
			int y = 10;
			while (!_kbhit())
			{
				if (abs(time(0) - start) > 10)
				{
					j = 1;
					break;
				}
			}
			if (j == 1)
			{
				cout << "Time's Up!!";
				j = 2;
			}
			else
			{
				cin >> numInput;
				if ((time(0) - start) > 10)
				{
					cout << "Time's Up!!";
					j = 2;
				}
				else if (numInput == (firstNum << secondNum)) cout << "Good Job!!\n\n";
				else
				{
					cout << "Wrong Answer!!";
					j = 2;
				}
			}
			if (j == 2) break;

			score += 10;
		}
	}
	/* Level 3  */
	int numberOne, numberTwo;
	for (int k = 1; j != 2 && k != 2; k++)
	{
		cout << "LEVEL 3 : Bitwise & Quiz ( YOU HAVE ONLY 15 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		for (int i = 1; i <= 5; i++)
		{
			srand(time(0));
			int H = rand() % 10 + 3;
			int K = rand() % 10 + 3;
			numberOne = H;
			numberTwo = K;
			cout << "Hint: " << numberOne << " is ";
			toBinary(H);
			cout << " and " << numberTwo << " is ";
			toBinary(K);
			cout << endl;
			cout << "Question" << i << " ::  " << numberOne << " & " << numberTwo << " = ";
			int numInput;
			time_t start = time(0);
			while (!_kbhit())
			{
				if (abs(time(0) - start) > 15)
				{
					j = 1;
					break;
				}
			}
			if (j == 1)
			{
				cout << "Time's Up!!";
				j = 2;
			}
			else
			{
				cin >> numInput;
				if ((time(0) - start) > 15)
				{
					cout << "Time's Up!!";
					j = 2;
				}
				else if (numInput == (numberOne & numberTwo)) cout << " Good Job!!!!\n\n";
				else
				{
					cout << "Wrong Answer!!";
					j = 2;
				}
			}
			if (j == 2) break;
			score += 10;
		}
	}
	/* Game Over */
	{
		if (j == 2)
		{
			cout << "\n\nGAME OVER!!!!!\nYour Score (( " << score << " ))\n\n";
		}
		else
		{
			cout << "You completed the game!!!" << endl;
			cout << "You have won this trophy!!!" << endl;
			trophy();
			cout << endl;
		}
	}

}