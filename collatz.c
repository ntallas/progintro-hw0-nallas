#include <stdio.h>
#include <stdlib.h>


int compute(int num){

    while(num != 1){
    printf("number = %d\n", num);
    if (num % 2 == 0)
    {
        num = num/2;
    }
    else{
        num = 3*num + 1 ;
    }
    
    }
    printf("------ 1 was reached ------ \n");
}

int numberGiver(int num1,int num2){

    for(int num = num2;num != num1; num--){
        compute(num);
    }
    compute(num1);
}

int main(int argc,char**argv){
if (argc != 3){
    printf("Give me a range\n");
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

printf("%d\n", numberGiver(num1, num2));
}
