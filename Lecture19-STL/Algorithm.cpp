#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

    vector <int> v1={1000,900,800,700,600,500};

    vector <int>::iterator ptr1=v1.begin();
    vector <int>::iterator ptr2=v1.end();

    sort(v1.begin(), v1.end());


    for(auto ans:v1){
        cout<<ans<<" ";
    }




    return 0;
}