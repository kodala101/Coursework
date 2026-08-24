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
//	ifstream input;
//	input.open("text.txt");
//
//	int nums[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//
//	TokenScanner scanner(input);
//	while (scanner.hasMoreTokens()) {
//		string word = scanner.nextToken();
//		if (isalpha(word[0])) {
//			for (int i = 0; i < word.size(); i++) {
//				if (isalpha(word[i])) {
//					nums[toupper(word[i]) - 65]++;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		char c = 65 + i;
//		cout << c << " - " << nums[i] << endl;
//	}
//
//	return 0;
//}