#include <iostream>
using namespace std;


int GetPivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while (start<end)
    {
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }

        mid=start+(end-start)/2;
    }
    return end;
}

int BinarySearch(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
                   
        }
    }
    
}


int main(){

    int arr[5]={8,10,17,1,3};




}