#include <iostream>
#include <windows.h>
#include <conio.h>
#ifndef DICE_H

class Dice{
private:
	int dice_d;
	int select_reroll;

public:
	Dice();

	int reroll_Dice(int dice_d, int select_reroll);

	int getEyes();

	void changeRerollSelect();
};

#endif