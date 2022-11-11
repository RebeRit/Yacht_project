#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include "Dice.h"
#include "Calculate.h"

/*
상단 항목 (index / category)
총 12개의 Category 배열 생성 (Category category = new Category[12];)
Bonus, Total의 경우 따로 int 형태로 메인 플레이화면에서 직접 계산 (Category 설정 못하게)
0./ Ones : 1이 나온 주사위의 합
1 / Twos : 2이 나온 주사위의 합
2 / Threes : 3이 나온 주사위의 합
3 / Fours : 4이 나온 주사위의 합
4 / Fives : 5이 나온 주사위의 합
5 / Sixes : 6이 나온 주사위의 합
X / 보너스 : 상단항목 합이 63점을 넘을 경우 +35점
6 / Four of a kind : 주사위 4개의 눈이 동일할 때, 주사위 5개의 합
7 / Full house : 눈이 동일한 주사위가 각각 3개와 2개가 있을 때, +25점
8 / Small straight : 주사위 4개의 눈이 이어지는 수일 때, +30점
9 / Large straight : 주사위 5개의 눈이 이어지는 수일 때, +40점
10 / Chance : 주사위 5개의 눈의 총 합
11 / Yacht : 주사위 5개의 눈이 모두 같을 때, +50점
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

