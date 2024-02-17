#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a= 1;
    int b = 0;

    for(int i=1; i<=n;i++){
        int nextnumber = a+b;
        cout<<nextnumber<< " ";
        a=b;
        b=nextnumber;
    }
}