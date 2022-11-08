#include<bits/stdc++.h>

int n, x, t;
int a = -1;
int main() {
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int c = 0;
		for (int j = 1; j = 4; j++) {
			std::cin >> x;
			c += x;
		}
		if (c>a) {
			a = c;
			t = i;
		}
	}
	std::cout << t;
	return 0;
}
