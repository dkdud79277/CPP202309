#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int STUDENT = 5;		//����� �л� �� ����
	const int SUBJECT = 3;		//����� ���� �� ����
	int score[STUDENT][SUBJECT];			//2���� �迭
	string studentNames[STUDENT]			//1���� �迭 studentNames�� �л� �̸� ����
		= { "����", "����", "ö��", "�̹�", "����" };
	string subjectNames[SUBJECT]			//1���� �迭 subjectNames�� ���� �̸� ����
		= { "����", "����","CPP" };

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i]				//����� �л� �̸� ���
			<< "�� ������ �Է��ϼ���." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";	//����� ���� �̸� ���
			cin >> score[i][j];				//2���� �迭 score�� ���� �Է� �ޱ�
		}
	}

	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "�� ��� ������";
		double sum = 0;
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += score[i][j];					//���� ���� ���
		}
		average = sum / SUBJECT;				//���� ��� ���
		cout << average << "�Դϴ�." << endl;	//���� ��� ���
	}

	return 0;
}