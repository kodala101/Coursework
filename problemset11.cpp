//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//
//using namespace std;
//
//const int SENTINEL = -1;
//
//int main(){
//	int min = INT_MAX; //int min = 0, max = 0;
//	int max = INT_MIN; // min(a, b);
//	int sum = 0;
//	int numsOfEntered = 0;
//	int entered = 0;
//	while (entered != SENTINEL) {
//		entered = getInteger("Enter The Number: ");
//		
//		numsOfEntered++;
//		
//		sum += entered;
//		if (entered <= min && entered != SENTINEL) min = entered;
//		if (entered >= max && entered != SENTINEL) max = entered;
//		
//	}
//	
//	if (numsOfEntered - 1 == 0) {
//		cout << "enter pls" << endl;
//		return 1;
//	}
//
//	cout << "min number is: " << min << endl;
//	cout << "avarage number is: " << (1.0 * sum + 1)/ (numsOfEntered - 1) << endl;
//	cout << "max number is: " << max << endl;
//
//	return 0;
//}