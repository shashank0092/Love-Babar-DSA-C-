#include <iostream>
using namespace std;


int main(){

    char name[20];

    cout<<"ENTER YOUR NAME HERE->";
    cin>>name;

    cout<<name<<endl;
    
    int j=0;

    while (name[j]!='\0')
    {
        j++;
    }
    cout<<j<<endl;
    j--;

    int i=0;
    

    while (i<j)
    {
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;j--;
    }

    cout<<name;
    

    return 0;
}