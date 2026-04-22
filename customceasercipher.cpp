/*case 1: is it a uppercase letter
 if yes then 
    1.shift A-Z
    2.wrap if needed
    logic: (ch-'A'+key)%26+'A'
case 2: is it a lowercase letter
    if yes then 
    1.shift a-z
    2.wrap if needed
    logic: (ch-'a'+key)%26+'a'
 case 3: is it a digit 
     if yes then 
     1.shift 0-9
     2. wrap if needed
    logic: (ch-0 +key)%26+ 0
 case 4: space ,special character or anything else
     1 dont do anything 
case 5: if key<0 
 then output = invalid input*/
 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 string cipher(int key,string text){
    string result="";
    char ch;
    if(key<0){return "invalid input";
    }
    for(int i=0;i<text.size();i++){
      ch= text[i];
    if(ch>='A'&&ch<='Z'){
     ch=(ch-'A'+key)%26+'A';
   }
   else if(ch>='a'&&ch<='z'){
     ch=(ch-'a'+key)%26+'a';
    }
    else if(ch>='0'&&ch<='9'){
     ch=(ch- '0' +key)%10+ '0' ;
    }
    

    result+=ch;
}
    return result;
    
}
int main(){
    int key ;cin>>key;
    cin.ignore();
    string text;
    getline(cin,text);
     string ans= cipher(key,text);
     cout<<"encrypted message: "<<ans;
    
    return 0;
}