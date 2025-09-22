#include<iostream>
using namespace std;

int check_odd_even(int number){
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
    int num_to_check;
    cin>>num_to_check;
    int result = check_odd_even(num_to_check);
    cout<<result<<endl;
}