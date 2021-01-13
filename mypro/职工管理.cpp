#include<iostream>
#include "workManager.h"
using namespace std;

int main() {
	WorkManager WM;
	
	int select = 0;
	
	while (true) {
		
		WM.Show_Menu();

		cout << "请输入您的选择： " << endl;
		cin >> select; // 接受用户的选项

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
			system("cls"); //清屏
			break;
		}
		
	}
	



	system("puase");
	return 0;
}