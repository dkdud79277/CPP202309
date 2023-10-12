#include <iostream>
using namespace std;

int main() {
	const int numCell = 3;
	char board[numCell][numCell]{};
	int x, y; //����ڿ��� �Է¹��� x, y ��ǥ�� ������ ����

	//������ �ʱ�ȭ
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	//�����ϴ� �ڵ�
	int k = 0; //���� �������� üũ�ϱ� ���� ����
	char currentUser = 'X'; //���� ������ ���� �����ϱ� ���� ���� ���� �� �ʱ�ȭ
	while (true) {
		//1. ������ �������� ���
		switch (k % 2) {
		case 0:		//k/2�� �������� 0�� ��� (k�� ¦���� ���)
			cout << k % 2 + 1 << "�� ����(X)�� �����Դϴ� -> ";		//1�� ���� ���� ���
			currentUser = 'X';										//1�� ������ ��ȣ ����
			break;
		case 1:		//k/2�� �������� 1�� ��� (k�� Ȧ���� ���)
			cout << k % 2 + 1 << "�� ����(Y)�� �����Դϴ�. -> ";	//2�� ���� ���� ���
			currentUser = 'Y';										//2�� ������ ��ȣ ����
			break;
		}

		//2. ��ǥ �Է¹ޱ�
		cout << "(x, y)��ǥ�� �Է��ϼ���: ";
		cin >> x >> y;		//�Է¹��� ��ǥ�� x, y�� ���ʴ�� ����

		//3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		if (x >= numCell || y >= numCell) {		//x �Ǵ� y�� numcell�� ������ ����ٸ�(ĭ���� ����ٸ�) ���� ���
			cout << x << ", " << y << ":";
			cout << "x�� y �� �� �ϳ��� ĭ�� ����ϴ�." << endl;
			continue;
		}
		if (board[x][y] != ' ') {				//����ڿ��� �Է¹��� ��ǥ�� �̹� ���� ������ ��� ���� ���
			cout << x << ", " << y << ": �̹� ���� ���ֽ��ϴ�." << endl;
			continue;
		}

		//4. �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = currentUser;				//�Է¹��� ��ǥ�� ���� ������ ��ȣ ����

		//5. ���� ������ ���
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];			//�迭�� ����� ��(������ȣ �Ǵ� ����) ���
				if (j == numCell - 1) {			//j��ǥ�� �迭 ����� �ݺ��� ����
					break;
				}
				cout << "  |";					//ĭ ������ ��ȣ
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
											//���� ��ü

		//6. ��� ĭ �� á���� üũ�ϱ�
		int checked = 0;						//���� ����, �ʱ�ȭ
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�. �����մϴ�." << endl;
			break;
		}

		//7. ���� üũ�ϱ�
		bool iswin = false;
		//7.1. ����/���ε� üũ�ϱ�
		for (int i = 0; i < numCell; i++) {
			if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {		//���ε� üũ
				cout << "���ο� ���� ��� �������ϴ�!: ";
				iswin = true;
			}
			if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {		//���ε� üũ
				cout << "���ο� ��� ���� �������ϴ�!: ";
				iswin = true;
			}
		}
		//7.2. �밢���� üũ�ϱ�
		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) {			//���� ������ ������ �Ʒ� �밢�� üũ
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!: ";
			iswin = true;
		}
		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {			//������ ������ ���� �Ʒ� �밢�� üũ
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!: ";
			iswin = true;
		}

		if (iswin == true) {
			cout << k % 2 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;						//���� ����ϱ�
			cout << "�����մϴ�" << endl;
			break;
		}
		k++;
	}

	return 0;
}