#include <iostream>
using namespace std;

int Root(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    int ans=-1;

    while (s<=e)
    {
        int squre=mid*mid;

        if(squre==n){
            return mid;
        }
        if(squre>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;


}


double Precision(int n,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }

    return ans;
}

int main(){

    int n;
    cout<<"ENTER A NUMBER->";
    cin>>n;

    int temSol=Root(n);
    cout<<"Answer is "<<Precision(n,3,temSol);

    return 0;
}