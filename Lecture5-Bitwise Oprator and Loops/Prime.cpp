#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter A Number To Check It->";
    cin >> n;

    int flag;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" IS NOT AA PRIME NUMBER";
            flag=0;
            break;
        }
        else{
            flag=1;
        }
       
        
    }


    if (flag)
    {
        cout<<"THIS IS A PRIME NUMBER";
    }
    

    return 0;
}