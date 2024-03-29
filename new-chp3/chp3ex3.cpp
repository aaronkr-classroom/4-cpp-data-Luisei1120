//chp3ex3
#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::streamsize;

int main() {
	cout << "Enter all world follwend by EOF: ";

	vector<string> words;

	string word;

	while (cin >> word) {
		words.push_back(word);
	}

	typedef vector<string>::size_type vec_sz;
	
	cout << "Words: " << words.size();

	return 0;

}