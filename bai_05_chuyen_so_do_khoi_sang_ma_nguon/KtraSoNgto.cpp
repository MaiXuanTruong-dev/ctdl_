#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n); 
	if(n<2){
		printf("%d khong phai so nguyen to",n);
		return 0; 
	}
	else{
	    for(int i=2;i<=sqrt(n);i++){
	    	if(n%i==0){
	    		printf("%d khong phai so nguyen to",n);
				return 0; 
			}
		}
		printf("%d la so nguyen to",n); 
	} 
} 
