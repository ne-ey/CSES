#include<iostream>
using namespace std;

long long int missing_num(long long int t_num,long long s){
     int res = t_num*(t_num+1)/2;
     int missing_n= res - s;
     return missing_n;
}
int main(){
    long long int total_num;
    cin>>total_num;
    long long int num[total_num - 1];
    long long int sum=0;
    for(long long int i=0;i< total_num-1;i++){
        cin>>num[i];
        sum+=num[i];
    }
    long long int result=missing_num(total_num,sum);
    cout<<result;
    
}