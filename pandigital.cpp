#include"iostream"
using namespace std;
bool check_pandigital(long long int num);
long concate(long a,long b);
int main(){
    long int last_num,max=0;
    for(int i=9387; i>=9234; i--){
        last_num=concate(i,2*i);
        if(check_pandigital(last_num)==1){
            if(last_num >= max){
                max=last_num;
            }
        }
    }
    cout <<"Largest pandigital number "<<max;
}
bool check_pandigital(long long int num){
    int v[9];
    bool x=1;
    for(int i=0; i<9; i++){
        v[i]=num%10;
        num=num/10;
        if(v[i]==0){
            x=0;
            break;
        }
    }
    for(int i=1; i<9; i++){
        for(int j=0; j<i; j++){
            if(v[i]==v[j]){
                x=0;
                break;
            }
        }
    }
    return x;
}
long int concate(long int a,long int b){
    long int c=b;
    while(c > 0){
        a=a*10;
        c=c/10;
    }
    return a+b;
}
