#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. ���� ����" << endl;						//�޴� ���
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;										//�Է°� ������ ����

	switch (choice) {
	case 1:
		cout << "���� ������ �����߽��ϴ�." << endl;	//case1�� �ش��� ��� ����
		break;
	case 2:
		cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;	//case2�� �ش��� ��� ����
		break;
	case 3:
		cout << "���α׷��� �����մϴ�." << endl;		//case3�� �ش��� ��� ����
		break;
	default:
		cout << "�߸��� �����Դϴ�." << endl;			//�ش��ϴ� case�� ���� ��� ����
		break;
	}

	return 0;

}