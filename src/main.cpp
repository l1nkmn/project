#include <iostream>
#include "other.hpp"

int main() {
	int a[3] = { 1, 2, 3 };
	Stack<int> stack(a, 3);
	
	while (stack.isEmpty()) {
		std::cout << stack.pop() << std::endl;
	}

	return 0;
}