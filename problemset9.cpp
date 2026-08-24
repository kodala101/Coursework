//#include "grid.h"
//#include "console.h"
//
//using namespace std;
//
////int inSpecific(int n) {
////    int x = 0;
////    while (n != 0) {
////        if (n % 10 == 1) x++;
////        n /= 10;
////    }
////    return x;
////}
////
////int countDigitOne(int n) {
////    if (n <= 0) return 0;
////    if (n == 1) return 1;
////    return (inSpecific(n) + countDigitOne(n - 1));
////}
//
//string decodeString(string s) {
//    string x = "";
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == '[') {
//            for (int k = i + 1; k < s.length(); k++) {
//                if (s[k] == ']') {
//                    for (int j = 0; j < (s[i - 2] - '0'); j++) {
//                        x += s.substr(i + 1, k - i - 1);
//                    }
//                    break;
//                }
//            }
//        }
//        i = 0;
//    }
//    return x;
//}
//
//int main() {
//    cout << decodeString("3[a]2[bc]") << endl;
//	return 0;
//}