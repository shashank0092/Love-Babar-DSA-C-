#include <iostream>
using namespace std;


bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            else{
                pageSum=arr[i];
            }
        }
    }

    return true;


}

int BookAllocation(int arr[],int n,int m){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum=+arr[i];
    }

    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;


    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;


    }

    return ans;
    

}


int main(){

    int arr[5]={1,2,2,3,1};
    cout<<BookAllocation(arr,5,2);

    return 0;
}