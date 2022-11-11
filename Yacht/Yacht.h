#include <iostream>
#include <windows.h>
#ifndef YACHT_H

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

class Yacht {
public:
	Yacht(); //랜덤 시드 설정을 위한 생성자

	int play_Yacht(); //게임 진행 코드

	int is_countinue(); //게임이 끝날 때마다, 계속할 건지 그만둘 건지 물어보는 함수

};
#endif