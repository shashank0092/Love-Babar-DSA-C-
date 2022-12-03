#include <iostream>
using namespace std;

void EnterArray(int arr[],int n){

    cout<<"ENTER VALUES IN ARRAY->";

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
}

void PrintArray(int arr[],int n){

    cout<<"VALUE OF ARRAY->";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(int arr[],int n){

   for(int i=1;i<n;i++){
        int k=i-1;
        int j=i;
        while (arr[j]<arr[k] && k>=0 )
        {
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            j--;
            k--;

        }
        
     }
   }


int main(){

    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY->";
    cin>>n;

    int arr[n];
    EnterArray(arr,n);
    PrintArray(arr,n);
    InsertionSort(arr,n);
    PrintArray(arr,n);


    return 0;
}