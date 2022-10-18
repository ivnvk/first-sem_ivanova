#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> a(n),b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];}
		vector<int> tm(n);
		for (int i = 0; i < n; i++) {
			cin >> tm[i];}
		int k = 0;
    int r = 0;
		for (int i = 0; i < n; i++) {
			k += (a[i] - r + tm[i]);
			int w = (b[i] - a[i] + 1) / 2;
			if (i < n - 1) {
				k += w;}
			if (k < b[i] && i < n - 1) {
				k = b[i];}
			r = b[i];
		}
		cout<<k<<'\n';
	}
	return 0;
}
