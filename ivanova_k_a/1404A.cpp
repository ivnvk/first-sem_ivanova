#include <bits/stdc++.h>
 
int t;
int main() {
	std::cin >> t;
	while (t--) {
		int n, k;
		std::cin >> n >> k;
		string s;
		std::cin >> s;
		bool w = true;
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
					w = false;
					break;
				}
			}
			if (!w)
				break;
		}
		if (!w)
			std::cout << "NO" << std::endl;
		else {
			int a[2] = {};
			for (int i = 0; i < k; i++) {
				if (s[i] == '?')
					continue;
				a[s[i] - '0']++;
			}
			int f = k - (a[0] + a[1]), h = f - abs(a[0] - a[1]);
			if (h >= 0 && h % 2 == 0)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
	}
}
