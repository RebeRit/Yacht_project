#include <iostream>
#include <windows.h>
#include <conio.h>
#ifndef DICE_H

class Dice {
private:
	int dice_d = 0;
	int select_reroll = 0;

public:
	Dice() {
		this->dice_d = 0;
		this->select_reroll = 0;
	}

	int reroll_Dice(int dice_d, int select_reroll) {
		int reroll_d = dice_d;

		if (select_reroll == 1) {
			reroll_d = rand() % 6 + 1;
			return reroll_d;
		}
		else {
			return reroll_d;
		}
	}

	int getEyes() {
		return this->dice_d;
	}

	void changeRerollSelect() {
		if (this->select_reroll == 1) {
			this->select_reroll = 0;
		}
		else {
			this->select_reroll = 1;
		}
	}
};

#endif