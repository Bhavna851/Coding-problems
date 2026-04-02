/* pattern 
 1 i=1
 3  2 i=2
 4  5  6 i=3
 10 9  8  7  i=4
  wherever the value of i is even the numbers are printed in the reverse order
  and when the value of i is odd the numbers are printed in the same order
  */
 #include<iostream>
 using namespace std;
 int main(){
    int n=4;
    int num=1;
    for(int i=1;i<=n;i++)
 {  
    for(int j=1;j<=i;j++)
{
    cout<<num<<"  ";
     num++;
}cout<<endl;
 }
 return 0;
}