#include<iostream>
using namespace std;

int fib(int n){
    if (n<=0) return 0;
    if (n==1 || n==0) return 1;

    int a=1,b=1;
    for(int i=3; i<=n; i++){
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}
int main(){
    int n;
    cout<<"Please enter a positive number: ";
    cin>>n;

    if (n<=0){
     cout<<"Error!";
     return 1;
    }
    for(int i=1; i<=n; i++){
    cout<<fib(i)<<endl;
    }
    cout<<endl;
    return 0;
}