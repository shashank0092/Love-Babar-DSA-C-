#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <string> q;
    q.push("SHUKLA");
    q.push("SHASHANK");
    q.push("RAJESH");
    q.push("KUMAR");

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.push("UNCLE BOI");
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    return 0;
}