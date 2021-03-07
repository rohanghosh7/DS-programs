//Sorting arrays using STL functiom

#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;     //use a<b for ascending order
}

int main()
{
    int a[1000],n;
    cout<<"Enter number of elements=";
    cin>>n;
    cout<<"Enter elements=";
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,compare);
    cout<<"Elements after sorting=";
    for(int i=0;i<n;i++)
        cout<<a[i]<<",";
    
    
}