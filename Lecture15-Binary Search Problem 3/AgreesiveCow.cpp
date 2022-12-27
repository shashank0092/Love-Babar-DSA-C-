#include <iostream>
#include <algorithm>
using namespace std;


bool isPossible(int arr[],int k,int mid,int n){
    int cowCount = 1;
    int lastPos=arr[0];

    for(int i=0;i<n;i++){

        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}

int agreesiveCows(int arr[],int k,int size){

    sort(arr+0,arr+size);

    int s=0;
    int n=size;
    int e=arr[n-1];
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if(isPossible(arr,k,mid,n)){
            ans=mid;
            s=mid+1;
        }

        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    
    return ans;
}

int main(){

    int arr[4]={4,2,1,6};
    int k=2;

    cout<<agreesiveCows(arr,k,4);


    return 0;
}