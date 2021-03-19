//Given a sorted array find pair of elements that sum to a K(given)

#include<iostream>
using namespace std;

int main()
{
    int k = 16;
    int a[] = {1,3,5,7,10,11,12,13};
    int i=0;
    int j = sizeof(a)/sizeof(int) - 1;

    while(i<j)
    {
        int cs = a[i]+a[j];
        if(cs>k)
            j--;
        else if(cs<k)
            i++;
        else
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
}