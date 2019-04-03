//============================================================================
// Name        : problem20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


using namespace std;

int main() {

	int a[1000]={0};
	a[0]=1;
	int m=1;
	int temp=0;
	int x;
	long long int sum=0;
	for(int i=1;i<=100;i++)
		{
		 for(int j=0;j<m;j++)
		            {
		               x = a[j]*i+temp;
		               a[j]=x%10;
		               temp = x/10;
		            }
		             while(temp>0)
		             {
		               a[m]=temp%10;
		               temp = temp/10;
		               m++;
		             }

		}
	for(int i=0;i<m;i++){
		sum = sum + a[i];
	}
		cout<<sum;

	return 0;
}

