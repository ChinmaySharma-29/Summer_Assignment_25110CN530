#include<iostream>
using namespace std;
int main(){
    int n , rev=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
    int d = n%10;
    rev = rev*10 +d;
    n= n/10;
    }
    cout<<"reverse digit is: "<<rev;
    return 0;
    
}