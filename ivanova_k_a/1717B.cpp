#include <iostream>
 
int main() {
	int n,k, r,c, t;
	std::cin >> t;
	while (t--) {
		std::cin >> n >> k >> r >> c;
		for (int i = 1; i < n+1; ++i) {
			for (int j = 1; j < n+1; ++j) {
				if ((i + j) % k == (r + c) % k) {
					std::cout << "X"; }
				else {
					std::cout << "."; }
			}
			std::cout << "\n";
		}
	}
}
