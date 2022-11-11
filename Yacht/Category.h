#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include "Dice.h"
#include "Calculate.h"

/*
��� �׸� (index / category)
�� 12���� Category �迭 ���� (Category category = new Category[12];)
Bonus, Total�� ��� ���� int ���·� ���� �÷���ȭ�鿡�� ���� ��� (Category ���� ���ϰ�)
0./ Ones : 1�� ���� �ֻ����� ��
1 / Twos : 2�� ���� �ֻ����� ��
2 / Threes : 3�� ���� �ֻ����� ��
3 / Fours : 4�� ���� �ֻ����� ��
4 / Fives : 5�� ���� �ֻ����� ��
5 / Sixes : 6�� ���� �ֻ����� ��
X / ���ʽ� : ����׸� ���� 63���� ���� ��� +35��
6 / Four of a kind : �ֻ��� 4���� ���� ������ ��, �ֻ��� 5���� ��
7 / Full house : ���� ������ �ֻ����� ���� 3���� 2���� ���� ��, +25��
8 / Small straight : �ֻ��� 4���� ���� �̾����� ���� ��, +30��
9 / Large straight : �ֻ��� 5���� ���� �̾����� ���� ��, +40��
10 / Chance : �ֻ��� 5���� ���� �� ��
11 / Yacht : �ֻ��� 5���� ���� ��� ���� ��, +50��
*/

using namespace std;

class Category : public Calculate {
private:
	int pts;

public:
	Category() {
		this->pts = 0;
	}

	int countDice(Dice Dice_List[], int eyes) {
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (Dice_List[i].getEyes() == eyes) {
				cnt++;
			}
		}
		return cnt;
	}

	int calculatePoint(int cnt, int eyes) {
		int pts = cnt * eyes;
		return pts;
	}

	void setPoints(int points) {
		this->pts = points;
	}

	int getPoints() {
		return this->pts;
	}

	int upperCategory(Dice dice_List[], int eyes);
	int Bonus(int pts_check);

	int FourOfAKind(Dice Dice_List[]);
	int FullHouse(Dice Dice_List[]);
	int SmallStraight(Dice Dice_List[]);
	int LargeStraight(Dice Dice_List[]);
	int Chance(Dice Dice_List[]);
	int Yacht(Dice Dice_List[]);
	int Total(Category Category[], int bonus_pts);
};

