#include <iostream>
using namespace std;

int Pivot(int arr[],int n){

    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    
    while (start<end)
    {
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else if(arr[mid]<=arr[0]){
            end=mid;
        }
       
        mid=start+(end-start)/2;
    }  
    return start;  
}

int BinarySearch(int arr[],int s,int e,int k){

    int start=s;
    int end=e;
    int mid=start+(end-start)/2;

   while (start<=end)
   {
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]>k){
            end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
   }

   return -1;
   
}

int Search(int arr[],int n,int k){
    
   
    int pivot=Pivot(arr,n);


        if(arr[pivot]<=k && arr[n-1]<=k){

            return BinarySearch(arr,pivot,n-1,k);
        }
        else{
            return BinarySearch(arr,0,pivot-1,k);
        }
    
    
}

int main(){


    int arr[7]={16,17,18,12,13,14,15};

    cout<<Search(arr,7,12);


}