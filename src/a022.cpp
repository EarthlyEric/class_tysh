#include<iostream>
#include<algorithm>
int main (){
    int i[2];
    std::cin>>i[0]>>i[1];
    std::cout<<(i[0]>=8 & i[0]<17||(i[0]==7&i[1]>=30) ? "At School":"Off School")<<std::endl;
}