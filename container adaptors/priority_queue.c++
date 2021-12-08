#include<bits/stdc++.h>
using namespace std;
int main()
{
    //first element will always be greatest
    //max-heap
    priority_queue<int> max;
    
    //min-heap
    priority_queue< int,vector<int>, greater<int> > min;


    max.push(2);
    max.push(7);
    max.push(3);
    
    cout<<"first element is "<<max.top()<<endl;
    int size=max.size();
    //as size changes over each itrate due to pop method
    for (int i = 0; i < size; i++)
    {
    cout<<max.top()<<endl;
    max.pop();
    }

cout<<"min heap"<<endl;

  min.push(2);
    min.push(7);
    min.push(3);
    
    cout<<"first element is "<<min.top()<<endl;
    int Size=min.size();
    //as size changes over each itrate due to pop method
    for (int i = 0; i < Size; i++)
    {
    cout<<min.top()<<endl;
    min.pop();
    }



    

return 0;
}