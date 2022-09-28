#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=(s+(e-s))/2;
    while(s<=e){
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            s=mid+1;
        else
            e=mid-1;
        
        mid=(s+(e-s)/2);

    }

    return -1;
    
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
    
    cout<<x<<endl;
    
    
    return 0;
}