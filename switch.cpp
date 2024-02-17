#include<iostream>
using namespace std;

int main(){
    int num = 2;
    cout<<num;
    switch(num){
        case 1: cout<< "first" <<endl;
                break;
        case 2: cout<< "seconed" <<endl;
                break;
        // default: cout<< "this is defult case" <<endl;
        //         break;
    }
    cout<< endl;
    return 0;
}