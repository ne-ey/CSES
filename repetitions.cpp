#include<bits/stdc++.h>
using namespace std;

long long int repetitions(string st){
    int maxi=1;
    int count=1;
    for(int i=1; i<st.size(); i++){
    if(st[i] == st[i-1]) count++;
    else count=1;
        maxi=max(maxi,count);
    }
   return maxi;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    cout<<repetitions(s);
}