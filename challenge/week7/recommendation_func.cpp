#include <iostream>
using namespace std;

const int NUM_USERS = 3;		//��� ����
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];		//���� ����
int maxPreferenceIndex = 0;

//����� ��ȣ�� �Է¹ޱ�
void initializePreferences() 
{	
	//����ڿ� �׸� ���� ��ȣ���� �Է� �޾� 2���� �迭 �ʱ�ȭ
	for (int i = 0; i < NUM_USERS; ++i) {			//�� ���� ��ȣ���� �Է¹���
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ���� ):";
		for (int j = 0; j < NUM_ITEMS; j++) {		//�� ���� ��ȣ���� �Է¹���
			cin >> userPreferences[i][j];
		}
	}

}

//�� ����ڿ� ���� ��õ �׸� ã��
void findRecommendedItems() {
	for (int i = 0; i < NUM_USERS; ++i) {
		
		for (int j = 1; j < NUM_ITEMS; j++) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {		//���� ��ȣ���� ���� �׸� ã��
				maxPreferenceIndex = j;
			}
		}

		//����ڿ��� ��õ�ϴ� �׸� ���
		cout << "����� " << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferenceIndex + 1) << endl;
	}

}

int main() {
	
	initializePreferences();		//����� ��ȣ���� �Է� �޴� �Լ�

	findRecommendedItems();			//����� �� ��õ �׸��� ã�� ����ϴ� �Լ�

	return 0;
}