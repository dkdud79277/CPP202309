#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));	//random �Լ� ���� ����

	int answer = rand() % 100; //����
	int tries = 0; //�õ� Ƚ�� �����ϴ� ����

	int guess; //����� �Է� �����ϱ� ���� ����

	//HINT : while / do-while��

	do {
		cout << "������ �����Ͽ� ���ÿ� : " << endl;
		cin >> guess;					//����ڰ� ������ �Է�
		tries++;						//������ �Է��� ������ tries +1

		if (guess > answer)
			cout << "������ ������ �����ϴ�." << endl;		//������ ���ڰ� ���亸�� Ŭ ��� ���
		if (guess < answer)
			cout << "������ ������ �����ϴ�." << endl;		//������ ���ڰ� ���亸�� ���� ��� ���
	} while (guess != answer);

	cout << "�����մϴ�. �õ�Ƚ��=" << tries << endl;		//������ ���ڿ� ������ ��ġ�� ��� ���
	return 0;
}