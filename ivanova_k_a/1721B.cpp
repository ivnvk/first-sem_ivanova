#include<bits/stdc++.h>

int main()
{
    long long t;
    std::cin>>t;
    while(t--)
    {
       long long n,m,a,b,d;
       std::cin>>n>>m>>a>>b>>d;
       if((a-d>1 && b+d<m) || (n>a+d && b-d>1)){
        std::cout<<n+m-2<<'\n';
       }
       else {
        std::cout<<-1<<'\n';
       }
    }
}
