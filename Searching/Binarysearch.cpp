#include<iostream>
using namespace std;
int binary(int arr[], int n, int key){
    int start= 0;
    int end= n-1;
    int mid= (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= (start+end)/2;
    }
    return-1;

}
int main(){
    int arr[1000];
    int n,key;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter The element you want to search"<<endl;
    cin>>key;
    int ans= binary(arr, n, key);
    cout<<key<<" is at "<< ans <<" index"<<endl;

}
