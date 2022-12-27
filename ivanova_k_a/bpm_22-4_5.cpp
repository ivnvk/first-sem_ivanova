#include <iostream>

int main()
{
    int c;
    std::cin >> c;
    while (c != 0) {
        int n;
        std::cin >> n;
        if (n > 50) {
            int k;
            k = n / 10;
            int ln;
            int fn;
            ln = (n*10 - k*100) / 10;
            fn = k;
            //std::cout << ln;
            //std::cout << fn;
            //std::cout << ' ' ;
            int m;
            m = ln*10 + fn;
            std::cout << m;
            std::cout << ' ' ;
            
        }

        c -= 1;
        
    }

}




//Решение для двузначных чисел,больших 50, нет смены первого и последнего
