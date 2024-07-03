#include <iostream>
#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1 && number < 4) {
			result.push_back(number);
		}
		else if (number == 4) {
			result.push_back(2);
			result.push_back(2);
		}
		return result;
	}

private:

};