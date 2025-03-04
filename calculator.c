#include<stdio.h>

int main(){
	char operator;
	double number1, number2, result;
	// taking user input 
	printf("Enter an operator(+,-,*,/,): ");
	scanf("%c", &operator);
	
	printf("Enter the first number: ");
	scanf("%lf", &number1);
	printf("Enter the second number: ");
	scanf("%lf", &number2); 
	
	// performing the operations
	
	switch(operator) {
		case'+':
			result = number1 + number2;
			break;
		case'-':
			result = number1 - number2;
			break;
		case'*':
			result = number1 * number2;
			break;	
		case'/':
			if(number2 !=0) {
			result = number1 / number2;
			}
			else{
				printf("ERROR! Division by zero is not allowed.\n");
			}
			break;
			default:
			printf("Invalid operation!\n");
			return 1;	
	}
	// Displaying the result
	
	printf("Result: %2lf\n", result);
	return 0;
}


