#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, m, k;
		cin >> n >> m >> k;
		// tester's solution
		// view the video tutorial (link) in this repository
		// for better understanding
		auto min = [&](long long a, long long b) {
			return (a < b ? a : b);
		};
		// 1st column
		long long ans = 0;
		for (long long i = 1; i <= n; i++) {
			if (min(i, m) % 2 == 1) {
				ans ^= k + i + 1;
			}
		}
		// last row
		for (long long j = 2; j <= m; j++) {
			if (min(n, m - j + 1) % 2 == 1) {
				ans ^= (k + n + j);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
