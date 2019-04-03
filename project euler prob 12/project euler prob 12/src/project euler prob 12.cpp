//============================================================================
// Name        : project.cpp
// Author      : Akash
// Version     :
// Copyright   : Your copyright notice
// Description : C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
	int sum=0;
	int k=0;
	int i=1;
int main() {
	while (k <= 500){
		k=0;
		i++;
		sum=i+i*(i-1)/2;
		int sqr_sum=sqrt(sum);
		for(int j=1;j<=sqr_sum;j++){
			if(sum % j== 0){
				k=k+2;

			}
		}
		if(sum == sqr_sum*sqr_sum){
			k--;
		}

	}
	cout << sum;
}
