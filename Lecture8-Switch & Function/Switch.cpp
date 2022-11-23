#include <iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    switch(a){
        case 0:
            cout<<"THIS IS 0";
            break;
        case 1:
            cout<<"THIS IS 1";
            break;
        case 2:
            cout<<"THIS IS 2";
            break;
        default:
            cout<<"Please enter Valid Number";
    }


    return 0;
}