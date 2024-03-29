//chp3ex2
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {

	cout << "정수를 입력하시오: ";

	vector<double> 정수;

	double x;

	while (cin >> x) {
		정수.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = 정수.size();

	sort(정수.begin(), 정수.end());

	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = 3 * size / 4;

	double q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0
		? (정수[q1] + 정수[q1 - 1]) / 2
		: 정수[q1];
	q2_val = size % 2 == 0
		? (정수[q2] + 정수[q2 - 1]) / 2
		: 정수[q2];
	q3_val = 3 * size % 4 == 0
		? (정수[q3] + 정수[q3 - 1]) / 2
		: 정수[q3];

	cout << "1/4 부분: " << q1_val << endl << "1/2부분: " << q2_val << endl << "3/4부분: " << q3_val << endl;

	return 0;
}
