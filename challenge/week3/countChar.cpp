#include <iostream>
using namespace std;

int main() {
	int vowel = 0;
	int consonant = 0;
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	char ch; //사용자 입력 저장하기 위한 변수

	while (cin >>ch ){
		switch (ch) {
		case 'a': case 'e':case 'i':case 'o':case 'u':			//a, e, i, o, u를 입력받았을 경우 vowel+1
			vowel++;
			break;

		default:												//그 외의 경우 consonant+1
			consonant++;
		}
	}

	cout << "모음 : " << vowel << endl;							//출력하기
	cout << "자음 : " << consonant << endl;
	return 0;
}