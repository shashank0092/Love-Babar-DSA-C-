#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
    cout<<"VALUE IN ARRAY:";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
        bool swap=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
        }

        if(swap==false){
            break;
        }
    }
    cout<<endl;
    PrintArray(arr,n);
}

int main(){

    int n;

    cout<<"ENTER THE SIZE OF AN ARRAY->";
    cin>>n;

    int arr[n];

    cout<<"ENTER VALUES IN ARRAY->";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    PrintArray(arr,n);
    BubbleSort(arr,n);
    

    return 0;
}