#include<iostream>
#include<algorithm>
int main (){
    int i;
    std::cin>>i;
    std::cout<<((i%4==0&!(i%100==0))||i%400==0?"a leap year":"a normal year")<<std::endl;
}