#include<iostream>

//n以下の3または5の倍数の総和を求める
int main(){
    int n;
    std::cin>>n;

    long long sum = 0;
    for(int i=3;i<=n;i++){
        if(i%3==0 or i%5==0)sum+=i;
    }

    std::cout<<sum<<std::endl;

    return 0;
}
