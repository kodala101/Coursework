//#include "console.h"
//#include "vector.h"
//#include "queue.h"
//
//using namespace std;
//
//Vector<int> numsSameConsecDiff(int n, int k) {
//	Queue<string> stk;
//	for (char c = '1'; c <= '9'; c++) stk.enqueue(string() + c);
//
//	Vector<int> all;
//	while (!stk.isEmpty()) {
//		string s = stk.dequeue();
//		if (s.length() == n) {
//			all.add(stringToInteger(s));
//		}
//		else {
//			if (((s[s.length() - 1] - '0') + k) >= 0 && ((s[s.length() - 1] - '0') + k) < 10) {
//				string str = s + integerToString((s[s.length() - 1] - '0') + k);
//				stk.enqueue(str);
//			}
//			if (((s[s.length() - 1] - '0') - k) >= 0 && ((s[s.length() - 1] - '0') - k) < 10) {
//				string strr = s + integerToString((s[s.length() - 1] - '0') - k);
//				stk.enqueue(strr);
//			}
//		}
//	}
//
//	return all;
//}
//
//int main() {
//	cout << numsSameConsecDiff(3, 7).toString() << endl;
//	return 0;
//}