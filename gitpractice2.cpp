#include<bits/stdc++.h>
using namespace std;
int binconvert(int n){
    int num=0;
    while(n>=0){
        int y=n%2;
        num*=10+y;
        n/=2;
    }
    return num;
}
int main(){
    int x;
}