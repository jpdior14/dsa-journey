#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> nums = {4, 2, 9, 1, 7};

	cout << "Here's each number in this vector:\n";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}

	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
	}
	cout << "\nAnd now the sum of all of them: " << sum << endl;

	int max = nums[0];
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > max) max = nums[i];
	}
	cout << "\nAlso the largest number in the array is " << max << endl;

	return 0;
}
