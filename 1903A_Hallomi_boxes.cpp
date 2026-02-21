
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_case(int n, int k, const vector<int>& a) {
	vector<int> sorted_a = a;
	sort(sorted_a.begin(), sorted_a.end());
	if (k == 1) {
		if (a == sorted_a) cout << "YES\n";
		else cout << "NO\n";
	} else {
		cout << "YES\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) cin >> a[i];
		    solve_case(n, k, a);
	}
	return 0;
}
