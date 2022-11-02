#include <bits/stdc++.h>
 
int t;
int main() {
	std::cin >> t;
	while (t--) {
		int n, k;
		std::cin >> n >> k;
		string s;
		std::cin >> s;
		bool ok = true;
		for (int i = 0; i < k; i++) {
			char v = '-';
			for (int j = i; j < n; j += k) {
				if (s[j] == '?')
					continue;
				else {
					v = s[j];
					break;
				}
			}
			for (int j = i; j < n; j += k) {
				if (s[j] == '?')
					s[j] = v;
				else if (s[j] != v) {
					ok = false;
					break;
				}
			}
			if (!ok)
				break;
		}
		if (!ok)
			std::cout << "NO" << std::endl;
		else {
			int cnt[2] = {};
			for (int i = 0; i < k; i++) {
				if (s[i] == '?')
					continue;
				cnt[s[i] - '0']++;
			}
			int tmp = k - (cnt[0] + cnt[1]), tmp2 = tmp - abs(cnt[0] - cnt[1]);
			if (tmp2 >= 0 && tmp2 % 2 == 0)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
	}
}
