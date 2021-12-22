// Problem Link
// https://codeforces.com/problemset/problem/1092/B
// B. Teams Forming

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll minimumProblems(vector<ll> &arr, int n) {
	ll problems = 0;
	sort(arr.begin(), arr.end());
	for (int i = 1; i < n; i += 2) {
		problems += arr[i] - arr[i - 1];
	}
	return problems;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; t = 1;
	while (t--) {
		ll n; cin >> n;
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << minimumProblems(arr, n) << '\n';
	}

	return 0;
}