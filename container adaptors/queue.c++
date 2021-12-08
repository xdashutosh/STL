#include<bits/stdc++.h>
using namespace std;
int main()
{
    //queue is like a line (fifo) first come first go
    queue<string> q;
    q.push("ashu");
    q.push("arjit");
    q.push("sagar");
    cout<<"first element is "<<q.front()<<endl;
    q.pop();
    cout<<"first element is "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
    
return 0;
}
