#include <iostream>
using namespace std;

int main()
{
	int number;									//���� ����
	cout << "���ڸ� �Է��Ͻÿ�: " << endl;
	cin >> number;								//number�� �Է¹��� ���� ����

	if (number == 0)							//���ǹ�1
		cout << "zero \n";						//���ǹ�1�� true�� �� ����
	else if (number == 1)						//���ǹ�2 : ���ǹ�1�� false�� ��
		cout << "one \n";						//���ǹ�2�� true�� �� ����
	else
		cout << "many \n";						//���ǹ�2�� false�� �� ����
}