#include<bits/stdc++.h>
 
int main()
{
    long long a, b = 0, c;
    int n = 0;
    std::cin>>a>>c;
    while(max(a,c) != 0) {
        b += (((c%3)-(a%3)+3)%3)*pow(3,n);
        a/=3;
        c/=3;
        n++;
    }
    std::cout<<b<<endl;
    return 0;
}
