//n以下のセクシー素数の組みを求める
#include<iostream>
#include<cmath>

bool isPrime(int n){
    if(n==1)return false;

    for(int i=2;i<=std::sqrt(n);i++){
        if(n%i==0)return false;
    }

    return true;
}

int main(){
    int n;
    std::cin>>n;
    for(int i=11;i<=n;i++){
        if(isPrime(i) and isPrime(i-6)){
            std::cout<<"{"<<i-6<<", "<<i<<"}"<<std::endl;
        }
    }
}