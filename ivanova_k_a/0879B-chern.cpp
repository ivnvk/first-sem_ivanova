//failed test 9
#include <iostream>
 
int main(){
    int n;
    double k;
    std::cin>>n>>k;
    int a;
    int m = 0;
    int q = 0;
    for (int i = 0; i<n && q<k; i++) {
        std::cin >> a;
        if (a>m) {
            m = a;
            q = 0;
        }
        q +=1;
    }
    std::cout << m;
}
