#include <stdio.h>
#include <math.h>
int prob1();
int power(int, int);
int prob5();
int prob4();
int prob3();
int prob2();

int main(){

	prob5();

	return 0;
}

int prob1(){
	int a,b=0,j=0,k=0, i,fact=1,length=0;
    char ans[10];
	printf(" *** Find Factorial ***\n");
	printf("Enter a number less than 100 : ");
	scanf("%d",&a);
	printf("Factorial of %d =",a);
	if (a == 0 || a == 1){
		printf("Factorial of %d = 1",a);
	}else{
		for(i=a;i>1;i--){
		fact = fact*i;

		printf(" %d x",i);
		}
	}

	printf(" 1 = ");

	b= fact;

	while(b != 0){
		b=b/10;
		length++;
	}
        
    sprintf(ans, "%d", fact);
    
    for(i=length-1;i>=0;i--){
        if(i==0){
            printf("%c",ans[length-i-1]);
        }else if((i!=0) && (i%3 == 0)){
            printf("%c,",ans[length-i-1]);
        }else{
            printf("%c",ans[length-i-1]);
        }
        
        
    }
}


int power(int a,int b){
    int i;
    int k =1;
    if (b==0){
        k=a;
    }else{
        for(i=0;i < b;i++){
        k *= a;
        }
    }

    return k;
}

int prob2(){
    int i,j=0,length=0;
    char s[20];
    printf("Enter your name : ");
    scanf("%s",s);
    while (s[j] != '\0'){
        length++;
        j++;
    }
    
    for(i=length-1;i>=0;i--){
        if((s[i] >= 97) && (s[i] <= 122)){
            s[i] -=32;
        }
        printf("%c\n",s[i]);
    }
    printf("Name length : %d",length);
    
}
int prob3(){
    int i,j=0,length=0;
    char s[100];
    printf(" *** To Upper Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]",s);
    
    while (s[j] != '\0'){
        length++;
        j++;
    }
    
    for(i=0;i<length;i++){
        if((s[i] >= 97) && (s[i] <= 122)){
            s[i] -=32;
        }
    }
    
    printf("Output : %s",s);
    
    
    
}
int prob4(){
    int a,i,j;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=i;j<a+i;j++){
        printf("%c",j+65);
        }
        printf("\n");
    }
}
int prob5(){
    int i,j,a;
    printf("Enter a positive number : ");
    scanf("%d",&a);
	if (a <= 0){
		printf("Cannot display data : %d",a);
	}

	
	else{
		for(i=1;i<a+1;i++){
        for(j=1;j<i+1;j++){
            printf("%d",i);
			}
        printf("\n");
		}
		
	}

    
}

