#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue <int> max_queue;
    priority_queue <int,vector <int>,greater <int> > min_queue ;
    max_queue.push(10);
    max_queue.push(40);
    max_queue.push(20);
    max_queue.push(0);
    max_queue.push(12);

    int n=max_queue.size();

    for(int i=0;i<n;i++){
        cout<<max_queue.top()<<" ";
        max_queue.pop();
    }

    cout<<endl;

    cout<<max_queue.empty()<<endl;
    cout<<max_queue.size()<<endl;

    min_queue.push(100);
    min_queue.push(20);
    min_queue.push(0);
    min_queue.push(12);
    min_queue.push(22);

    int size=min_queue.size();
      for(int i=0;i<size;i++){
        cout<<min_queue.top()<<" ";
        min_queue.pop();
    }
    cout<<endl;
    cout<<min_queue.empty()<<endl;
    cout<<min_queue.size()<<endl;



    return 0;
}