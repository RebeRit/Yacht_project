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
-6. Three of a kind : 주사위 3개의 눈이 동일할 때, 주사위 5개의 합
-7. Four of a kind : 주사위 4개의 눈이 동일할 때, 주사위 5개의 합
-8. Full house : 눈이 동일한 주사위가 각각 3개와 2개가 있을 때, +25점
-9. Small straight : 주사위 4개의 눈이 이어지는 수일 때, +30점
-10. Large straight : 주사위 5개의 눈이 이어지는 수일 때, +40점
-11. Chance : 주사위 5개의 눈의 총 합
-12. Yahtzee : 주사위 5개의 눈이 모두 같을 때, +50점
*/
#include <iostream>
#include <windows.h> //Sleep() 함수를 위한 헤더파일
#include <conio.h>
#include "Yacht.h"
#include "Dice.h"
#include "Ui.h"

using namespace std;

int main()
{
	Yacht yacht;
	UI ui;
	while (true)
	{
		int result = -1; //결과를 저장하는 변수
		ui.start_ui(); //메인화면 UI
		result = yacht.play_Yacht(); //게임 진행
		if (ui.ending_ui(result) == 0) //1이 입력된 경우 메인화면 이동하기
		{
			break;
		}
	}
	return 0;
}

/*
특수한 함수 사용법
Sleep(int time); //다음 연산까지의 딜레이 생성 //1초 당 1000 입력
srand((unsigned)time(0)); //랜덤 시드 생성 //최초 1회만 해야 계속 값이 바뀜
rand(); //랜덤값 산출 //나머지를 구하는 연산자(%)를 통해 범위 설정 가능
std::std::cin //std::cin만 사용했을 때, 어디선가 중복이 되서 오류가 떠서 이렇게 써야 댐
*/