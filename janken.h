#ifndef JANKEN_
#define JANKEN_

static const enum Hand
{
	Gu,
	Tyoki,
	Pa,
};

static const enum Words
{
	Player,
	Enemy,
	Points,
};

static const char const* hand[] = { "�O�[", "�`���L", "�p�[", };
static const char const* words[] = { "���Ȃ�", "������", "�_", };
static int player;
static int playerPoint = 0;
static int enemy;
static int enemyPoint = 0;

void Playerhand();

void Enemyhand();

void Showhand(int otherwords, int otherhand);

void Showpoint(int otherwords, int otherpoint);

bool Compare();

void InitRand();

void InitPoint();

void Gamejanken();
#endif //JANKEN_
