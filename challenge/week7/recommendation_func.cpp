#include <iostream>
using namespace std;

const int NUM_USERS = 3;		//상수 선언
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];		//변수 선언
int maxPreferenceIndex = 0;

//사용자 선호도 입력받기
void initializePreferences() 
{	
	//사용자와 항목 간의 선호도를 입력 받아 2차원 배열 초기화
	for (int i = 0; i < NUM_USERS; ++i) {			//세 명의 선호도를 입력받음
		cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해 ):";
		for (int j = 0; j < NUM_ITEMS; j++) {		//세 개의 선호도를 입력받음
			cin >> userPreferences[i][j];
		}
	}

}

//각 사용자에 대한 추천 항목 찾기
void findRecommendedItems() {
	for (int i = 0; i < NUM_USERS; ++i) {
		
		for (int j = 1; j < NUM_ITEMS; j++) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {		//가장 선호도가 높은 항목 찾기
				maxPreferenceIndex = j;
			}
		}

		//사용자에게 추천하는 항목 출력
		cout << "사용자 " << (i + 1) << "에게 추천하는 항목: ";
		cout << (maxPreferenceIndex + 1) << endl;
	}

}

int main() {
	
	initializePreferences();		//사용자 선호도를 입력 받는 함수

	findRecommendedItems();			//사용자 별 추천 항목을 찾고 출력하는 함수

	return 0;
}