#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 2;
    while(i < n){
    if(n%i == 0){
        cout<<"number is not prime"<< i <<endl;
    }else{
        cout<<"number is prime"<< i <<endl;
    }
    i = i+1;
    }

}