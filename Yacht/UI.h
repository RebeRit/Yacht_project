#include <iostream>
#include <windows.h>
#ifndef UI_H

class UI {
public:
	UI();

	void start_ui(); //메인화면 ui 출력

	void help_ui(); //도움말 UI 출력 (총 3페이지로 구성)

	int ending_ui(int result); //게임 종료 시 ui 출력 //우선 WIN으로 표시 이후 점수만 구현

	void ingame_ui();
};

#endif