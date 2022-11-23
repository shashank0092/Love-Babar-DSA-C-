#include <iostream>
using namespace std;

int countNumber(int a){

    for(int i =1; i<=a;i++){
        cout<<i<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    countNumber(n);
}