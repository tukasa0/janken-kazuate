#include "kazuate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Init()
{
	answer = 0;
	number = 0;
}

void InitRand()
{
	srand((unsigned int)time(NULL));
}

void Answer()
{
	cin >> answer;
}

void Number()
{
	number = rand() % MAX_VALUE + 1;
}

bool Guess()
{
	cout << "‚ ‚È‚½‚Ì“š‚¦‚Í > " << flush;
	Answer();

	if (number == answer)
	{
		cout << "³‰ðI" << endl;
		return false;
	}
	else if (abs(number - answer) <= 10)
	{
		cout << "‹ß‚¢‚æI" << endl;
	}
	else
	{
		cout << "‚Ü‚¾‰“‚¢‚æ" << endl;
	}

}

void Gamekazuate()
{
	InitRand();
	Number();

	cout << "1`100‚Ì’†‚©‚ç‘I‚Î‚ê‚½”Žš‚ð“–‚Ä‚È‚³‚¢" << endl;
	while (Guess())
	{
	
	}

	Init();
}

