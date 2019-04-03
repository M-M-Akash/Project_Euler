#include"iostream"
#include<math.h>
using namespace std;
bool checkPallindrome(int x);
int main(){
    unsigned int i,j,multi=1;
    bool l;
    for(i=100; i<=999; i++)
    {
        for(j=100; j<=999; j++)
        {
            
           l=checkPallindrome(i*j);
            if(l==1 && i*j >= multi)
            {
                multi = i*j;
            }
        }
    }
    cout << multi <<endl;
    


}
bool checkPallindrome(int x){
    unsigned int y,z,a,b,digit=0,num=0;
    z=x;
    b=x;
    while(z!=0)
    {
        y=z%10;
        z=z/10;
        digit++;
    }
    for( int k=digit-1; k>=0; k--)
    {
        a=b%10;
        num=num+a*pow(10,k);
        b=b/10;
    }
    if(num == x){
       return 1;
    }
    else return 0;
    
}