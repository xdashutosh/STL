#include<bits/stdc++.h>
using namespace std;
int main()
{
//vector is dynamic array--if we try to add element beyond its limit then vector will make itself double in size

vector<int> v;
cout<<v.capacity()<<endl;

v.push_back(1);
v.push_back(2);
cout<<"capacity-> "<<v.capacity()<<endl;
v.push_back(3);
cout<<"capacity-> "<<v.capacity()<<endl;//capacity is 2*2 double=4
cout<<"size-> "<<v.size()<<endl;//size is 3 as 3 element present
v.shrink_to_fit();
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

v.pop_back();
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i];
}
v.clear();
cout<<endl<<v.size()<<endl;
cout<<v.capacity()<<endl;


return 0;
}