#include <iostream>
using namespace std;

int main() {
	const int numCell = 3;
	char board[numCell][numCell]{};
	int x, y; //사용자에게 입력받은 x, y 좌표를 저장할 변수

	//보드판 초기화
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	//게임하는 코드
	int k = 0; //누구 차례인지 체크하기 위한 변수
	char currentUser = 'X'; //현재 유저의 돌을 저장하기 위한 변수 선언 및 초기화
	while (true) {
		//1. 누구의 차례인지 출력
		switch (k % 2) {
		case 0:		//k/2의 나머지가 0인 경우 (k가 짝수인 경우)
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> ";		//1번 유저 차례 출력
			currentUser = 'X';										//1번 유저의 기호 저장
			break;
		case 1:		//k/2의 나머지가 1인 경우 (k가 홀수인 경우)
			cout << k % 2 + 1 << "번 유저(Y)의 차례입니다. -> ";	//2번 유저 차례 출력
			currentUser = 'Y';										//2번 유저의 기호 저장
			break;
		}

		//2. 좌표 입력받기
		cout << "(x, y)좌표를 입력하세요: ";
		cin >> x >> y;		//입력받은 좌표를 x, y에 차례대로 저장

		//3. 입력받은 좌표의 유효성 체크
		if (x >= numCell || y >= numCell) {		//x 또는 y가 numcell의 범위를 벗어난다면(칸에서 벗어난다면) 문구 출력
			cout << x << ", " << y << ":";
			cout << "x와 y 둘 중 하나가 칸을 벗어납니다." << endl;
			continue;
		}
		if (board[x][y] != ' ') {				//사용자에게 입력받은 좌표에 이미 값이 차있을 경우 문구 출력
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
		}

		//4. 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;				//입력받은 좌표에 현재 유저의 기호 저장

		//5. 현재 보드판 출력
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];			//배열에 저장된 값(유저기호 또는 공백) 출력
				if (j == numCell - 1) {			//j좌표가 배열 벗어나면 반복문 종료
					break;
				}
				cout << "  |";					//칸 나누는 기호
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
											//유저 교체

		//6. 모든 칸 다 찼는지 체크하기
		int checked = 0;						//변수 선언, 초기화
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "모든 칸이 다 찼습니다. 종료합니다." << endl;
			break;
		}

		//7. 승자 체크하기
		bool iswin = false;
		//7.1. 가로/세로돌 체크하기
		for (int i = 0; i < numCell; i++) {
			if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {		//가로돌 체크
				cout << "가로에 돌이 모두 놓였습니다!: ";
				iswin = true;
			}
			if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {		//세로돌 체크
				cout << "세로에 모두 돌이 놓였습니다!: ";
				iswin = true;
			}
		}
		//7.2. 대각선돌 체크하기
		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) {			//왼쪽 위에서 오른쪽 아래 대각선 체크
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다!: ";
			iswin = true;
		}
		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {			//오른쪽 위에서 왼쪽 아래 대각선 체크
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!: ";
			iswin = true;
		}

		if (iswin == true) {
			cout << k % 2 + 1 << "번 유저(" << currentUser << ")의 승리입니다!" << endl;						//승자 출력하기
			cout << "종료합니다" << endl;
			break;
		}
		k++;
	}

	return 0;
}