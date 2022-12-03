#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> a={10,20,30,40,50};

    for(int ans:a){
        cout<<ans<<" ";
    }

    cout<<endl;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    a.push_back(90);
    cout<<a.capacity()<<endl;
    a.pop_back();
    cout<<a.capacity()<<endl;
    a.shrink_to_fit();
    cout<<a.capacity()<<endl;
    // a.clear();

    for(int ans:a){
        cout<<ans<<" ";
    }

    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    // for(int ans:a){
    //     int val;
    //     cin>>val;
    //     a.push_back(val);
    // }

    // for(int ans:a){
    //     cout<<ans<<" ";
    // }

    cout<<a.data()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.max_size()<<endl;
    a.resize(2);
    cout<<a.size()<<endl;
    // for(int ans:a){
    //     cout<<ans<<" ";
    // }

    // cout<<endl;
    // a.resize(5);
    //  for(int ans:a){
    //     cout<<ans<<" ";
    // }
    // cout<<endl;

    vector <int>::iterator ptr1=a.begin();

    a.insert(ptr1+1,10000);

    // for(int ans:a){
    //     cout<<ans<<" ";
    // }

    a.resize(10);

    

    for(int ans:a){
        cout<<ans<<" ";
    }




    return 0;
}