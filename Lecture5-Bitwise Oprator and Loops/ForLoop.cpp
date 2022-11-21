#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER A VALUE->"<<endl;
    cin>>n;

    int sum=0;

    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    cout<<"SUM OF ALL NUMBERS IS-> "<<sum<<endl;

    return 0;
}