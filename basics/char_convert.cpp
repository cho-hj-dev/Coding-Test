#include<iostream>
using namespace std;

//대문자는 소문자로, 소문자는 대문자로 변환하는 함수
char ChangeLetter(char letter) {
	if ('A' <= letter && letter <= 'Z') //대문자 입력 -> 소문자로 변환
		letter += 32;
	else if ('a' <= letter && letter <= 'z') //소문자 입력 -> 대문자로 변환
		letter -= 32;
	return letter; //반환하기
}

int main() {
	char a;
	cout << "입력 문자: ";
	cin >> a;
	cout << "ASCII코드: "<<(int)a<<endl<<endl;

	cout << "문자 입력: ";
	cin >> a;
	cout << a << " ---> " << ChangeLetter(a) << endl;
}
