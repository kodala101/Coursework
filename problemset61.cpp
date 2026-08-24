//#include <iostream>
//#include <string>
//#include "console.h"
//#include "simpio.h"
//#include "set.h"
//
//using namespace std;
//
//int main() {
//	string str1 = getLine("Enter first word: ");
//	string str2 = getLine("Enter second word: ");
//	Set<char> firstSet;
//	Set<char> secondSet;
//	for (int i = 0; i < str1.length(); i++) firstSet.insert(str1[i]);
//	for (int i = 0; i < str2.length(); i++) secondSet.insert(str2[i]);
//	Set<char> mutual;
//	Set<char> onlyInFirst;
//	Set<char> onlyInSecond;
//	for (char ch : firstSet) {
//		if (secondSet.contains(ch)) {
//			mutual.insert(ch);
//		}
//		else {
//			onlyInFirst.insert(ch);
//		}
//	}
//	for (char ch : secondSet) {
//		if (!firstSet.contains(ch)) onlyInSecond.insert(ch);
//	}
//
//	cout << "symbols in both words: ";
//	for (char ch : mutual) cout << ch << ", ";
//	cout << endl;
//
//	cout << "symbols in only first word: ";
//	for (char ch : onlyInFirst) cout << ch << ", ";
//	cout << endl;
//
//	cout << "symbols in only second word: ";
//	for (char ch : onlyInSecond) cout << ch << ", ";
//	cout << endl;
//
//	return 0;
//}