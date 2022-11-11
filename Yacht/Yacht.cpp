#include <iostream>
#include <windows.h>
#include <conio.h>
#include "yacht.h"
#include "ui.h"
#include "Dice.h"

using namespace std;

Yacht::Yacht() {
	srand((unsigned)time(0));
}

int Yacht::play_Yacht() {
	int result = 0;
	Dice dice;
	Dice Dice_List[5];

	for (int a = 0; a < 12; a++) {
		for (int b = 0; b <= 4; b++) {
			Dice_List[b].dice_d = Dice_List[b].reroll_Dice(Dice_List[b].dice_d, Dice_List[b].reroll);
		}
	}

	return result;
}



/*int Yacht::play_Yacht()
{
	system("cls");
	int Dice[5]; //주사위
	int answer = -1; //플레이어의 대답을 물어볼 때 사용
	bool Player_count[13] = { false, }; //플레이어의 족보 채우기를 위한 0, 1 자료형
	int Player_point[13] = { 0, }; //플레이어의 족보 점수를 표현하기 위한 자료형
	int Reset_Dice = 3;

	for (int i = 0; i < 13; i++) //족보가 13개이기 때문에, 무조건 13턴에 끝남
	{
		system("cls");
		//플레이어의 차례
		for (int i = 0; i <= 4; i++) {
			Dice[i] = reroll_dice(i);
		}
		cout << endl;
		cout << "턴 수 : " << i << endl;//테스트용 : 몇번째 반복인지 알아보기
		for (int j = 0; j < 13; j++)
		{
			if (j == 0)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Aces : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Aces : " << Player_point[j] << endl;
				}
			}
			else if (j == 1)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Twos : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Twos : " << Player_point[j] << endl;
				}
			}
			else if (j == 2)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Threes : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Threes : " << Player_point[j] << endl;
				}
			}
			else if (j == 3)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Fours : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Fours : " << Player_point[j] << endl;
				}
			}
			else if (j == 4)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Fives : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Fives : " << Player_point[j] << endl;
				}
			}
			else if (j == 5)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Sixes : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Sixes : " << Player_point[j] << endl;
				}
			}
			else if (j == 6)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Three of a kind : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Three of a kind : " << Player_point[j] << endl;
				}
			}
			else if (j == 7)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Four of a kind : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Four of a kind : " << Player_point[j] << endl;
				}
			}
			else if (j == 8)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Full house : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Full house : " << Player_point[j] << endl;
				}
			}
			else if (j == 9)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Small straight : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Small straight : " << Player_point[j] << endl;
				}
			}
			else if (j == 10)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Large straight : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Large straight : " << Player_point[j] << endl;
				}
			}
			else if (j == 11)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Chance : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Chance : " << Player_point[j] << endl;
				}
			}
			else if (j == 12)
			{
				if (Player_count[j] == false)
				{
					cout << "□" << j + 1 << ". Yahtzee : " << Player_point[j] << endl;
				}
				else
				{
					cout << "■" << j + 1 << ". Yahtzee : " << Player_point[j] << endl;
				}
			}
		}
		cout << "남은 주사위 다시 굴리기 : " << Reset_Dice << endl;
		cout << "선택(주사위 다시 굴리기 : 0) >";
		std::cin >> answer;
		if (answer == 0)
		{
			i -= 1;
			Reset_Dice -= 1;
			continue;
		}
		else if (answer == 1)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 2)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 3)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 4)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 5)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 6)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 7)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 8)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 9)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 10)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 11)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		else if (answer == 12)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//규칙에 맞는 점수 추가 구현 해줘
			}
		}
		//여기부터 이어서 하시면 됩니다...............
	}
	return 0; //임시로 무조건 승리만을 반환
}*/

int Yacht::is_countinue()
{
	int a;
	while (true)
	{
		cout << "계속하기 :1, 그만하기 : 0\n>";
		std::cin >> a;
		if ((a == 1) || (a == 0)) //a가 정상적인 값(0, 1)을 입력했을 경우, 반복문을 종료하고 a값을 반환 //아닐 경우 반복
		{
			break;
		}
	}
	return a;
}