#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>

//nの約数の配列を返す
std::vector<int> divisor(int n){
    std::vector<int>ret;
    for(int i=1;i<=std::sqrt(n);i++){
        if(n%i==0){
            ret.emplace_back(i);
            ret.emplace_back(n/i);
        }
    }

    std::sort(ret.begin(),ret.end());
    return ret;
}

int main(){
    int n;
    std::cin>>n;

    for(int i=1;i<=n;i++){
        auto v = divisor(i);
        if(std::accumulate(v.begin(),v.end(),0)>2*i){
            std::cout<<i<<" "<<std::accumulate(v.begin(),v.end(),0)-2*i<<std::endl;
        }
    }
    
}