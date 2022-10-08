#include<iostream>

int main(){
    int *c = new int;
    //*c = 'b';
    std::cout << "Value of c: " << *c << "\n";
    std::cout << "Address of c: " << &c << "\n";
    std::cout << "Address in c: " << c << "\n";


    int *p = new int[5];
    std::cout << "p[0] = " << *p << "\n";
    std::cout << "p[0] = " << p[0] << "\n";

    delete [] p;

}
