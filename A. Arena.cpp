// Problem Link
// https://codeforces.com/problemset/problem/1487/A
// A. Arena

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll possibleWinners(vector<ll> &heroes) {
	ll ans = 0;
	sort(heroes.begin(), heroes.end());
	ll smallest = heroes[0];
	for (int i = 1; i < heroes.size(); i++) {
		if (heroes[i] > smallest)
			ans++;
	}
	return ans;
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
		vector<ll> heroes(n);
		for (int i = 0; i < n; i++) cin >> heroes[i];

		cout << possibleWinners(heroes) << endl;
	}

	return 0;
}