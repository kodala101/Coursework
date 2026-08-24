//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include "stack.h"
//
//using namespace std;
//
//const int SENTINEL = -1;
//
//int main() {
//	Stack<int> s1;
//	while (true) {
//		int x = getInteger("Enter number: ");
//		if (x == SENTINEL) {
//			break;
//		}
//		else {
//			s1.push(x);
//		}
//	}
//	while (!s1.isEmpty()) {
//		cout << s1.top() << ", ";
//		s1.pop();
//	}
//	cout << endl;
//	return 0;
//}