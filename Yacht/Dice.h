#include <iostream>
#include <windows.h>
#include <conio.h>
#ifndef DICE_H

/*
상단 항목
-0. Aces : 1이 나온 주사위의 합
-1. Twos : 2이 나온 주사위의 합
-2. Threes : 3이 나온 주사위의 합
-3. Fours : 4이 나온 주사위의 합
-4. Fives : 5이 나온 주사위의 합
-5. Sixes : 6이 나온 주사위의 합
※보너스 : 상단항목 합이 63점을 넘을 경우 +35점

하단 항목
-6. Four of a kind : 주사위 4개의 눈이 동일할 때, 주사위 5개의 합
-7. Full house : 눈이 동일한 주사위가 각각 3개와 2개가 있을 때, +25점
-8. Small straight : 주사위 4개의 눈이 이어지는 수일 때, +30점
-9. Large straight : 주사위 5개의 눈이 이어지는 수일 때, +40점
-10. Chance : 주사위 5개의 눈의 총 합
-11. Yahtzee : 주사위 5개의 눈이 모두 같을 때, +50점
*/

class Dice {
public:
	int dice_d = 0; // 주사위의 눈
	int reroll = 0; // 주사위를 다시 던질 것인지 확인하는 변수

	Dice(); // 각각의 주사위 생성 코드

	int reroll_Dice(int dice_d, int reroll); // 주사위를 다시 돌리는 코드

	int Aces(Dice Dice_List[]); // 각 족보별로 점수를 저장하는 코드, 상단부분의 1~6번

	int Twos(Dice Dice_List[]);

	int Threes(Dice Dice_List[]);

	int Fours(Dice Dice_List[]);

	int Fives(Dice Dice_List[]);

	int Sixes(Dice Dice_List[]);

	int check_bonus(int points_upper);

	int Four_Of_A_Kind(Dice Dice_List[]); // 하단부 7~12번

	int Full_House(Dice Dice_List[]);

	int Small_Straight(Dice Dice_List[]);

	int Large_Straight(Dice Dice_List[]);

	int Chance(Dice Dice_List[]);

	int Yahtzee(Dice Dice_List[]);

};

#endif