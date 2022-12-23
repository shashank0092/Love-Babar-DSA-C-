#include <iostream>
#include <string>
using namespace std;

int main(){

    char string[20];
    cout<<"ENTER YOUR STRING HERE->";
    cin>>string;
    
    int size=0;

    while (string[size]!='\0')
    {
        size++;
    }
    cout<<size<<endl;
    int i=0;
    int j=size-1;
    bool palindrom=1;

    while(i<=j){
        if(string[i]!=string[j]){
            palindrom=0;
            break;
        }

        i++; 
        j--;
        
    }
    

    if(palindrom){
        cout<<"THIS IS PALINDROM";
    }
    else{
        cout<<"THIS IS NOT A PALINDROM";
    }


    return 0;
}