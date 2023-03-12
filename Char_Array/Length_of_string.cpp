#include<iostream>
using namespace std;
int main(){
    char ch[10];
    cout<<"Enter the string"<<endl;
    cin>>ch;
    int count=0;
    for(int i=0; ch[i]!='\0'; i++){
        count ++;
    }
    int ans=count;
    cout<<"count is:"<<ans<<endl;
}