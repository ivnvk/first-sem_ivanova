#include<iostream>;
int main(){
    int n;
    std::cin>>n;
    int a[n];
    int p[n];
    for (int i=0; i<n; i++){
        std::cin>>a[i];
        p[a[i]-1] = i+1;
    }
    for (int i=0;i<n;i++){
        std::cout<<p[i]<<" ";
    }
}
