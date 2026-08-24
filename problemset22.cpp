//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include <string>
//
//using namespace std;
//
//int x = 0;
//
//bool isGood(string s) {
//	for (int i = 0; i < s.length(); i++) {
//		if (!isdigit(s[i])) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int garicxveba(string s) {
//	if (s.length() == 1) {
//		for (int i = 0; i < 10; i++) {
//			char c = i + '0';
//			if (s[0] == c) x = x * 10 + i;
//		}
//		return x;
//	}
//	else {
//		x = x * 10 + (s[0] - '0');
//		s = s.substr(1);
//		return garicxveba(s);
//	//	return x;   aq ro davwero ar mosulaaaa????????
//	}
//}
//
//int main() {
//	cout << isGood("2345") << endl;
//	cout << garicxveba("342312") << endl;
//	return 0;
//}