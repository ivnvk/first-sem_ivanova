#include<bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,x;
        std::cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) std::cin>>arr[i];
        sort(arr,arr+n);
        std::map<int ,int> a;
        for(int i=0;i<n;i++) a[arr[i]]++;
        int ans=0;
        for(int i=1; i>0; i++){
            if(x==0 && a[i]==0)break;
            ans=i;
            if(a[i]==0)x--;
        }
        std::cout<<ans<<std::endl;
    }
}
