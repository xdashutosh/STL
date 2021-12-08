#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    for(int i:l)
    {
        cout<<i;
    }
    l.erase(l.begin());
    //all methods are same as dequeue but there is traversing ..not direct access like using at. method

return 0;
}