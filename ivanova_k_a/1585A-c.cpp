#include<iostream>
int main(){
    //int t;
    //std::cin t;    
    int n;
    std::cin>>n;
    int a[n];
    int c;
    c = 1;
    //int v[n];
    for (int i=0; i<n; i++){
        std::cin>>a[i];
        if (a[i]== 1 and a[i-1]== 1){
            c = c + 5;
        }
        if (a[i]==0 and a[i-1]==0){
            c = c-1;
        }
        if (a[i]==1 and a[i-1]==0){
            c = c+1;
        }
        if (a[i]==0 and a[i-1]==1){
            c = c+0;
        }
        std::cout<<c<<" ";
        
    }
}
