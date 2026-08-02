#include <stdio.h>
int getByte(int x,int n){
	int shift=n*8;
	int newX= x>>shift;
	int ans=newX&255;
	return ans;
}
int main(){
       	int x;
	int n;
   	printf("Enter x,n number: ");
    	scanf("%x", &x);
	scanf("%d", &n);
	int ans=getByte(x,n);
	printf("output = 0x%x\n",ans);
	return 0;
}


