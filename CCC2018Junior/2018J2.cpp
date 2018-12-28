//	J2 2018

#include <iostream>

int main() {
	int size, empty = 0;
	
	std::cin >> size;
	
	std::string input1, input2;
	
	std::cin >> input1;
	
	std::cin >> input2;
	
	for (int i = 0; i < size; i++) {
		if (input1[i] == '.' && input2[i] == '.') {
			empty++;
		}
	}
	
	std::cout << empty << std::endl;
	
	return 0;
}

		
