#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int STUDENT = 5;		//상수로 학생 수 선언
	const int SUBJECT = 3;		//상수로 과목 수 선언
	int score[STUDENT][SUBJECT];			//2차원 배열
	string studentNames[STUDENT]			//1차원 배열 studentNames에 학생 이름 저장
		= { "영수", "영희", "철수", "미미", "쥬쥬" };
	string subjectNames[SUBJECT]			//1차원 배열 subjectNames에 과목 이름 저장
		= { "수학", "영어","CPP" };

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i]				//저장된 학생 이름 출력
			<< "의 성적을 입력하세요." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";	//저장된 과목 이름 출력
			cin >> score[i][j];				//2차원 배열 score에 점수 입력 받기
		}
	}

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "의 평균 점수는";
		double sum = 0;
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += score[i][j];					//점수 총합 계산
		}
		average = sum / SUBJECT;				//점수 평균 계산
		cout << average << "입니다." << endl;	//점수 평균 출력
	}

	return 0;
}