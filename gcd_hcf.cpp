/*gcd- greatest common divisor
hcf- highest common factor
*/
#include<iostream>
using namespace std;
/*int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=1;
    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}*/
/*another approach(1)
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
         gcd=i;
        }
    }cout<<gcd;


    return 0;
    }*/
/*another approach (2)
time complexity =o(log n)
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd=1;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;//always break out from outer loop when we get gcd
        }
    }cout<<gcd;
    return 0;

}*/
/*another approach(3)
EUCLIDEAN ALGORITHM
states that
gcd(n1,n2)= gcd(n1-n2,n2)
logic:
n1= (n1%n2) where n1>n2
or n2= (n2%n1) where n2>n1
time complexity= o(log (min(n1,n2)))
*/
int main(){
    int n1,n2;
    cin>>n1>>n2;
    while(n1>0 && n2>0){
        if(n1>n2) 
        {n1=n1%n2;
        }
        else{ n2=n2%n1;
        }

    }
    if(n1==0){ cout<<n2;
    }
    else {cout<<n1;
    }
    return 0;
}


