#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
	string answer = "";
	for (int i = 0; i < k; i++) { //0부터 k까지 반복을 하면서
		answer += my_string;
	}
	return answer;
}
