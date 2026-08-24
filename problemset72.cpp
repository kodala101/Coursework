//#include <iostream>
//#include "console.h"
//#include "simpio.h"
//#include "grid.h"
//#include "queue.h"
//#include "set.h"
//
//using namespace std;
//
//bool ifIsWay(Grid<bool>& gr, int x1, int y1,  int x2, int y2) {
//	Queue<pair<int, int>> bfs;
//	Set<pair<int, int>> used;
//
//	pair<int, int> start = make_pair(x1, y1);
//	pair<int, int> end = make_pair(x2, y2);
//
//	bfs.enqueue(start);
//	used.add(start);
//
//	while (!bfs.isEmpty()) {
//		pair<int, int> current = bfs.dequeue();
//		if (current == end) return true;
//
//		if (gr.inBounds(current.first - 1, current.second) && gr[current.first - 1][current.second] && !used.contains(make_pair(current.first - 1, current.second))) {
//			bfs.enqueue(make_pair(current.first - 1, current.second));
//			used.add(make_pair(current.first - 1, current.second));
//		}
//		if (gr.inBounds(current.first + 1, current.second) && gr[current.first + 1][current.second] && !used.contains(make_pair(current.first + 1, current.second))) {
//			bfs.enqueue(make_pair(current.first + 1, current.second));
//			used.add(make_pair(current.first + 1, current.second));
//		}
//		if (gr.inBounds(current.first, current.second - 1) && gr[current.first][current.second - 1] && !used.contains(make_pair(current.first, current.second - 1))) {
//			bfs.enqueue(make_pair(current.first, current.second - 1));
//			used.add(make_pair(current.first, current.second - 1));
//		}
//		if (gr.inBounds(current.first, current.second + 1) && gr[current.first][current.second + 1] && !used.contains(make_pair(current.first, current.second + 1))) {
//			bfs.enqueue(make_pair(current.first, current.second + 1));
//			used.add(make_pair(current.first, current.second + 1));
//		}
//	}
//
//	return false;
//}
//
//int main() {
//	Grid<bool> gr(3, 3);
//	gr[0][0] = true;
//	gr[0][1] = true;
//	gr[0][2] = false;
//	gr[1][0] = false;
//	gr[1][1] = true;
//	gr[1][2] = true;
//	gr[2][0] = true;
//	gr[2][1] = false;
//	gr[2][2] = true;
//
//	cout << ifIsWay(gr, 3, 0, 0, 1) << endl;
//	return 0;
//}
//
