#include <iostream>
using namespace std;

int main()
{
	int a, b, c, largest;						 //���� ����

	cout << "3���� ������ �Է��Ͻÿ� : ";
	cin >> a >> b >> c;							//3���� ���� �Է¹ޱ�

	if (a > b && a > c)							//���ǹ�1
		largest = a;							//���ǹ�1�� true�� �� ����
	else if (b > a && b > c)					//���ǹ�2 -> ���ǹ�1�� false�� ��
		largest = b;							//���ǹ�2�� true�� �� ����
	else
		largest = c;							//���ǹ�2�� false�� ��

	cout << "���� ū ������" << largest << endl;
	return 0;
}