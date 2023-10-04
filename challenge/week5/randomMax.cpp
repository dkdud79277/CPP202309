#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int numCell = 10;			//numCell 상수로 선언
	int numList[numCell][numCell];	//2차원배열

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000;			//0~999의 랜덤한 수 생성
			numList[i][j] = elem;				//난수 2차원 배열에 저장
			cout << i << "," << j << ":" << elem << endl;
		}
	}
	cout << endl;

	int max = 0;
	int maxI =0;
	int maxJ=0;
	int value = 0;

	for (int i = 0; i < numCell;i++) {
		int j = 0;								//j선언		
		for (auto value : numList[i]) {			//i번째 줄에 있는 값을 모두 가져옴, 값 하나하나를 value에 저장 =>j라는 인덱스 x, 한 칸씩 값을 가져오기 때문
			if (value > max) {					//max에 저장된 값보다 value가 크다면 max에 덮어쓰기
				max = value;
				maxI = i;
				maxJ = j;
			}
			j++;								//for문이 끝난 후에 j++을 실행해야함 => for문이 끝나기 전에 j++ 하면 maxJ에 한 칸 더 큰 값이 저장되기 때문에
		}
	}
	cout << "가장 큰 값은 " << max << "이고 ";									//결과 출력
	cout << "i와 j는 각각 " << maxI << "," << maxJ << " 입니다." << endl;
	cout << "검증 결과 : " << numList[maxI][maxJ] << endl;

	return 0;
}