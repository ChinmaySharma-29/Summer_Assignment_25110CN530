#include<iostream>
using namespace std;
int main(){
    int n , rev=0;
    cout<<"enter the number";
    cin>>n;
    int original = n;
    while(n>0){
    int d = n%10;
    rev = rev*10 +d;
    n= n/10;
    }
    if(original==rev){
        cout<<"the number is pallindrom";
    }else{
        cout<<"the number is not pallindrom";
    }
    return 0;
    
}