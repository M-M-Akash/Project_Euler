#include <iostream>
using namespace std;
int main(){
    const int size = 20;
    long way = 1;

//    for (int i = 0; i < size; i++) {
//        way *= (2 * size) - i;
//        way /= i + 1;
//    }
//    cout << way;
    for(int i=1; i<=size; i++){
    	way=way*(size+i)/i;
    }
    cout << way;
}
