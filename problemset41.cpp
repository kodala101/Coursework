//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include "stack.h"
//#include <fstream>
//#include "tokenscanner.h"
//
//using namespace std;
//
//int main() {
//	ifstream infile;
//	infile.open("input.txt");
//
//	TokenScanner scanner;
//	Stack<string> words;
//
//	while (scanner.hasMoreTokens()) {
//		string word = scanner.nextToken();
//		words.push(word);
//	}
//	infile.close();
//
//	ofstream onfile;
//	onfile.open("output.txt");
//
//	while (!words.isEmpty()) {
//		onfile << words.pop() << endl;
//	}
//
//	onfile.close();
//	return 0;
//}