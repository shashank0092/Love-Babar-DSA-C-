#include <iostream>
#include <array>
using namespace std;

int main(){

    array <int,5> arr={10,20,30,40,50};

    cout<<"VALU AT->"<<arr.at(3)<<endl;
    cout<<"VALUR AT FIRST->"<<arr.front()<<endl;
    cout<<"VALUE AT LAST->"<<arr.back()<<endl;
    cout<<"ARRAY SIZE->"<<arr.size()<<endl;
    cout<<"ARRAY IS EMPTY OR NOT->"<<arr.empty()<<endl;
    cout<<"MAXIMUM SIZE OF AN ARRAY->"<<arr.max_size()<<endl;
    cout<<"FILL ARRAY WITH 1->";
    arr.fill(1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}