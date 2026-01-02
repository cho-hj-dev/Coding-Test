#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
	//모든 원소들의 곱 < 모든 원소들의 합의 제곱 -> 1 return
	//모든 원소들의 곱 > 모든 원소들의 합의 제곱 -> 0 return
	//ex) 3,4,5,2,1 원소들의 곱: 120, 원소들의 합의 제곱: 225  -> return 1
	//ex) 5,7,8,3 원소들의 곱: 840, 원소들의 합의 제곱: 529 -> return 0
	int mul = 1; //곱
	int add = 0; //합의 제곱
	for (int i = 0; i < num_list.size(); i++) {
		add += num_list[i];
		mul *= num_list[i];
	}
	if (mul < add * add) { //모든 원소들의 곱 < 모든 원소들의 합의 제곱    
		return 1;
	}
	else {
		return 0;
	}
}
