/*1st approach*/
/*two pointer approach*/
#include<iostream>
#include<string>
using namespace std;
void reverse(string & s ,int i,int j){
    if(i>=j)return;
    swap(s[i],s[j]);
    reverse(s,i+1,j-1); 
}
int main(){
    string s;
    getline(cin,s);
    int i=0;
    int j= s.size()-1;
    reverse(s,i,j);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;

}
