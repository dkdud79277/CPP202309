#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "사과";
	string s2;
	// s2 = s1 + " " + 10 + "개" 는 10을 숫자가 아닌 문자로 변환하지 않아서 에러나 난다.
	s2 = s1 + " " + to_string(10) + "개";
	cout << s2 << endl;
}