#include <stdio.h> 
int main(){
	float x;
	int i=2, nt=0;
	while(i<x){
		if((int)x%i==0) 
            nt=1;
		i++;
		}
	if(nt==0) 
        printf("%.0f la so NT\n",x,x);
	else 
        printf("%.0f Khong phai so NT\n",x);
	return 0;
}