//#include "set.h"
//#include "console.h"
//#include "queue.h"
//#include <iostream>
//#include <algorithm>
//
////using namespace std;
////
////Set<string> getAllPossiblePasswords(int n, string digits) {
////	Set<string> s;
////	Queue<string> q;
////	q.enqueue("");
////	while (!q.isEmpty()) {
////		string ss = q.dequeue();
////		if (ss.length() <= n) s.insert(ss);
////
////		for (int i = 0; i < digits.length(); i++) {
////			string neww = ss + digits[i];
////			if (neww.length() > n) continue;
////			q.enqueue(neww);
////		}
////	}
////	return s;
////}
//
//void permutations(string str, Vector<string>& v) {
//	if (str.length() == 0) {
//		v.add(str);
//		return;
//	}
//	for (int j = 0; j < str.length(); j++) {
//		char c = str[j];
//		string neww = str.substr(0, j) + str.substr(j + 1);
//		Vector<string> newww;
//		permutations(neww, newww);
//		for (int i = 0; i < newww.size(); i++) v.add(c + newww[i]);
//		sort(v.rbegin(), v.rend());;
//	}
//}
//
//int main() {
//	string str = "abcd";
//	Vector<string> v;
//	/*string digits = "12";
//	int n = 2;
//	Set<string> sss = getAllPossiblePasswords(n, digits);
//	for (string ssss : sss) {
//		cout << ssss << endl;
//	}*/
//	permutations(str, v);
//	cout << v.toString() << endl;
//	return 0;
//}