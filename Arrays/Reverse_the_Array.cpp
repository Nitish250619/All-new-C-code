#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int n, int key){
    int s=0;
    int e=(n-s)-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]=key)
            return mid;
        else if(arr[mid]<key)
            s=mid+1;
        else
            e=mid-1;

        int mid=(s+e)/2;
    }
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;

    int x=Binary_Search(arr,n,key);
    /*for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }*/
    cout<<x<<endl;
    
    
    return 0;
}