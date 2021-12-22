// Problem Link
// https://codeforces.com/problemset/problem/1430/B
// B. Barrels

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll maxDiff(vector<ll> &arr, ll n, ll k) {
	sort(arr.begin(), arr.end());
	ll sum = 0;
	reverse(arr.begin(), arr.end());
	for (int i = 0; i <= k; i++)
		sum += arr[i];

	return sum;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << maxDiff(arr, n, k) << '\n';
	}

	return 0;
}