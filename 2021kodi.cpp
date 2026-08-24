//#include "console.h"
//#include "vector.h"
//#include <vector>;
//
//using namespace std;
//
////Vector<string> allSubstrings(string s) {
////	Vector<string> all;
////	if (s == "") {
////		Vector<string> empty;
////		empty.add("");
////		return empty;
////	}
////	char c = s[0];
////	s = s.substr(1);
////	Vector <string> vec = allSubstrings(s);
////	for (string s : vec) {
////		string copy = s;
////		copy = c + copy;
////		all.add(s);
////		all.add(copy);
////	}
////	return all;
////}
//
//void backtracking(int n, string symbols, Vector<string>& all, string curr) {
//	if (curr.length() == n) {
//		all.add(curr);
//		return;
//	}
//	for (int i = 0; i < symbols.length(); i++) {
//		curr += symbols[i];
//		if (curr.length() == n) {
//			all.add(curr);
//		}
//		else {
//			backtracking(n, symbols, all, curr);
//		}
//		curr.pop_back();
//	}
//}
//
//Vector<string> generateCodes(int n, string symbols) {
//	/*string s = "";
//	for (int i = 0; i < symbols.size(); i++) {
//		for (int j = 0; j < n; j++) s += symbols[i];
//	}
//	Vector<string> vecto = allSubstrings(s);
//	for (int i = 0; i < vecto.size(); i++) {
//		if (vecto[i].size() != n) {
//			vecto.remove(i);
//			i = -1;
//		}
//	}
//	return vecto;*/
//
//	Vector<string> all;
//	string s = "";
//	backtracking(n, symbols, all, s);
//	return all;
//}
//
////Vector<string> imenapermutations(string s) {
////	Vector<string> vv;
////	if (s == "") {
////		Vector<string> empty;
////		empty.add("");
////		return empty;
////	}
////
////	for (int i = 0; i < s.length(); i++) {
////		string d = s[i] + string();
////		Vector<string> f = imenapermutations(s.substr(0, i) + s.substr(i + 1));
////		for (string h : f) {
////			h = d + h;
////			vv.add(h);
////		}
////	}
////	return vv;
////}
////
////Vector<string> permutations(Vector<string> v) {	//&&&&&&&&&&&
////	Vector<string> alll;
////	for (string s : v) {
////		alll += imenapermutations(s);
////	}
////	return alll;
////}
//
//int main() {
//	string st = "ac";
//	int n = 3;
//	Vector<string> vvvv = generateCodes(n, st);
//	for (int i = 1; i < vvvv.size(); i++) {
//		for (int j = 0; j < i; j++) {
//			if (vvvv[j] == vvvv[i]) {
//				vvvv.remove(j);
//				j = -1;
//				i = 0;
//			}
//		}
//	}
//	cout << vvvv.toString() << endl;
//
//	return 0;
//}