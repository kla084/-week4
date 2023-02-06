/*
 * กลุ่มที่  : 22020102
 * 65011062 ศุภวิชญ์ สุขเยาว์
 * chapter : 4	item : 5	ครั้งที่ : 0006
 * Assigned : Monday 6th of February 2023 09:08:19 AM --> Submission : Monday 6th of February 2023 09:59:11 AM	
 * Elapsed time : 50 minutes.
 * filename : lec4444.c
 */
#include <stdio.h>
int prob1();
int prob2();
int prob3();
int prob4();
int prob5();
int prob51();
int prob52();
int prob53();

int main(){
	prob5();
	return 0;
}

int prob1(){
	int b;
	printf(" *** ODD/EVEN verification ***\n");
	printf("Enter an integer : ");
	scanf("%d",&b);
	if(b % 2 == 0){
		printf("%d is an EVEN number.",b);
	} else {
		printf("%d is an ODD number.",b);
	}
	return 0;
}

int prob2(){
		int a[3];
	int i,j,temp;
	
	printf(" *** Find Maximum / Middle ***\n");
	printf("Enter 3 integers : ");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	for (i =0;i< 3;i++){
		for (j= i+1; j< 3;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Max / Mid = %d / %d = %.3f",a[0],a[1],(float) a[0]/a[1]);

	return 0;
}

int prob3(){
	int c,d,cond;

	printf(" *** switch control structure ***\n");
	printf("Enter 2 number : ");
	scanf("%d %d",&c,&d);
	if((c >= 0) && (c <= 5) && (d >= 0) && (d <= 5)){
		if(c+d >5){
			cond = 1;
		} 

		else if(c+d < 5){
			cond = 2;

		}else{
			cond = 3;
		}
		switch (cond){
			case 1:
				printf("%d is More than 5",c+d);
				break;
			case 2:
				printf("%d is Less than 5",c+d);
				break;
			case 3:
				printf("Equals.");
				break;
			default :
				break;
		}

	} else{
		printf("");
	}

}

int prob4(){
	char a,ascii_num;
	printf("Enter Character : ");
	scanf("%c",&a);
	ascii_num = (int) a;
	if( (a>=65) && (a<=90)){
		printf("%c is Capital Letters.\n",ascii_num);
		printf("Small Letters of %c is %c",ascii_num,ascii_num+32);
	}
	else if( (a>=97) && (a<=122)){
		printf("%c is Small Letters.\n",ascii_num);
		printf("Capital Letters of %c is %c",ascii_num,ascii_num-32);
	}
	else if( (a>=48) && (a<=57)){
		printf("%c is Number.",ascii_num);
	}
	else {
		printf("%c is Special character.",ascii_num);
	}
	
}

int prob5(){
    int a;
	printf(" *** Program ***\n");
	printf("Enter a function number(1-3) : ");
	scanf("%d",&a);
	switch (a){
		case 1:
			prob51();
			break;
		case 2:
			prob52();
			break;
		case 3:
			prob53();
			break;
		default:
			printf("Your function is ERROR");
			break;
	}
}

int prob51(){
	char name[100];
	scanf("%s",name);
	printf("Name : %s",name);
}

int prob52(){
	int i,j,temp,a[2];

	scanf("%d %d",&a[0],&a[1]);

	for (i =0;i< 2;i++){
		for (j= i+1; j< 2;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	if (a[0] == a[1]){
		printf("%d is equal %d, Max - Min = %d",a[0],a[1],a[0]-a[1]);
	}else{
		printf("Max - Min : %d - %d = %d",a[0],a[1],a[0]-a[1]);
	}
	
}

int prob53(){
	int i,j,temp,a[3];

	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	for (i =0;i< 3;i++){
		for (j= i+1; j< 3;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("(Min + Max) / Mid : (%d + %d) / %d = %.2f",a[2],a[0],a[1],(float) (a[2]+a[0])/a[1]);
}