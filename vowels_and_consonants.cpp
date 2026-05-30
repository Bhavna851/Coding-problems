#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int v=0,c=0;
   
    for(int i=0;i<s.length();i++){
        bool isvowel= false;
        char ch= tolower(s[i]);
        if(ch>='a'&&ch<='z'){
        char arr[5]={'a','e','i','o','u'};
           for(int j=0;j<5;j++){
            
            if(ch==arr[j]){
                isvowel=true;
                 break;
            }
        
        }
        if(isvowel==true){
                v++;
        }
        else {c++;
        
        }
    }
        
    }cout<<"vowels = "<<v<<endl;
    cout<<"consonant = "<<c<<endl;
    return 0;
}