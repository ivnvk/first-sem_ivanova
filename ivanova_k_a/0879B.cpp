#include <iostream>
 
int main() {
    int n; 
    std::cin >> n >> k;
    int m = 0;
    std::cin >> m;
    int q = 0;
    double k;
    int a;
    for (int i = 1; i<n; i++) {
        std::cin >> a;
        if(q < k){
            if (a > m) {
                m = a;
                q = 0;
            }
            q +=1;
        }
    }
    std::cout << m;
}
