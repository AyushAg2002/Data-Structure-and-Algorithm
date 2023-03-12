#include<iostream>
using namespace std;
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
int main(){
    char ch[10];
    cout<<"Enter the string"<<endl;
    cin>>ch;
    int count=0;
    for(int i=0; ch[i]!='\0'; i++){
        count ++;
    }
    int ans=count;
    reverse(ch,ans);
    cout<<"Reverse is:"<<ch<<endl;

}