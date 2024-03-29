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

	cout << "������ �Է��Ͻÿ�: ";

	vector<double> ����;

	double x;

	while (cin >> x) {
		����.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = ����.size();

	sort(����.begin(), ����.end());

	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = 3 * size / 4;

	double q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0
		? (����[q1] + ����[q1 - 1]) / 2
		: ����[q1];
	q2_val = size % 2 == 0
		? (����[q2] + ����[q2 - 1]) / 2
		: ����[q2];
	q3_val = 3 * size % 4 == 0
		? (����[q3] + ����[q3 - 1]) / 2
		: ����[q3];

	cout << "1/4 �κ�: " << q1_val << endl << "1/2�κ�: " << q2_val << endl << "3/4�κ�: " << q3_val << endl;

	return 0;
}
