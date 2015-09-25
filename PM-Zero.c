//Joshua Lee Franco
//Fall 2015 System Softwares
//Assignment 1- PM\O VM
//Due 9/25/15
//Used git for the first time to keep track of progress on this project


#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_HEIGHT 2000
#define MAX_CODE_LENGTH 500
#define MAX_LEXI_LEVELS 3

struct instructions
{
	int op;
	int l;
	int m;
};


int main(int argc, char const *argv[])
{
	
	int SP = 0;
	int BP = 1;
	int PC = 0;
	int IR = 0;

	//PICS OR GTFO	
	


	return 0;
}

int base(l, base) 
{
    int b1 = base; // find base L levels down
    while (l > 0) 
    {
        b1 = stack[b1 + 1];
        l--;
    }
    return b1;
}
