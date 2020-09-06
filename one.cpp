#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main()
{
unordered_set<int> us;
int arr[]={10,20,30};
int arr1[]={30,20,10};
for (int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
{
    us.insert(arr1[i]);
}

for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{   
    if(us.find(arr[i])==us.end())
    us.insert(arr[i]);
    else
    {
        cout<<arr[i]<<"  ";
    }
    
}


}

