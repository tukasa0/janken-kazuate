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
	cout << "���Ȃ��̓����� > " << flush;
	Answer();

	if (number == answer)
	{
		cout << "�����I" << endl;
		return false;
	}
	else if (abs(number - answer) <= 10)
	{
		cout << "�߂���I" << endl;
	}
	else
	{
		cout << "�܂�������" << endl;
	}

}

void Gamekazuate()
{
	InitRand();
	Number();

	cout << "1�`100�̒�����I�΂ꂽ�����𓖂ĂȂ���" << endl;
	while (Guess())
	{
	
	}

	Init();
}

