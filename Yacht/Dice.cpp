#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include "Dice.h"

using namespace std;

Dice::Dice() { // �ֻ��� ���� (�ֻ����� ����Ʈ���·� ���� ����)
	int dice_d = 0;
	int reroll = 1;
}

int Dice::reroll_Dice(int dice_d, int reroll) { // �ֻ����� �ٽ� ������ �ڵ�, �� ó������ �ڵ������� reroll = 1�� �Ǳ� ������ ���� ���ư�
	int reroll_d = rand() % 6 + 1;

	if (reroll == 1) {
		reroll = 0;
		return reroll_d;
	}
	else {
		return dice_d;
	}
}

int Dice::Aces(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 1�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 1)
			cnt++;
	}

	return 1 * cnt;
}

int Dice::Twos(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 2�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 2)
			cnt++;
	}

	return 2 * cnt;
}

int Dice::Threes(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 3�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 3)
			cnt++;
	}

	return 3 * cnt;
}

int Dice::Fours(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 4�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 4)
			cnt++;
	}

	return 4 * cnt;
}

int Dice::Fives(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 5�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 5)
			cnt++;
	}

	return 5 * cnt;
}

int Dice::Sixes(Dice Dice_List[]) {
	int cnt = 0; // ����Ʈ�� �ֻ����� ���� ������ 6�� �ֻ����� ���� Ȯ��
	for (int i = 0; i <= 4; i++) {
		if (Dice_List[i].dice_d == 6)
			cnt++;
	}

	return 6 * cnt;
}

int check_bonus(int points_upper) {
	if (points_upper >= 63) {
		return 35;
	}
	return 0;
}


int Dice::Four_Of_A_Kind(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int pts = 0;

	for (int i = 0; i <= 4; i++) {
		pts += Dice_List[i].dice_d;
		switch (Dice_List[i].dice_d) {
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
		if (cnt[j] >= 4) { // Ư�� cnt ���� 4 �̻��� ��� (���� �޼� ��)
			return pts; // ���� ��ȯ
		}
	}
	return 0; // �ƴ� ��� 0 ��ȯ
}

int Dice::Full_House(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_pair = 0;
	int check_triple = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].dice_d) {
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

	if (check_pair >= 1 && check_triple >= 1) { // Ǯ�Ͽ콺�� �����ȴٸ�
		return 25; // 25�� ��ȯ
	}
	return 0; // �ƴ� ��� 0 ��ȯ
}

int Dice::Small_Straight(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_straight = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].dice_d) {
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

	if (check_straight >= 4) { // 4�� �̻��� �̾����ٸ�
		return 30; // 30�� ��ȯ
	}
	return 0; // �ƴ� ��� 0 ��ȯ
}

int Dice::Large_Straight(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_straight = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].dice_d) {
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

	if (check_straight >= 5) { // 5�� �̻��� �̾����ٸ�
		return 30; // 40�� ��ȯ
	}
	return 0; // �ƴ� ��� 0 ��ȯ
}

int Dice::Chance(Dice Dice_List[]) {
	int pts = 0;

	for (int i = 0; i <= 4; i++) {
		pts += Dice_List[i].dice_d;
	}

	return pts; // �ֻ����� ���� ��ȯ
}

int Dice::Yahtzee(Dice Dice_List[]) {
	int cnt[6] = { 0, };
	int check_Yahtzeet = 0;

	for (int i = 0; i <= 4; i++) {
		switch (Dice_List[i].dice_d) {
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
		if (cnt[j] == 5) { // 5���� ��� ���� ���̶��
			return 50; // 50�� ��ȯ
		}
	}
	return 0;
}