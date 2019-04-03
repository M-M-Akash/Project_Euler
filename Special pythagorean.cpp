#include"iostream"
#include<math.h>
using namespace std;
//a*a+b*b=c*c=(sum-a-b)**2
//a<b<c
//a<=(sum-3)/3
//b<(sum-a)/2
int main(){
    long int sum=1000, a, b, c,prod=0;
    for(a=3; a<=(sum-3)/3; a++){ 
        for(b=a+1; b<(sum-a-1)/2; b++){ 
            c=sum-a-b; //sum=a+b+c
            if(c*c == a*a + b*b){
                prod=a*b*c;
            }
        }
    }
    cout << prod;
    
    
}