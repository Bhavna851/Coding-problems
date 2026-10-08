#include<bits/stdc++.h>
using namespace std;
/*brute force approach*/
/*
int main(){
    int n=8;
    int m=7;
    int a[n]={1,2,2,3,3,4,5,6};
    int b[m]={2,3,3,5,6,6,7};
    int vis[m]={0,0,0,0,0,0,0};
    vector<int>ans;
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        if(a[i]==b[j]&& vis[j]==0){
            ans.push_back(a[i]);
            vis[j]=1;
            break;
        }
        else if(b[j]>a[i]){
       //after we are not supposed to get the element which is equal to a[i]
            break;
        }
     }
    }
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*time complexity: o(n*m)
  space complexity: o(m)+o(k)
  where o(m)= visited array
     o(k)- for the resultant
     
*/
/*optimal approach*/
int main(){
    int n=8;
    int m=7;
    int a[n]={1,2,2,3,3,4,5,6};
    int b[m]={2,3,3,5,6,6,7};
    vector<int>ans;
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]>b[j]){
            //for matching pair
           j++;
        }
        else if(b[j]>a[i]){
            //for matching pair
            i++;
        }
        else{ 
          ans.push_back(a[i]);
          i++;
          j++;
        }
    }
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
/*TC- o(n+m)
  SC- auxiliary space: o(1)
   output space - o(k)
   where k is the size of the vector ans which store the resultant elements
*/
