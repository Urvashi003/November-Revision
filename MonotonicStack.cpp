#include<bits/stdc++.h>
using namespace std;

// void prevGreater(vector<int>&arr){
//    int n= arr.size();
//    stack<int>s;
//    for(int i=0;i<n;i++){
//     while( !s.empty() and s.top()<=arr[i]){
//         s.pop();
//     }
//     if(s.empty()){
//         cout<<"-1"<<" ";
//     }
//     else cout<<s.top()<<" ";
//     s.push(arr[i]);
//    }
// }

// void prevSmaller(vector<int>&arr){
//     int n= arr.size();
//     stack<int>s;
//     for(int i=0;i<n;i++){
//         while(!s.empty() and s.top()>=arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             cout<<"-1"<<" ";
//         }else{
//             cout<<s.top()<<" ";
//         }
//         s.push(arr[i]);
//     }
// }

// vector<int> nextGreater(vector<int>&arr,vector<int>&ans){
//     int n=arr.size();
//     stack<int>s;
    
//     for(int i=n-1; i>=0;i--){
//         while(!s.empty() && arr[i]>=s.top()){
//             s.pop();
//         }
//         if(s.empty()){
//             ans.push_back(-1);
//         }else{
//             ans.push_back(s.top());
//         }
//         s.push(arr[i]);
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
    
// }

void nextSmaller(vector<int>&arr, vector<int>&ans){
    int n=arr.size();
    stack<int>s;
    for(int i=n-1; i>=0;i--){
        while(!s.empty() and s.top()>=arr[i]){
            s.pop();
        }
         if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
        
    }
    reverse(ans.begin(),ans.end());
    

}

int main(){
  vector<int>arr= {10,5,8,15,7};
//   prevGreater(arr);
// prevSmaller(arr);
vector<int>ans ;
// nextGreater(arr,ans);
nextSmaller(arr,ans);
// return ans;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}



  
}