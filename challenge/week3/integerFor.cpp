#include <iostream>
using namespace std;

int main() {
	int userInput =0;

	cout << "������ 10�� �Է��ϼ���. (0�� �Է��ϸ� ����) : ";
	for (int i = 0; i<10; i++) {			//i���� ����, ������Է� Ƚ���� 10���� ���� ������ ����, �ݺ��� ������ i+1
		cin >> userInput;					//userInput�� �� �ޱ�
		if (userInput == 0) {				//0�� �Է��ϸ� ����
			break;
		}
		cout << "�Է°� : " << userInput << " Ƚ�� : " << i++ << endl;			//����ϱ�
	}
	cout << "���� �Ǿ����ϴ�.";

	return 0;
}