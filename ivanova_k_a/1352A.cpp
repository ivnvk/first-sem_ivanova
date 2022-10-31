#include <iostream>
#include<vector>
#include<cmath>

int main() {
int t;
std::cin>>t;
while(t--) {
	int n;
	std::cin>>n;
	vector<int> a;
	int k=0;
	while (n>0){
		if (n%10){
			int s=pow(10,j);
			s*=(n%10);
		a.push_back(s); }
    ++k;
		n = n/10; }
	int v=a.size();
	std::cout<<v<<std::endl;
	for (int i=0;i<v;i++){
	  std::cout<<a[i]<<" " ; 
  }
	std::cout<<std::endl;
}
	return 0;
}
