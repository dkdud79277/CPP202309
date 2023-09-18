#include <iostream>
using namespace std;

int main()
{
	int number;									//변수 선언
	cout << "숫자를 입력하시오: " << endl;
	cin >> number;								//number에 입력받은 숫자 저장

	if (number == 0)							//조건문1
		cout << "zero \n";						//조건문1이 true일 때 실행
	else if (number == 1)						//조건문2 : 조건문1이 false일 때
		cout << "one \n";						//조건문2가 true일 때 실행
	else
		cout << "many \n";						//조건문2가 false일 때 실행
}