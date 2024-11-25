#include <stdio.h>

int main(){
	int number,ft,lt,square;
	printf("Strong numbers have 4 digits. If the square of the\nsum of the first 2 digits and the last two digits is equal to the\nnumber itself, it is a strong number.\n");
	printf("Run named FindNumbs.c program to see all strong numbers.\n");
	printf("\n");
	printf("enter 4 digit numbers: ");
	scanf("%d",&number);
	if(number >= 1000 && number <= 9999){
		ft = number%100;
		lt = number/100;
		square = (ft + lt) * (ft + lt);
		if(square == number){
			printf("that's a strong number!");
		}else{
			printf("that isn't a strong number!");
		}
	}else{
		printf("please enter 4 digit number!");
	}
}
