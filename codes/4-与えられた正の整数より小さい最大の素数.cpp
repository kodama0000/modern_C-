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
    
    n--;
    while(!isPrime(n)){
        n--;
    }

    std::cout<<n<<std::endl;

    return  0;
}