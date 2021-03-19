//Generate subarrays sum using Kadane's algorithm

#include<iostream>
using namespace std;

int main(){
    int a[1000];
    int n,i;
    int cs =0;
    int ms =0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    //Kadane's algorithm

    for(i=0;i<n;i++){
        cs += a[i];
        if(cs<0){
            cs = 0;
        }
        ms = max(ms,cs);
    }
    cout<<"Maximum sum is "<<ms;
}