#include<iostream>
using namespace std;
void sortarray(int arr[],int n){
      for(int i=0; i<n-1; i++){
        int minindex=i;
        for(int j=(i+1); j<n; j++){
          if(arr[j] < arr[minindex]){
            minindex = j;
          }
          
        }   
        
        swap(arr[minindex],arr[i]);
        
      }
      
}
void print(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sortarray(arr,n);
  print(arr,n);


}
