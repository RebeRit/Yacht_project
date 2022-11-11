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
-6. Three of a kind : �ֻ��� 3���� ���� ������ ��, �ֻ��� 5���� ��
-7. Four of a kind : �ֻ��� 4���� ���� ������ ��, �ֻ��� 5���� ��
-8. Full house : ���� ������ �ֻ����� ���� 3���� 2���� ���� ��, +25��
-9. Small straight : �ֻ��� 4���� ���� �̾����� ���� ��, +30��
-10. Large straight : �ֻ��� 5���� ���� �̾����� ���� ��, +40��
-11. Chance : �ֻ��� 5���� ���� �� ��
-12. Yahtzee : �ֻ��� 5���� ���� ��� ���� ��, +50��
*/
#include <iostream>
#include <windows.h> //Sleep() �Լ��� ���� �������
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
		int result = -1; //����� �����ϴ� ����
		ui.start_ui(); //����ȭ�� UI
		result = yacht.play_Yacht(); //���� ����
		if (ui.ending_ui(result) == 0) //1�� �Էµ� ��� ����ȭ�� �̵��ϱ�
		{
			break;
		}
	}
	return 0;
}

/*
Ư���� �Լ� ����
Sleep(int time); //���� ��������� ������ ���� //1�� �� 1000 �Է�
srand((unsigned)time(0)); //���� �õ� ���� //���� 1ȸ�� �ؾ� ��� ���� �ٲ�
rand(); //������ ���� //�������� ���ϴ� ������(%)�� ���� ���� ���� ����
std::std::cin //std::cin�� ������� ��, ��𼱰� �ߺ��� �Ǽ� ������ ���� �̷��� ��� ��
*/