#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "1. ���� ����" << endl;						//�޴� ���
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;										//�Է°� ������ ����

	if (choice == 1)									//���ǹ�1
		cout << "���� ������ �����߽��ϴ�." << endl;	//���ǹ�1�� true�� �� ����
	else if (choice == 2)								//���ǹ�2 : ���ǹ�1�� false�� ��
		cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;	//���ǹ�2�� true�� ��
	else if (choice == 3)								//���ǹ�3 : ���ǹ�2�� false�� ��
		cout << "���α׷��� �����մϴ�." << endl;		//���ǹ�3�� true�� �� ����
	else
		cout << "�߸��� �����Դϴ�." << endl;			//���ǹ�3�� false�� �� ����

	return 0;
}