#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int arr[],int n){
    cout<<endl<<"Sorted Array is->";

    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[minIndex]){
            minIndex=j;
           } 
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }

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
    cout<<endl;
    PrintArray(arr,n);
    SelectionSort(arr,n);

}