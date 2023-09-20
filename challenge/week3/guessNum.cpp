#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));	//random 함수 관련 설정

	int answer = rand() % 100; //정답
	int tries = 0; //시도 횟수 저장하는 변수

	int guess; //사용자 입력 저장하기 위한 변수

	//HINT : while / do-while문

	do {
		cout << "정답을 추측하여 보시오 : " << endl;
		cin >> guess;					//사용자가 정답을 입력
		tries++;						//정답을 입력할 때마다 tries +1

		if (guess > answer)
			cout << "제시한 정수가 높습니다." << endl;		//추측한 숫자가 정답보다 클 경우 출력
		if (guess < answer)
			cout << "제시한 정수가 낮습니다." << endl;		//추측한 숫자가 정답보다 작을 경우 출력
	} while (guess != answer);

	cout << "축하합니다. 시도횟수=" << tries << endl;		//추측한 숫자와 정답이 일치할 경우 출력
	return 0;
}