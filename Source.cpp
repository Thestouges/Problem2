/*
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<int> products(std::vector<int> list) {
	std::vector<int> result(list.size(), 1);

	for (int i = 0; i < list.size(); i++) {
		for (int j = 0; j < list.size(); j++) {
			if (i == j)
				continue;
			result[j] *= list[i];
		}
	}

	return result;
};

void main() {
	int size;
	std::vector<int> input;

	std::cout << "Size of input: ";
	std::cin >> size;

	for (int i = 0; i < size; i++) {
		int temp;
		std::cout << "Integer " + std::to_string(i) + ": ";
		std::cin >> temp;
		input.push_back(temp);
	}

	std::vector<int> result = products(input);

	for each (int var in result)
	{
		std::cout << var << std::endl;
	}

	system("pause");
}