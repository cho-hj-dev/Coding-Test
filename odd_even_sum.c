#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
	int answer = 0;
	//만약 n이 짝수이면 -> n 이하의 모든 짝수 양의 정수의 제곱의 합 return
	if (n % 2 == 0) {
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {//짝수이면
				answer += i * i;
			}
		}
	}
	//만약 n이 홀수이면 -> n 이하의 모든 홀수 양의 정수 합 return
	else {
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0) { //홀수이면
				answer += i;
			}
		}

	}
	return answer;
}
