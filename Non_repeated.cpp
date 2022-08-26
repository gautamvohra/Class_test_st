#include <bits/stdc++.h>
using namespace std;

int main()
{   //taking inputs
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*implementing the logic where we have first sorted and 
    then checked neighbour number in array if they are repeating or not, if not repeating then we print them.
    */
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}