#include <stdio.h>

int prob1();
int prob2();
int prob3();
int prob4();
int prob5();

int main(){
	prob5();
	return 0;
}

int prob1(){
	int a,i,j;
	printf(" *** Show isosceles triangle ***\n");
	printf("Enter a counting number : ");
	scanf("%d",&a);
	if (a < 3){
	printf(" --- Incorrect number. ---");
	}else{
		printf("Output :\n");
		for(i=1;i<=a;i++){
		for(j=1; j <= (2*a)+1; j++){
			if(j <= (a+i-1) && j >= (a-i+1)){
				printf("*");

			}else{
				printf(" ");
			}

		}
		printf("\n");
	}
	}

}

int prob2(){
	int a,i,j,counter = 9;
	printf("input (1-20)  : ");
	scanf("%d",&a);
	printf("\n");
	if (a == 0 || a > 20){
		printf("No Answer");
	}else{
		for (i = 1;i < a+1;i++){

			for (j = 1;j <a+1;j++){
				if(counter==0){
					counter=9;
				}
				printf("  %d",counter);
				counter--;
	
			}
			printf("\n");
		}
	}
}

int prob3(){
	int a,i,j,num,inttochar;
	printf("Enter a number (1-16) : ");
	scanf("%d",&a);
	if (a>=1 && a<=16){
		for (i = 1;i < a+1;i++){
			if (i ==1 || i==a){
				for (j = 1;j <a+1;j++){
					num =a-j+1;
					if (num <=9){
							inttochar = num+48;
					}else{
							inttochar = num+55;
					}
					printf("%c",inttochar);
				}
			}else{
				for (j = 1;j <a+1;j++){
					if(j==1 ||j == a){
						num =a-j+1;
						if (num <=9){
							inttochar = num+48;
						}else{
							inttochar = num+55;
						}
						printf("%c",inttochar);
					}else{
						printf(" ");
					}

				}
			}

			printf("\n");
		}
	}else{
		printf("Out of range ! ! !");
	}
}

int prob4(){
	int a,i,j;
	printf("Enter : ");
	scanf("%d",&a);
	if(a%2 ==0){
		a =a/2;
		for (i=1;i<a+1;i++){
			for(j=1;j<i+1;j++){
				printf("*");
			}
			printf("\n");
		}
		for (i=a;i>0;i--){
			for(j=1;j<i+1;j++){
				printf("*");
			}
			printf("\n");
		}
		
	}else{
		a=(a+1)/2;
		for (i=1;i<a+1;i++){
			for(j=1;j<i+1;j++){
				printf("*");
			}
			printf("\n");
		}
		for (i=a-1;i>0;i--){
			for(j=1;j<i+1;j++){
				printf("*");
			}
			printf("\n");
		}

	}
}
int prob5(){
	int x,y,k,i,count=0;
	printf(" *** Solving equation 1/x + 1/y = 1/k ***\n");
	printf(" *** x, y and k are counting numbers. ***\n");
	printf("Enter k : ");
	scanf("%d",&k);
	if(k>0){
		for(x=1;x <= (k*k)+k;x++){
			for(y=1;y <= (k*k)+k;y++){
				if((x-k)*(y-k) == k*k){	
					if(count <9){
					count++;
					printf(" %d. 1/%d + 1/%d = 1/%d\n",count,x,y,k);
					}else{
					count++;
					printf("%d. 1/%d + 1/%d = 1/%d\n",count,x,y,k);
					}
					
				}
			}
		}
		if (count ==1){
			printf("There is 1 solution.");
		}
		else if (count >1){
			printf("There are %d solutions.",count);
		}
		else{

		}
	
	}else{
		printf(" ===> INVALID k <===");
	}

}