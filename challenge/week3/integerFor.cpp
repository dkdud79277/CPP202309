#include <iostream>
using namespace std;

int main() {
	int userInput =0;

	cout << "정수를 10번 입력하세요. (0을 입력하면 종료) : ";
	for (int i = 0; i<10; i++) {			//i변수 선언, 사용자입력 횟수가 10보다 작을 때까지 실행, 반복할 때마다 i+1
		cin >> userInput;					//userInput에 값 받기
		if (userInput == 0) {				//0을 입력하면 종료
			break;
		}
		cout << "입력값 : " << userInput << " 횟수 : " << i++ << endl;			//출력하기
	}
	cout << "종료 되었습니다.";

	return 0;
}