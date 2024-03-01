#include<iostream>
#include<algorithm>
int main (){
    int i[3];
    std::cin>>i[0]>>i[1]>>i[2];
    std::cout<<std::max({i[0],i[1],i[2]})<<std::endl;
}