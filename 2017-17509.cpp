#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void main() {
	
	vector<int> numlist;
	int num;
	while (cin >> num) {
		numlist.push_back(num);
	}
	for (auto i : numlist) {
		cout << i << " ";
	}
	cout << endl;
	sort(numlist.rbegin(), numlist.rend());
	for (auto i : numlist) {
		cout << i << " ";
	}
	cout << endl;
	system("pause");
}
