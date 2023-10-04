#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int numCell = 10;			//numCell ����� ����
	int numList[numCell][numCell];	//2�����迭

	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000;			//0~999�� ������ �� ����
			numList[i][j] = elem;				//���� 2���� �迭�� ����
			cout << i << "," << j << ":" << elem << endl;
		}
	}
	cout << endl;

	int max = 0;
	int maxI =0;
	int maxJ=0;
	int value = 0;

	for (int i = 0; i < numCell;i++) {
		int j = 0;								//j����		
		for (auto value : numList[i]) {			//i��° �ٿ� �ִ� ���� ��� ������, �� �ϳ��ϳ��� value�� ���� =>j��� �ε��� x, �� ĭ�� ���� �������� ����
			if (value > max) {					//max�� ����� ������ value�� ũ�ٸ� max�� �����
				max = value;
				maxI = i;
				maxJ = j;
			}
			j++;								//for���� ���� �Ŀ� j++�� �����ؾ��� => for���� ������ ���� j++ �ϸ� maxJ�� �� ĭ �� ū ���� ����Ǳ� ������
		}
	}
	cout << "���� ū ���� " << max << "�̰� ";									//��� ���
	cout << "i�� j�� ���� " << maxI << "," << maxJ << " �Դϴ�." << endl;
	cout << "���� ��� : " << numList[maxI][maxJ] << endl;

	return 0;
}