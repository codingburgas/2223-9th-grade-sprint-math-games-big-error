#include <iostream> 
#include <cmath>
#include <time.h>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cstdio>



using namespace std;

int j;
int score(0);
string username;
int integerCheck(int num2)
{
	int num1 = (rand() % 1 + 5) * pow(2, num2);
	return num1;
}
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
}