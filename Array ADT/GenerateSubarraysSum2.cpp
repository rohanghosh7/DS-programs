//Generate subarrays sum 

#include<iostream>
using namespace std;

int main(){
    
    int n,i,k;
    cin>>n;
    int a[1000];
    int cumSum[1000] = {0};

    cin>>a[0];
    cumSum[0] = a[0];
    
    for(i=1;i<n;i++){
        cin>>a[i];
        cumSum[i] = cumSum[i-1] + a[i];

    }

    int currentSum = 0;
    int MaxSum = 0;
    int left = -1;
    int right = -1;
    
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum = 0;
            currentSum = cumSum[j] - cumSum[i-1];
            if(currentSum > MaxSum){
               MaxSum = currentSum;
               left = i;
               right = j;
           }
        }
    }
    cout<<"Maximum sum is "<<MaxSum<<endl;
    cout<<"Sub array is ";
    for(k=left;k<=right;k++){
        cout<<a[k]<<",";
    }
}