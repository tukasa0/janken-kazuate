#include "select.h"
#include <iostream>
using namespace std;

void Select()
{
	static int select = 0;	

	cout << "‚Ç‚ê‚ð—V‚Ñ‚Ü‚·‚©H" << endl;

	while (select != End)
	{
		cout << "‚¶‚á‚ñ‚¯‚ñ > " << Janken << ", ”“–‚Ä > " << Kazuate << ", I—¹ > " << End << endl;

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
			cout << "“ü—Í‚µ’¼‚µ‚Ä‚­‚¾‚³‚¢" << endl;
			continue;
		}

		if (select != End)
		{
			cout << "ŽŸ‚Í‚Ç‚¤‚µ‚Ü‚·‚©H" << endl;
		}
	}
}
