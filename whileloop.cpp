#include<iostream>
using namespace std;

// int main(){
//     int n;
//     int i=1;
//     cout<<"enter a number"<< endl;
//     cin>>n;

//     while(i<=n){
//         cout<< i << " ";
//         i=i+1;
//     }
// }


int main(){
    int n;
    int sum = 0;
    int i = 1;
    cout<<"enter a number"<< endl;
    cin>>n;

    while(i<=n){
        if(i%2==0)
        sum  = sum + i;
        i++;
    }
    cout<<  sum << " " ;
}