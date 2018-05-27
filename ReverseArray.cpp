#include <iostream>

int main() {
	int size;
	std::cout << "Enter size of array" << std::endl;
	std::cin >> size;
	int * arr = new int[size];
	int res;
	for (int i = 0; i < size; ++i) {
		std::cout << "Enter array element" << std::endl;
		std::cin >> arr[i];
	}
		for (int i = 0; i < size / 2; ++i) {
			res = arr[size - 1 - i];
			arr[size - 1 - i] = arr[i];
			arr[i] = res;
		}
	
	std::cout << std::endl;
	std::cout << "Reverse array" << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
}
