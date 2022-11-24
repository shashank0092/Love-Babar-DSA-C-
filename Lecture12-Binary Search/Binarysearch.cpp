#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){

    int start=0;
    int end=n-1;

    int mid=(start+end)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=(start+end)/2;
    }

    return -1;
    
}

int main(){

    int arr[6]={10,20,30,40,50,60};

    int key=100;

    int answer=BinarySearch(arr,6,key);

    cout<<answer<<endl;


}