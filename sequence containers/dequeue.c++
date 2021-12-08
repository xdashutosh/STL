#include<bits/stdc++.h>
using namespace std;
int main()
{
    //insertition and deletion can be done on both ends at same time
    //its dynamic and can use as an array
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(4);
    for (int i:d)
    {
        cout<<i;
    }
    cout<<endl;
    d.pop_front();
    d.pop_back();
    for(int i:d)
    {
        cout<<i;
    }
    d.push_back(5);
    d.push_front(2);
    cout<<endl;
    cout<<d.at(0)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;


cout<<"size of dequeue is "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
cout<<"size of dequeue is "<<d.size()<<endl;
    d.erase(d.begin(),d.end());
cout<<"size of dequeue is "<<d.size()<<endl;
return 0;
}