//	J1 2018

#include <iostream>

int main() {
  	int digits[4];
	std::string answer = "answer";
	
	for (int i = 0; i < 4; i++) {
		std::cin >> digits[i];
	}
	
	if (digits[0] == 8 || digits[0] == 9 || digits[3] == 8 || digits[3] == 9 || digits[1] == digits[2]) {
		answer = "ignore";
	}
	
	std::cout << answer;
	
	return 0;
}
	
