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
	int Dice[5]; //�ֻ���
	int answer = -1; //�÷��̾��� ����� ��� �� ���
	bool Player_count[13] = { false, }; //�÷��̾��� ���� ä��⸦ ���� 0, 1 �ڷ���
	int Player_point[13] = { 0, }; //�÷��̾��� ���� ������ ǥ���ϱ� ���� �ڷ���
	int Reset_Dice = 3;

	for (int i = 0; i < 13; i++) //������ 13���̱� ������, ������ 13�Ͽ� ����
	{
		system("cls");
		//�÷��̾��� ����
		for (int i = 0; i <= 4; i++) {
			Dice[i] = reroll_dice(i);
		}
		cout << endl;
		cout << "�� �� : " << i << endl;//�׽�Ʈ�� : ���° �ݺ����� �˾ƺ���
		for (int j = 0; j < 13; j++)
		{
			if (j == 0)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Aces : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Aces : " << Player_point[j] << endl;
				}
			}
			else if (j == 1)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Twos : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Twos : " << Player_point[j] << endl;
				}
			}
			else if (j == 2)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Threes : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Threes : " << Player_point[j] << endl;
				}
			}
			else if (j == 3)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Fours : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Fours : " << Player_point[j] << endl;
				}
			}
			else if (j == 4)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Fives : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Fives : " << Player_point[j] << endl;
				}
			}
			else if (j == 5)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Sixes : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Sixes : " << Player_point[j] << endl;
				}
			}
			else if (j == 6)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Three of a kind : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Three of a kind : " << Player_point[j] << endl;
				}
			}
			else if (j == 7)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Four of a kind : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Four of a kind : " << Player_point[j] << endl;
				}
			}
			else if (j == 8)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Full house : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Full house : " << Player_point[j] << endl;
				}
			}
			else if (j == 9)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Small straight : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Small straight : " << Player_point[j] << endl;
				}
			}
			else if (j == 10)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Large straight : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Large straight : " << Player_point[j] << endl;
				}
			}
			else if (j == 11)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Chance : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Chance : " << Player_point[j] << endl;
				}
			}
			else if (j == 12)
			{
				if (Player_count[j] == false)
				{
					cout << "��" << j + 1 << ". Yahtzee : " << Player_point[j] << endl;
				}
				else
				{
					cout << "��" << j + 1 << ". Yahtzee : " << Player_point[j] << endl;
				}
			}
		}
		cout << "���� �ֻ��� �ٽ� ������ : " << Reset_Dice << endl;
		cout << "����(�ֻ��� �ٽ� ������ : 0) >";
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
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 2)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 3)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 4)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 5)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 6)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 7)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 8)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 9)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 10)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 11)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		else if (answer == 12)
		{
			if (Player_count[answer - 1] == false)
			{
				Reset_Dice = 3;
				Player_count[answer - 1] == true;
				//��Ģ�� �´� ���� �߰� ���� ����
			}
		}
		//������� �̾ �Ͻø� �˴ϴ�...............
	}
	return 0; //�ӽ÷� ������ �¸����� ��ȯ
}*/

int Yacht::is_countinue()
{
	int a;
	while (true)
	{
		cout << "����ϱ� :1, �׸��ϱ� : 0\n>";
		std::cin >> a;
		if ((a == 1) || (a == 0)) //a�� �������� ��(0, 1)�� �Է����� ���, �ݺ����� �����ϰ� a���� ��ȯ //�ƴ� ��� �ݺ�
		{
			break;
		}
	}
	return a;
}