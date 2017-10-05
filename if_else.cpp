#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter Value = ";
    cin>>a;

    if(a < 10){
        cout<<"Value is smaller than 10";
    }else if(a == 10){
        cout<<"Value is equal to 10";
    } else {
        cout<<"Value is greater than 10";
    }

    return 0;
}
