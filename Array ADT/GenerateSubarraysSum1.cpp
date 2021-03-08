//Generate subarrays sum 

#include<iostream>
using namespace std;

int main(){
    
    int n,i,k;
    cin>>n;
    int a[1000];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int currentSum = 0;
    int MaxSum = 0;
    int left = -1;
    int right = -1;
    
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum = 0;
            for(k=i;k<=j;k++){
                currentSum += a[k];
            }
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