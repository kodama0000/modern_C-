#include<iostream>

int mygcd(int a,int b){
    if(a>b)std::swap(a,b);
    return (a==0 ? b : mygcd(a,b%a));
}

int main(){
    int a,b;
    std::cin>>a>>b;

    std::cout<<a*b/mygcd(a,b)<<std::endl;
}