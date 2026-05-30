#include <iostream>
using namespace std;
int main(){
    int n , pro;
    cout<<"enter the value of n";
    cin>>n;
    for(int i = 1 ; i<=10 ; i++){
        pro = n*i;
        cout<<n<<"*"<<i<<"="<<pro<<endl;

    }
    return 0;
    
}