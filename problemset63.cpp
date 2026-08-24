//#include <iostream>
//#include <string>
//#include "console.h"
//#include "simpio.h"
//#include "set.h"
//
//using namespace std;
//
//int main() {
//	string first = getLine("Enter first word: ");
//	string second = getLine("Enter second word: ");
//	Set<string> middle1;
//	Set<string> middle2;
//	for (int i = 0; i < first.length() - 1; i++) {
//		for (int j = i + 1; j < first.length(); j++) {
//			string s = "";
//			s += first;
//			s[i] = s[j];
//			s[j] = first[i];
//			for (int k = 0; k < s.length(); k++) {
//				for (int h = 0; h < s.length(); h++) {
//					string st = "";
//					st += s;
//					st[k] = st[h];
//					st[h] = s[k];
//					middle1.insert(st);
//				}
//			}
//		}
//	}
//	for (int i = 0; i < second.length() - 1; i++) {
//		for (int j = i + 1; j < second.length(); j++) {
//			string s = "";
//			s += first;
//			s[i] = s[j];
//			s[j] = first[i];
//			for (int k = 0; k < s.length(); k++) {
//				for (int h = 0; h < s.length(); h++) {
//					string st = "";
//					st += s;
//					st[k] = st[h];
//					st[h] = s[k];
//					middle2.insert(st);
//				}
//			}
//		}
//	}
//	for (string s : middle1) {
//		if (middle2.contains(s)) cout << s << endl;
//	}
//
//	return 0;
//}
