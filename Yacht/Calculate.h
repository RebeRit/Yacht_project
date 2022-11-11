#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include "Dice.h"

class Calculate {
public:
	virtual int countDice(Dice Dice_List[], int eyes) = 0;

	virtual int calculatePoint(int eyes, int pts) = 0;
};