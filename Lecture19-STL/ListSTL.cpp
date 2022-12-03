#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> l1={50,40,30,20,10};

    for(int ans:l1){
        cout<<ans<<" ";
    }
    cout<<endl;
    cout<<l1.size()<<endl;
    cout<<l1.empty()<<endl;
    cout<<l1.max_size()<<endl;
    l1.sort();
     for(int ans:l1){
        cout<<ans<<" ";
    }
    cout<<endl;

    l1.reverse();
     for(int ans:l1){
        cout<<ans<<" ";
    }
    cout<<endl;

    l1.remove(50);
     for(int ans:l1){
        cout<<ans<<" ";
    }
    cout<<endl;

    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;

    list <int>::iterator ptr1=l1.begin();
    list <int> l2={100,200,300,400,500};

     for(int ans:l2){
        cout<<ans<<" ";
    }
    cout<<endl;

    l1.merge(l2);
     for(int ans:l1){
        cout<<ans<<" ";
    }
    cout<<endl;






    


    return 0;
}