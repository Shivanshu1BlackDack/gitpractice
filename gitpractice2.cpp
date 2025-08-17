#include<bits/stdc++.h>
using namespace std;
int binconvert(int n){
    int num=0;
    while(n>0){
        int y=n%2;
        num=num*10+y;
        n/=2;
    }
    return num;
}
void print(int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
}
void newfunction(){
  cout<<"newfeature"<<endl;
}
void function2(){
    cout<<"work in progress"<<endl;
}
int main(){
    int x;
    cin>>x;
    int y=binconvert(x);
    cout<<"your binary conversion is:"<<y<<endl;
    cout<<"1 to N";
    print(x);
    return 0;
}