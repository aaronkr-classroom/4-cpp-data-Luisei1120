//chp3ex4
#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {
	cout << "Enter all world follwend by EOF: ";

	string max = "";
	string min = "";

	string word;

	while (cin >> word) {
		
		//초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		//크기 확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size())max = word;
	}


	cout << "Max:" << max << endl << "Min: " << min;
	return 0;

}