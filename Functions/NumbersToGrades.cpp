// Online C++ compiler to run C++ program online
#include <iostream>
int grade(int a){
    if(a>90 && a<=100){
        std::cout << "AA";
    }
    if(a>80 && a<=90){
        std::cout << "AB";
    }
    if(a>70 && a<=80){
        std::cout << "BB";
    }
    if(a>60 && a<=70){
        std::cout << "BC";
    }
    if(a>50 && a<=60){
        std::cout << "CD";
    }
    if(a>40 && a<=50){
        std::cout << "DD";
    }
    else {
        std::cout << "FAIL";
    }
 return 0 ;   
}

int main() {
int a;
std::cout << "Write Your Marks: ";
std::cin >> a ;
grade(a);


    return 0;
}
