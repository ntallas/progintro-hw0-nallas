#include <stdio.h>
#include <stdlib.h>

//Executes Collatz operations and calculates repetitions
int compute(int num){

    int repetitions = 0;

    while(num > 1){

    repetitions = repetitions + 1;
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
    return repetitions;
    printf("repetitions = %d\n" , repetitions);
}

/*
Gives every number in sequence
to the Collatz Calculator(compute) 
and calculates its repetitions
until the number turns to one
*/
int numberGiver(int num1,int num2){
    int maxReps = 1;
    for(int num = num2;num != num1; num--){
        
        int repetitions = compute(num);
        
        if(repetitions > maxReps){
            maxReps = repetitions;
        }
        
    }
        int lastRep = compute(num1);
        if(maxReps < lastRep){
            maxReps = lastRep;
        }
        printf("\n\nmaxReps = %d\n" , maxReps );

}

// main function
int main(int argc,char**argv){
if (argc != 3){
    printf("Give me a range\n");
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

//check if range contains positive numbers
if (num1 <= 0 && num2 <= 0){
    printf("Range should contain positive numbers \n");
    return 1;
}

/*Arranges range from the smaller
to the bigger number and computes numbers
from the positive range only
*/
else if(num1<num2){
    if (num1>=0)
    {
        numberGiver(num1, num2);
    }
    else
    {
        numberGiver(1,num2);
    }
    
    
}
else{
    if (num2>=0)
    {
        numberGiver(num2, num1);
    }
    else
    {
        numberGiver(1, num1);
    }

}
return 0;

}
