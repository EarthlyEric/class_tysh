#include<iostream>
int main (){
    // 宣告一個變數 i
    int i;
    // 輸入 i
    std::cin>>i;
    // ((i%4==0&!(i%100==0))||i%400==0?"a leap year":"a normal year")
    // 等同於
    // if(i%4==0&!(i%100==0)||i%400==0){
    //     std::cout<<"a leap year"<<std::endl;
    // }else{
    //     std::cout<<"a normal year"<<std::endl;
    // }
    // 這行的意思是如果 i 是 4 的倍數且不是 100 的倍數 或是 i 是 400 的倍數就輸出 "a leap year" 
    // 否則輸出 "a normal year"
    std::cout<<((i%4==0&!(i%100==0))||i%400==0?"a leap year":"a normal year")<<std::endl;
}