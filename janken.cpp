#include "janken.h"
#include <iostream>
using namespace std;

void InitPoint()
{
	player = 0;
	enemy = 0;
	playerPoint = 0;
	enemyPoint = 0;
}

void Playerhand()
{
	bool botton = true;

	cout << "�o��������߂Ă�" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << hand[i] << "..." << i << " ";
	}
	cout << "-> " << flush;

	while (botton)
	{
		cin >> player;

		switch (player)
		{
		case Gu:
			botton = false;
			break;

		case Tyoki:
			botton = false;
			break;

		case Pa:
			botton = false;
			break;

		default:
			cout << "���͂������Ă�������" << endl;
			continue;
		}
	}
	cout << endl;
}

void Enemyhand()
{
	enemy = rand() % 3;
}

void Showhand(int otherwords, int otherhand)
{
	cout << words[otherwords] << "�́A" << hand[otherhand] << "���o���܂����B" << endl;
}

void Showpoint(int otherwords, int otherpoint)
{
	cout << words[otherwords] << otherpoint << words[Points] << endl;
}

bool Compare()
{
	Enemyhand();
	Playerhand();
	Showhand(Player, player);
	Showhand(Enemy, enemy);

	if (player == enemy)
	{
		cout << "������" << endl;
	}
	else if (player + 1 == enemy || player - 2 == enemy)
	{
		cout << words[Player] << "�̏���!" << endl;
		playerPoint++;
	}
	else if(enemy + 1 == player || enemy - 2 == player)
	{
		cout << words[Player] << "�̕���..." << endl;
		enemyPoint++;
	}

	Showpoint(Player, playerPoint);
	Showpoint(Enemy, enemyPoint);

	if (playerPoint == 3)
	{
		cout << endl
			<< "���߂łƂ��I" << endl;
		return false;
	}
	else if (enemyPoint == 3)
	{
		cout << endl
			<< "�c�O�A�܂����킵�Ă�" << endl;
		return false;
	}
}

void Gamejanken()
{
	InitRand();

	while (Compare())
		{
			
		}

	InitPoint();
}