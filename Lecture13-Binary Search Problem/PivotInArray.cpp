#include <iostream>
using namespace std;

int Pivot(int arr[],int n){

    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while (start<end){
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

int main(){

    // int arr[5]={3,8,10,17,1};
    int arr[5]={8,10,17,1,3};

    cout<<Pivot(arr,5);

    return 0;
}