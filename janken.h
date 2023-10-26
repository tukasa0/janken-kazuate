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
static int playerPoint;
static int enemy;
static int enemyPoint;

static void Playerhand();

static void Enemyhand();

static void Showhand(int otherwords, int otherhand);

static void Showpoint(int otherwords, int otherpoint);

static bool Compare();

void InitRand();

void Gamejanken();
#endif //JANKEN_
