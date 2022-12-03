#include <iostream>
#include <set>
using namespace std;

int main(){

    set <int> s;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(30);


    for(int a:s){
        cout<<a<<" ";
    }

    cout<<endl;

    cout<<s.count(20)<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.empty()<<endl;
    set <int>::iterator ptr1=s.find(20);

    cout<<*ptr1<<endl;




    return 0;
}