#include <iostream>
#include <windows.h>
#ifndef UI_H

class UI {
public:
	UI();

	void start_ui(); //����ȭ�� ui ���

	void help_ui(); //���� UI ��� (�� 3�������� ����)

	int ending_ui(int result); //���� ���� �� ui ��� //�켱 WIN���� ǥ�� ���� ������ ����

	void ingame_ui();
};

#endif