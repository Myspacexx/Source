#include<iostream>
#include "workManager.h"
using namespace std;

int main() {
	WorkManager WM;
	
	int select = 0;
	
	while (true) {
		
		WM.Show_Menu();

		cout << "����������ѡ�� " << endl;
		cin >> select; // �����û���ѡ��

		switch (select) {
		
		case 0:
			WM.ExitSystem();
			break;
		case 1:
			
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		default:
			system("cls"); //����
			break;
		}
		
	}
	



	system("puase");
	return 0;
}