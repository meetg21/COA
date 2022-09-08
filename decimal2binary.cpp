/*Decimal to binary converstion*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int decimal,binary=0,remainder,product=1;
	
	cout<<"Enter the decimal number u wanna cnvert: " ;
	cin>>decimal;
	
	while(decimal!=0){
	
	/*for(int i=7;i>=0;i--){
		if(decimal>=pow(2,i)){
			binary=pow(10,i)+binary;
			decimal=decimal-pow(2,i);
		}
	}*/
	
	remainder=decimal%2;
	binary=binary+(remainder*product);
	decimal=decimal/2;
	product *=10;
}
	
 	cout<<binary<<endl;
 	
	return 0;
}
