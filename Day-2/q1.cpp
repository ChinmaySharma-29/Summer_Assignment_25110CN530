#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        int d = n%10;
        sum = sum+d;
        n=n/10;
    }
    cout<<"sum of digits = "<<sum;
    return 0;
}