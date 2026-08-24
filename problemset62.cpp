//#include <iostream>
//#include <fstream>
//#include <string>
//#include "console.h"
//#include "tokenscanner.h"
//#include "map.h"
//
//using namespace std;
//
//int main() {
//	ifstream input;
//	input.open("Text.txt");
//	TokenScanner scanner(input);
//	scanner.ignoreWhitespace();
//	scanner.addWordCharacters("'");
//
//	Map<string, int> words;
//	while (scanner.hasMoreTokens()) {
//		string word = scanner.nextToken();
//		if (!isalpha(word[0])) continue;
//		if (words.containsKey(word)) {
//			words[word]++;
//		}
//		else {
//			words.put(word, 1);
//		}
//	}
//	input.close();
//
//	cout << words.toString() << endl;
//
//	return 0;
//}