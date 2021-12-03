#include<bits/stdc++.h>
using namespace std;
int main()
{
    int basic[3]={1,2,3};

    array<int,3> bystl={1,2,3};
    for (int i = 0; i < bystl.size(); i++)
    {
        cout<<bystl[i];
    }
    
    cout<<endl<<"empty or not "<<bystl.empty()<<endl;
    cout<<"first element = "<<bystl.front()<<endl;
    cout<<"last element = "<<bystl.back()<<endl;


return 0;
}