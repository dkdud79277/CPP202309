#include <iostream>
using namespace std;

int main()
{
	int a, b, c, smallest;						 //변수 선언

	cout << "3개의 정수를 입력하시오 : ";
	cin >> a >> b >> c;							//3개의 정수 입력받기

	if (a < b && a < c)							//조건문1
		smallest = a;							//조건문1이 true일 때 실행
	else if (b < a && b < c)					//조건문2 -> 조건문1이 false일 때
		smallest = b;							//조건문2가 true일 때 실행
	else
		smallest = c;							//조건문2가 false일 때

	cout << "가장 작은 정수는" << smallest << endl;
	return 0;
}