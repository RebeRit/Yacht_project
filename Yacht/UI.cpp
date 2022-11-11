#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Yacht.h"
#include "Ui.h"

using namespace std;

UI::UI() {
	int game_ui = 0;
}

void UI::start_ui()
{
	int key;
	while (true)
	{
		system("cls"); // 메인화면
		cout << "\n\n\n";
		cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■        □      □    □□□□□    □□□□□    □      □    □□□□□        ■\n";
		cout << "                ■        □      □    □      □    □            □      □        □            ■\n";
		cout << "                ■        □□□□□    □      □    □            □      □        □            ■\n";
		cout << "                ■            □        □□□□□    □            □□□□□        □            ■\n";
		cout << "                ■            □        □      □    □            □      □        □            ■\n";
		cout << "                ■            □        □      □    □            □      □        □            ■\n";
		cout << "                ■            □        □      □    □□□□□    □      □        □            ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                      [ 1 ]                    게임 시작하기                      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                      [ 2 ]                    게임 설명보기                      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                      [ESC]                    게임 종료하기                      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■ ※ made by Mandarin_Farm                                                         ■\n";
		cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		key = _getch();
		if (key == 49) //게임 시작을 위해 반복문 탈출
		{
			break;
		}
		else if (key == 50) //게임 설명화면으로 이동
		{
			help_ui();
		}
		else if (key == 27) //ESC(게임 종료)
		{
			system("cls");
			cout << "\n\n\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■      □□      □□      □□    □□□          □□□    □    □  □□□□    ■\n";
			cout << "                ■    □        □    □  □    □  □    □        □    □  □    □  □          ■\n";
			cout << "                ■    □        □    □  □    □  □    □        □    □  □    □  □          ■\n";
			cout << "                ■    □  □□  □    □  □    □  □    □        □□□    □□□□  □□□      ■\n";
			cout << "                ■    □    □  □    □  □    □  □    □        □    □      □    □          ■\n";
			cout << "                ■    □    □  □    □  □    □  □    □        □    □      □    □          ■\n";
			cout << "                ■      □□      □□      □□    □□□          □□□        □    □□□□    ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                            made by. Team MandarinFarm                            ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202010950                     박 준 규                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202010969                     진 예 준                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202111063                     구 현 진                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			Sleep(3000);
			exit(0);
		}
	}
}

void UI::help_ui() {

	int help_page = 1;
	int key;

	while(help_page >= 1 && help_page <= 3){
		if (help_page == 1) {
			system("cls");
			cout << "\n\n\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                       [1]                        다음 페이지 >>  ■\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		}
		else if (help_page == 2) {
			system("cls");
			cout << "\n\n\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■  << 이전 페이지                       [2]                        다음 페이지 >>  ■\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		}
		else if (help_page == 3) {
			system("cls");
			cout << "\n\n\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■  << 이전 페이지                       [3]                      메인 화면으로 >>  ■\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		}
		else {
			break;
		}

		key = _getch();

		if (key == 77) { // 방향키 RIGHT 누르면 다음 페이지로 이동
			help_page += 1;
		}
		else if (key == 75) { // 방향키 LEFT 누르면 이전 페이지로 이동
			help_page -= 1;

		}
	}
}

int UI::ending_ui(int result)
{
	int key = 0;

	while (true) {
		system("cls");
		cout << "\n\n\n";
		cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■      □□□  □  □    □□□    □            □□□□□    □    □    □      ■\n";
		cout << "                ■          □  □  □  □      □  □          □          □  □    □    □      ■\n";
		cout << "                ■          □  □  □    □□□    □          □          □  □    □    □      ■\n";
		cout << "                ■          □□□  □                            □□□□□    □□□□  □□      ■\n";
		cout << "                ■          □  □  □  □□□□□□□                          □    □    □      ■\n";
		cout << "                ■        □    □  □  □          □                □        □    □    □      ■\n";
		cout << "                ■      □      □  □  □□□□□□□          □□□□□□□  □□□□    □      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		 printf("                ■                                   총점 : %3d점                                   ■\n", result);
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                      [ 1 ]                    메인으로 가기                      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                      [ESC]                    게임 종료하기                      ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■                                                                                  ■\n";
		cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";

		key = _getch();
		if (key == 49) //다시 메인으로 돌아가기
		{
			return 1;
		}
		else if (key == 27) //게임 종료 (프로그램 종료)
		{
			system("cls");
			cout << "\n\n\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■      □□      □□      □□    □□□          □□□    □    □  □□□□    ■\n";
			cout << "                ■    □        □    □  □    □  □    □        □    □  □    □  □          ■\n";
			cout << "                ■    □        □    □  □    □  □    □        □    □  □    □  □          ■\n";
			cout << "                ■    □  □□  □    □  □    □  □    □        □□□    □□□□  □□□      ■\n";
			cout << "                ■    □    □  □    □  □    □  □    □        □    □      □    □          ■\n";
			cout << "                ■    □    □  □    □  □    □  □    □        □    □      □    □          ■\n";
			cout << "                ■      □□      □□      □□    □□□          □□□        □    □□□□    ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                            made by. Team MandarinFarm                            ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202010950                     박 준 규                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202010969                     진 예 준                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                      202111063                     구 현 진                      ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■                                                                                  ■\n";
			cout << "                ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
			Sleep(3000);
			exit(0);
		}
	}

}

void UI::ingame_ui() {

}