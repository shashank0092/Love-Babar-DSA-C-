#include <iostream>
using namespace std;

int LeftOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;    

}

int RightOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
    
}


int main(){

    int arr[10]={1,1,2,2,2,2,3,3,3,3};

    cout<<LeftOccurence(arr,10,3)<<endl;
    cout<<RightOccurence(arr,10,3)<<endl;


}