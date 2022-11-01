#include <cstdio>
 
int main(){
    long t;
    scanf("%ld", &t);
    while(t--){
        long v(0);
        for(int i = 0; i < 2; i++) {
            for(int n = 0; n < 2; n++) {
                long x;
                scanf("%ld", &x);
                v += x;
            }
        }
        long a(0);
        if (v == 4){
            a = 2;
        }
        else if (v > 0){
            a= 1;
        }
        printf("%ld\n", a);
    }
}
