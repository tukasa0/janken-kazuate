#include "kazuate.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define D_DEBUG_ON

void InitRand()
{
	srand((unsigned int)time(NULL));
}

static void Answer()
{
	cin >> answer;
}

static void Number()
{
	number = rand() % MAX_VALUE + 1;

#ifdef D_DEBUG_OFF
	cout << "�I�΂ꂽ������" << number << "�ł��B" << endl;
#endif

}

static bool Guess()
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
}

