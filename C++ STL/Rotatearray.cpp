#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int> v,int k){

    vector<int> temp(v.size());
    for(int i=0; i<v.size();i++){
        temp[(i+k)%v.size()]= v[i];

    }
    v = temp;
    return v;
}
void print(vector<int> ans){

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    int k;
    cin>>k;
    
    vector<int> ans=rotate(v,k);
    cout<<"Printing reverse array"<<endl;
    print(ans);
    return 0;
}