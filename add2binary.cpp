//adddition of two binary numbers 

#include<iostream>
using namespace std;

int main()
{
	long a=1001;
	long b=1100;
	int i=0;
	int r=0;
	int sum[4];
	//ans =0101
	
	while(a!=0 || b!=0)
	{
   sum[i++] = (int)((a % 10 + b % 10 + r) % 2);
   r = (int)((a % 10 + b% 10 + r) / 2);
   a = a / 10;
   b = b / 10;
  
	}
	 if (r != 0)
	{
      sum[i++] = r;
    }
    --i;
    while (i >= 0)
	 {
   		cout<<(sum[i--]);
   		
  	 }
     cout<<("\n");  
  "";
//    for (i = 0; i < 4; i++) {
//        s = s + sum[i];
//        cout<<s;
    
     
 
     
 return 0;
	
}
