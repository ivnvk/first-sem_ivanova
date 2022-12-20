#include <iostream>
#include <string>
int main()
{
    std::string a1 = "number";
    while (a1.find("n"))
    {
        a1.erase(a.find("n"), 1);
    }
    std::cout << a1 << std::endl;
}

##################################

#include <iostream>
#include <string>
int main()
{
    std::string a1 = "cest";
    std::string a2 = "westir";
    a = [];
    b = [];
    c = [];
    
    
    while (a.find("n"))
    {
        a.erase(a.find("n"), 1);
    }
    std::cout << a << std::endl;
}


// идея 
ввод - 2 строки
создание 3 пустых массивов, разделяем введенные строки на символы,
затем заполняем их в массивы
смотрим с конца количество совпадающих символов
a1 в a
a2 в b




#####################################


#include <iostream>

int main() {
    std::string a1, a2;
    std::cin >> a1 >> a2;
    int c = a1.length() + a2.length();
    n1 =  a1.length() ;
    n2 =  a2.length();
    for(int i = 0; c > 0 && n1>i && n2>i;i++)
    {
        if(a1[n1-i-1] == a2[n2-i-1]){
            c -= 2;
        }
    }
    std::cout<<c;
}
