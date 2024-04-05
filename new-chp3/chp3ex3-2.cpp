#include <iostream>
#include <vector>
#include <unordered_map> //{ world: count }

using namespace std;

int main() {
	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "Enter words (CTRL+Z to stop:)" << endl;

	//1.Read word (cin)
	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	//2.Count word (for)
	for (auto& w : words) { // for (x in vec):
		wordCount[w]++;
	}
	//3.Print results
	cout << "Word count: " << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ": " << pair.second << endl;
	}

	return 0;
}