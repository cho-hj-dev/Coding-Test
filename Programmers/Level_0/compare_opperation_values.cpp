#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
	//a와 b가 주어졌을 때, a+b와 2*a*b를 했을 때 둘 중 더 큰 숫자를 출력
	//a=2 b=91 -> 291 < 364
	//a=91 b=2 -> 912 > 364
	string str_a = to_string(a);
	string str_b = to_string(b);

	string sum_str = str_a + str_b;

	int sum_val = stoi(sum_str);

	if (sum_val >= 2 * a * b) { //더했을 때 더 큰 것
		return sum_val;
	}
	else { //곱했을 때 더 큰 것
		return 2 * a * b;
	}
}
