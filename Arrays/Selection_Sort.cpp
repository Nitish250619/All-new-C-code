#include<bits/stdc++.h>
using namespace std;

void Selection(int arr[], int n){
    int i, j;
    for(i=0; i<n-1; i++){
        int Minindex=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[Minindex])
                Minindex=j;
        }
        swap(arr[i],arr[Minindex]);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    Selection(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    
    return 0;
}