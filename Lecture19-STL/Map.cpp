#include <iostream>
#include <map>
using namespace std;

int main(){

    map <int,string> m;
    m[10]="SHUKLA";
    m[20]="SHASHNAK";
    m[3]="IS";
    m[0]="boi";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<m.count(20)<<endl;
    map <int,string>::iterator ptr1=m.find(10);

    cout<<(*ptr1).first<<endl;
    cout<<(*ptr1).second<<endl;



    return 0;
}