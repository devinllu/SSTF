#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int current = 107;
	//98, 127, 16, 32, 55, 7, 99, 177, 132, 111
	vector<int> input;
	input.push_back(98);
	input.push_back(127);
	input.push_back(16);
	input.push_back(32);
	input.push_back(55);
	input.push_back(7);
	input.push_back(99);
	input.push_back(177);
	input.push_back(132);
	input.push_back(111);

	vector<int> output;

	output.push_back(107);

	
	while (!input.empty()) {
		int min = -1;
		int minValue;
		int minIndex;
		for (int i = 0; i < input.size(); i++) {
			int subtract = abs(current - input[i]);
			// cout << "current min is: " << min << endl;

			if (min == -1 || subtract < min) {

				// cout << "diff of " << input[i] << " and " << current << " : is " << abs(current - input[i]) << endl;
				min = subtract;
				minValue = input[i];
				minIndex = i;
			}
		}
		// cout << "diff: " << abs(current - min) << endl;

		input.erase(input.begin() + minIndex);
		output.push_back(minValue);
		current = minValue;
	}

	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
