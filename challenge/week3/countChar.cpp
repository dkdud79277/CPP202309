#include <iostream>
using namespace std;

int main() {
	int vowel = 0;
	int consonant = 0;
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	char ch; //����� �Է� �����ϱ� ���� ����

	while (cin >>ch ){
		switch (ch) {
		case 'a': case 'e':case 'i':case 'o':case 'u':			//a, e, i, o, u�� �Է¹޾��� ��� vowel+1
			vowel++;
			break;

		default:												//�� ���� ��� consonant+1
			consonant++;
		}
	}

	cout << "���� : " << vowel << endl;							//����ϱ�
	cout << "���� : " << consonant << endl;
	return 0;
}