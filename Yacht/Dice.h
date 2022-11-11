#include <iostream>
#include <windows.h>
#include <conio.h>
#ifndef DICE_H

/*
��� �׸�
-0. Aces : 1�� ���� �ֻ����� ��
-1. Twos : 2�� ���� �ֻ����� ��
-2. Threes : 3�� ���� �ֻ����� ��
-3. Fours : 4�� ���� �ֻ����� ��
-4. Fives : 5�� ���� �ֻ����� ��
-5. Sixes : 6�� ���� �ֻ����� ��
�غ��ʽ� : ����׸� ���� 63���� ���� ��� +35��

�ϴ� �׸�
-6. Four of a kind : �ֻ��� 4���� ���� ������ ��, �ֻ��� 5���� ��
-7. Full house : ���� ������ �ֻ����� ���� 3���� 2���� ���� ��, +25��
-8. Small straight : �ֻ��� 4���� ���� �̾����� ���� ��, +30��
-9. Large straight : �ֻ��� 5���� ���� �̾����� ���� ��, +40��
-10. Chance : �ֻ��� 5���� ���� �� ��
-11. Yahtzee : �ֻ��� 5���� ���� ��� ���� ��, +50��
*/

class Dice {
public:
	int dice_d = 0; // �ֻ����� ��
	int reroll = 0; // �ֻ����� �ٽ� ���� ������ Ȯ���ϴ� ����

	Dice(); // ������ �ֻ��� ���� �ڵ�

	int reroll_Dice(int dice_d, int reroll); // �ֻ����� �ٽ� ������ �ڵ�

	int Aces(Dice Dice_List[]); // �� �������� ������ �����ϴ� �ڵ�, ��ܺκ��� 1~6��

	int Twos(Dice Dice_List[]);

	int Threes(Dice Dice_List[]);

	int Fours(Dice Dice_List[]);

	int Fives(Dice Dice_List[]);

	int Sixes(Dice Dice_List[]);

	int check_bonus(int points_upper);

	int Four_Of_A_Kind(Dice Dice_List[]); // �ϴܺ� 7~12��

	int Full_House(Dice Dice_List[]);

	int Small_Straight(Dice Dice_List[]);

	int Large_Straight(Dice Dice_List[]);

	int Chance(Dice Dice_List[]);

	int Yahtzee(Dice Dice_List[]);

};

#endif