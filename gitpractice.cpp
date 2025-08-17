#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1)
    return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter a number to print fact:";
    cin>>n;
    int y=fact(n);
    cout<<"factorial of the  number:"<<y<<endl;
}