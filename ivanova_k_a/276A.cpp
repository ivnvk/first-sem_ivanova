#include <bits/stdc++.h>

int main() {
    int n,k;
    std::cin >> n >> k;
    int f,t;
    int m;
    std::cin >> f >> t;
    m=f;
    if (t>k) {
        m = f-t+k;
    }
    for (int i=0;i<n-1;i++) {
        std::cin >> f >> t;
        if(t<k) {
            m = max(m, f);;
        }
        else {
            m = max(m, f-t+k))
        }
    }
    std::cout << m;
    return 0;
}
