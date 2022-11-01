#include<iostream>
 
int main(){
  int n,k;
  std::cin>>n;
  int c = 0;
  int ns = 0; 
  for(int i = 0; i<n; i++){
    k = 0;
    for(int t = 0; t<3; t++){
      std::cin>>ns;
      k += ns;
    }
    if (k >= 2){
      c++;
    }
  }
  std::cout<<c<<std::endl;
}
