#include<iostream>
#include<vector>
using namespace std;
vector<int> add(vector<int> v, vector<int> m){
    int i=v.size()-1;
    int j=m.size()-1;
    vector<int> ans;
    int carry=0;
    while(i>=0 && j>=0){
        int val1=v[i];
        int val2=m[j];

        int sum = val1 + val2 + carry;

        carry =sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;

    }
    while(i>=0){
        int sum =v[i]+carry;
        carry =sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum =m[j]+carry;
        carry =sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
     while(carry!=0){
        int sum = carry;
        carry =sum/10;
        sum = sum%10;
        ans.push_back(sum);
        
    }
  return ans;
}
vector<int> reverse(vector<int> result1){
   int s,e;
   s=0;
   e=result1.size()-1;
   while(s<=e){
    swap(result1[s],result1[e]);
    s++;
    e--;
   }
   return result1;
}
void print(vector<int> result2){
    for(int i=0;i<result2.size();i++){
        cout<<result2[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    vector<int> v;
    vector<int> m;
    v.push_back(11);
    v.push_back(5);
    m.push_back(1);
    m.push_back(4);

    vector<int> result1=add(v,m);
    cout<<"Printing resulted array"<<endl;
    vector<int> result2 = reverse(result1);
    print(result2);
    return 0;
}