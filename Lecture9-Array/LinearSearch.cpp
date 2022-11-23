#include <iostream>
using namespace std;


void EnterArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

bool LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){

    int n;

    cout<<"ENTER SIZE OF AN ARRAY->";
    cin>>n;

    int arr[n];

    cout<<"ENTER VALUES IN ARRAY->";
    EnterArray(arr,n);


    cout<<"ENTER A VALUE WHICH YOU WANT TO CHECK->";
    int key;
    cin>>key;

    int ans=LinearSearch(arr,n,key);

    if(ans){
        cout<<"VALUE IS PRESENT IN ARRAY";
    }
    else{
        cout<<"VALUE IS NOT PRESENT IN ARRAY";
    }




    return 0;
}