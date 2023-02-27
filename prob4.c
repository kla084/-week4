#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int check_length(char string[]);

int main() {
    char password[20];
    int flag;
    printf("Enter password : ");
    scanf("%s", &password);
    /* CODE OUTPUT HERE */
    has_upper_case(password);
    has_lower_case(password);
    has_number(password);
    check_length(password);
    
    printf("verifying . . .\n");
    if(flag>=3){
        printf("> Hard to remember!");
    }else{
        printf("> Easy to remember!");
    }
}

int has_upper_case(char string[]) {
    int i,flag=0;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= 65 && string[i] <= 90 ){
            flag++;
        }
        break;
    }

    return flag;
}

int has_number(char string[]) {
    int i,flag;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= 48 && string[i] <= 57 ){
            flag++;
        }
        break;
    }

    return flag;
}

int check_length(char string[]) {
    int i,flag;
    for(i=0; string[i]!='\0'; i++) {
        if(i>8 ){
            flag++;
        }
        break;
    }

    return flag;
}
int has_lower_case(char string[]) {
    int i,flag;
    for(i=0; string[i]!='\0'; i++) {
        if(string[i] >= 97 && string[i] <= 122 ){
            flag++;
        }
        break;
    }

    return flag;
}
