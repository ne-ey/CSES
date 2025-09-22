#include<iostream>
using namespace std;

long long int check_odd_even(long long int number){
    if(number%2==0){
        cout<<number<<" ";
        number=number/2;
       if(number==1){
           return 1;
       }
       else{
          return check_odd_even(number);
       }
    }
    else{
      cout<<number<<" ";
      number=(number*3)+1;
      if(number==1){
          return 1;
      }
      else{
          return check_odd_even(number);
      }
    }
}
int main(){
    long long int num_to_check,result;
    cin>>num_to_check;
    if(num_to_check==1){
        result=1;
    }
    else{
         result = check_odd_even(num_to_check);
    }
    cout<<result<<endl;
}