// Problem Link
// https://codeforces.com/problemset/problem/1497/A
// A. Meximization

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool arrange(vector<ll> &arr, int n) {
	sort(arr.begin(), arr.end());

	// Arrange in any order MEX will be 0 for all arrangements
	if (arr[0] != 0)
		return true;

	vector<ll> temp;
	cout << arr[0] << " ";
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) {
			cout << arr[i] << " ";
		} else {
			temp.push_back(arr[i]);
		}
	}

	for (auto it : temp) cout << it << " ";
	cout << endl;
	return false;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		if (arrange(arr, n)) {
			for (auto it : arr) cout << it << " ";
			cout << endl;
		}
	}

	return 0;
}