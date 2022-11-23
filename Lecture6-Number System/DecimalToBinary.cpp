#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int n;
    cout<<"ENTER A DECIMAL NUMBER";
    cin>>n;
    int form=n;
    int ans=0;
    int i=0;

    // cout<<int(&n)<<endl;
    while (n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;

    }
    cout<<"THE BINARY FORMAT OF "<<form<<" IS "<<ans<<endl;

    return 0;
}