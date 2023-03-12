#include<iostream>
using namespace std;
bool check_palindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;

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
    int result=check_palindrome(ch,ans);
    cout<<result<<endl;
}