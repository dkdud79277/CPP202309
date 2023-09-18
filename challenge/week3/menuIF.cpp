#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. 파일 저장" << endl;						//메뉴 출력
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;										//입력값 변수에 저장

	if (choice == 1)									//조건문1
		cout << "파일 저장을 선택했습니다." << endl;	//조건문1이 true일 때 실행
	else if (choice == 2)								//조건문2 : 조건문1이 false일 때
		cout << "파일 닫기를 선택했습니다." << endl;	//조건문2가 true일 때
	else if (choice == 3)								//조건문3 : 조건문2가 false일 때
		cout << "프로그램을 종료합니다." << endl;		//조건문3이 true일 때 실행
	else
		cout << "잘못된 선택입니다." << endl;			//조건문3이 false일 때 실행

	return 0;
}