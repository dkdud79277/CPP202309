#include <iostream>
using namespace std;

int main()
{
	int a, b, c, smallest;						 //���� ����

	cout << "3���� ������ �Է��Ͻÿ� : ";
	cin >> a >> b >> c;							//3���� ���� �Է¹ޱ�

	if (a < b && a < c)							//���ǹ�1
		smallest = a;							//���ǹ�1�� true�� �� ����
	else if (b < a && b < c)					//���ǹ�2 -> ���ǹ�1�� false�� ��
		smallest = b;							//���ǹ�2�� true�� �� ����
	else
		smallest = c;							//���ǹ�2�� false�� ��

	cout << "���� ���� ������" << smallest << endl;
	return 0;
}