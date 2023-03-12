#include<iostream>
using namespace std;
int firstoccur(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid= start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]<k){
           start=mid+1;
        }
        if(arr[mid]>k){
           end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int lastoccur(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid= start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]<k){
           start=mid+1;
        }
        if(arr[mid]>k){
           end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;

}
int main(){
    int arr[1000];
    int n,k;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    cout<<"Enter The elements of sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>k;
    int a = firstoccur(arr, n, k);
    int b = lastoccur(arr, n, k);
    cout<<"First occurence is: "<<a<<" index"<<endl;
    cout<<"Last Occurence is: "<<b<<" index"<<endl;
    cout<<"Total Occurnece is: "<<(b-a)+1<<endl;


}