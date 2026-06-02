#include<iostream>
using namespace std;
int main(){
    int n , pro=1;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
    int d = n%10;
    pro = pro*d;
    n=n/10;
    }
cout<<"product of the given digits is : "<<pro;
return 0;
}
