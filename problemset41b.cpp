//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include <fstream>
//#include "tokenscanner.h"
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ifstream infile;
//	infile.open("input.txt");
//
//	TokenScanner scanner;
//	vector<string> words;
//
//	while (scanner.hasMoreTokens()) {
//		string word = scanner.nextToken();
//		words.push_back(word);
//	}
//	infile.close();
//
//	ofstream onfile;
//	onfile.open("output.txt");
//
//	for (int i = 1; i < words.size(); i += 2) {
//		onfile << words[i];
//	}
//	for (int i = 0; i < words.size(); i += 2) {
//		onfile << words[i];
//	}
//
//	onfile.close();
//	return 0;
//}