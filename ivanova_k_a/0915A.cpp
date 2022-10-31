#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,k;
    std::cin>>n>>k;
    int a[n];
    int s=0;
    for (int i=0; n>i; i++)
        std::cin>>a[i];
    sort(a,a+n);
    for(int i=0; n>i; i++) {
        if(k%a[i]==0)
            s=k/a[i];
    }
    std::cout<<s<<std::endl;
    return 0;
}
