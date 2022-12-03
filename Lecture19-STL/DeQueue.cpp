#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque <int> a={10,20,30,40,50};

    for(int ans:a){
        cout<<ans<<" ";
    }

    cout<<endl;

    cout<<a.size()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.max_size()<<endl;
    a.push_front(1000);
    a.push_back(8000);
    a.pop_front();
    a.pop_back();
    
    for(int ans:a){
        cout<<ans<<" ";
    }
    cout<<endl;

    deque <int>::iterator ptr1=a.begin();

    a.insert(ptr1,5000);
        for(int ans:a){
            cout<<ans<<" ";
        }
    cout<<endl;

    a.clear();
    for(int ans:a){
        cout<<ans<<" ";
    }
    cout<<a.size()<<endl;
    
    return 0;
}