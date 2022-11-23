#include <iostream>
using namespace std;

void EnterArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

}

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++ ){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void ReverseArray(int arr[],int n){
    int start=0;
    int end=n-1;

    while (start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    

}

int main(){

    int n;
    cout<<"ENTER SIZE OF ARRAY->";
    cin>>n;

    int arr[n];
    
    cout<<"ENTER VALUE IN ARRAY->";
    EnterArray(arr,n);

    cout<<"VALUES IN ARRAY->";
    PrintArray(arr,n);

    ReverseArray(arr,n);
    PrintArray(arr,n);
    return 0;
}