#include "select.h"
#include <iostream>
using namespace std;

void Select()
{
	static int select = 0;	

	cout << "どれを遊びますか？" << endl;

	while (select != End)
	{
		cout << "じゃんけん > " << Janken << ", 数当て > " << Kazuate << ", 終了 > " << End << endl;

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
			cout << "入力し直してください" << endl;
			continue;
		}

		if (select != End)
		{
			cout << "次はどうしますか？" << endl;
		}
	}
}
