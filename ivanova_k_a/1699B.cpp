#include <cstdio>

int main(){
    long t; 
    scanf("%ld", &t);
    while(t--){
        long n, m, k,r;
        scanf("%ld %ld", &n, &m);
        for (k=1; k<=n; k++){
            for (r=1; r<=m; r++){
                printf("%d ",((k%4<=1)!=(r%4<=1)));
            }
            puts("");
        }
    }
}
