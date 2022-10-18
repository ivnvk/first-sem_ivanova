#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    long t; 
    std::cin>>t;
    while(t--){
        std::string s; 
        std::cin>>s;
        long l(s.size()-1), q(0);
        for (long p=0; p<s.size(); p++){
            if(s[p]=='0' && p<l){
                l=p;
                }
            else if(s[p]=='1'){
                q=p;
                }
        }
        std::cout<<(l-q+1)<<std::endl;
    }
}
