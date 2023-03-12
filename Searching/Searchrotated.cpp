#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
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
int binarysearch(int arr[], int s, int e,  int key){
    int start= s;
    int end= e;
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
    int arr[100];
    int n,key;
    cout<<"Enter The no of Elments of Array"<<endl;
    cin>>n;
    cout<<"Enter the rotated array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter The Element you want to search"<<endl;
    cin>>key;
    int pivot = getpivot(arr, n);
    if(key<=arr[pivot] && key>=arr[0]){
        cout<<binarysearch(arr, 0, pivot-1, key)<<endl;
    }
    else{
        cout<<binarysearch(arr, pivot, n-1, key)<<endl;
    }
 
}

    
