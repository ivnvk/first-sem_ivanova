#include <iostream>
 
int main(){
    int n = 0;
    int t = 1;
    int k = 0;
    int a1, a2, a3, a4;
    std::cin >> n;
    for(int i = 0; i<n; i++){
        std::cin>>a1>>a2>>a3>>a4;
        int s = a1+a2+a3+a4;
        if (i == 0)
            k = s;
        if (i != 0 && k<s)
            t += 1;
    }
    std::cout << t;
    return 0;
}
