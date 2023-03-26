#include <iostream> 
#include <cmath>
#include <time.h>
#include <conio.h>
#include <string>
#include <iomanip>
void toBinary(int num)
{
	if (num == 0)
	{
		return;
	}
	toBinary(num / 2);
	cout << num % 2;

}

using namespace std;

int j;
int score(0);
string username;

int main()
{
	cout << endl;
	bool flag = true;

	while (flag = true)
	{
		j = 0;
		score = 0;
		/* Introduction : */
		cout << "Welcome to";
		cout << " MATH QUIZ GAME!                                           ";
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
	cout << "LEVEL 1 : Left shift bitwise operator quiz ( YOU HAVE ONLY 10 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
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
		cout << "LEVEL 2 : Right shift bitwise operator quiz ( YOU HAVE ONLY 10 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
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
	/* Game Over */
	{
		if (j == 2)
		{
			cout << "\n\nGAME OVER!!!!!\nYour Score (( " << score << " ))\n\n";
		}
	}

}