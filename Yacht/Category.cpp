#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include "Category.h"

using namespace std;

int Category::upperCategory(Dice Dice_List[], int eyes) {
	int cnt = countDice(Dice_List, eyes);
	int pts = calculatePoint(cnt, eyes);

	return pts;
}

int Category::Bonus(int pts_check) {
	if (pts_check == 63)
		return 35;
	else
		return 0;
}

int Category::FourOfAKind(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int pts = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].getEyes()) {
		case 1:
			cnt[0] = cnt[0] + 1;
		case 2:
			cnt[1] = cnt[1] + 1;
		case 3:
			cnt[2] = cnt[2] + 1;
		case 4:
			cnt[3] = cnt[3] + 1;
		case 5:
			cnt[4] = cnt[4] + 1;
		case 6:
			cnt[5] = cnt[5] + 1;
		}
	}
	for (int j = 0; j <= 5; j++) {
		if (cnt[j] >= 4) { // 특정 cnt 값이 4 이상일 경우 (조건 달성 시)
			pts = (j + 1) * 4;
			return pts;// 네 개의 주사위 총합 반환
		}
	}
	return 0; // 아닐 경우 0 반환
}

int Category::FullHouse(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_pair = 0;
	int check_triple = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].getEyes()) {
		case 1:
			cnt[0] = cnt[0] + 1;
		case 2:
			cnt[1] = cnt[1] + 1;
		case 3:
			cnt[2] = cnt[2] + 1;
		case 4:
			cnt[3] = cnt[3] + 1;
		case 5:
			cnt[4] = cnt[4] + 1;
		case 6:
			cnt[5] = cnt[5] + 1;
		}
	}
	for (int j = 0; j <= 5; j++) {
		if (cnt[j] == 2) {
			check_pair = 1;
		}
		if (cnt[j] == 3) {
			check_triple = 3;
		}
	}
	if (check_pair >= 1 && check_triple >= 1) { // 풀하우스가 충족된다면
		return 25; // 25점 반환
	}
	return 0; // 아닐 경우 0 반환
}

int Category::SmallStraight(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_straight = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].getEyes()) {
		case 1:
			cnt[0] = cnt[0] + 1;
		case 2:
			cnt[1] = cnt[1] + 1;
		case 3:
			cnt[2] = cnt[2] + 1;
		case 4:
			cnt[3] = cnt[3] + 1;
		case 5:
			cnt[4] = cnt[4] + 1;
		case 6:
			cnt[5] = cnt[5] + 1;
		}
	}
	for (int j = 0; j <= 5; j) {
		if (cnt[j] >= 1) {
			check_straight++;
		}
		else {
			check_straight = 0;
		}
	}
	if (check_straight >= 4) { // 4개 이상이 이어진다면
		return 30; // 30점 반환
	}
	return 0; // 아닐 경우 0 반환
}

int Category::LargeStraight(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_straight = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].getEyes()) {
		case 1:
			cnt[0] = cnt[0] + 1;
		case 2:
			cnt[1] = cnt[1] + 1;
		case 3:
			cnt[2] = cnt[2] + 1;
		case 4:
			cnt[3] = cnt[3] + 1;
		case 5:
			cnt[4] = cnt[4] + 1;
		case 6:
			cnt[5] = cnt[5] + 1;
		}
	}
	for (int j = 0; j <= 5; j) {
		if (cnt[j] >= 1) {
			check_straight++;
		}
		else {
			check_straight = 0;
		}
	}
	if (check_straight >= 5) { // 5개 이상이 이어진다면
		return 30; // 30점 반환
	}
	return 0; // 아닐 경우 0 반환
}

int Category::Chance(Dice Dice_List[]) {
	int pts = 0;

	for (int i = 0; i <= 4; i++) {
		pts += Dice_List[i].getEyes();
	}
	return pts; // 주사위의 총합 반환
}

int Category::Yacht(Dice Dice_List[]) {
	int cnt[6] = { 0, };

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].getEyes()) {
		case 1:
			cnt[0] = cnt[0] + 1;
		case 2:
			cnt[1] = cnt[1] + 1;
		case 3:
			cnt[2] = cnt[2] + 1;
		case 4:
			cnt[3] = cnt[3] + 1;
		case 5:
			cnt[4] = cnt[4] + 1;
		case 6:
			cnt[5] = cnt[5] + 1;
		}
	}
	for (int j = 0; j <= 5; j++) {
		if (cnt[j] == 5) { // 5개가 모두 같은 눈이라면
			return 50; // 50점 반환
		}
	}
	return 0;
}

int Category::Total(Category Category[], int bonus_pts) {
	int total_pts = 0;
	for (int i = 0; i < 12; i++) {
		total_pts += Category[i].getPoints();
	}
	total_pts += bonus_pts;
	return total_pts;
}