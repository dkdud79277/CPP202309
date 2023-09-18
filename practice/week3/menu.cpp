#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. 파일 저장" << endl;						//메뉴 출력
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;										//입력값 변수에 저장

	switch (choice) {
	case 1:
		cout << "파일 저장을 선택했습니다." << endl;	//case1에 해당할 경우 실행
		break;
	case 2:
		cout << "파일 닫기를 선택했습니다." << endl;	//case2에 해당할 경우 실행
		break;
	case 3:
		cout << "프로그램을 종료합니다." << endl;		//case3에 해당할 경우 실행
		break;
	default:
		cout << "잘못된 선택입니다." << endl;			//해당하는 case가 없을 경우 실행
		break;
	}

	return 0;

}