#include <iostream>
using namespace std;

void EnterArray(int arr[],int size){


    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


void PrintArray(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    int n;
    cout<<"Enter The Size Of Array";
    cin>>n;


    cout<<"ENTER VALUE IN ARRAY->:";
    
    int arr[n];

    EnterArray(arr,n);

    cout<<"Values in array->";
    PrintArray(arr,n);
   
    

    return 0;
}