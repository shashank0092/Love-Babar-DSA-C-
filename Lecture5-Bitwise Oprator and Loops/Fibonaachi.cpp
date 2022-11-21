#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER N NUMBER OF SERIES->";
    cin>>n;

    int n1=0;
    int n2=1;

    cout<<n1<<" "<<n2<<" ";

    for(int i=1;i<=n-2;i++){
        int n3=n1+n2;
        cout<<n3<<" ";

        n1=n2;
        n2=n3;


       
    }


    return 0;
}