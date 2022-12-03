#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

    stack <string> s;
    s.push("SHUKLA");
    s.push("IS");
    s.push("A");
    s.push("BOI");

    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    

    

    return 0;
}