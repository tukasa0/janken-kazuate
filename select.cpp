#include "select.h"
#include <iostream>
using namespace std;

void Select()
{
	static int select = 0;	

	cout << "�ǂ��V�т܂����H" << endl;

	while (select != End)
	{
		cout << "����񂯂� > " << Janken << ", ������ > " << Kazuate << ", �I�� > " << End << endl;

		cin >> select;

		switch (select)
		{
			case Janken:
				Gamejanken();
				break;

			case Kazuate:
				Gamekazuate();
				break;

			case End:
				break;

		default:
			cout << "���͂������Ă�������" << endl;
			continue;
		}

		if (select != End)
		{
			cout << "���͂ǂ����܂����H" << endl;
		}
	}
}
