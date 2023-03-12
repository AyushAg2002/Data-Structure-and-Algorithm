#include<iostream>
using namespace std;
int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;

        }
        else{
            e = mid;

        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the elemnts of array"<<endl;
    cin>>n;
    cout<<"Enter The Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans = pivot(arr, n);
    cout<<"Pivot Element is: "<< ans<<" index" <<endl;
}