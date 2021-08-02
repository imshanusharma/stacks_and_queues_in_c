/* Program to implement a stack and perform its function in C.
 *
 * compilation: gcc -o stack stack.c
 * execution: ./stack
 *
 * @Ujjwal, 1910991390, 02/08/2021
 * Day_2_Coding_Assignment (Stacks and queues in C)
 */

#include <stdio.h>
#include <stdlib.h>

/*declarations of global variables*/

#define MAX 6
int stack[MAX];
int top = 0;

/*Function to remove and print the top most element of stack
 * 
 * Runtime complexity is O(1)
 */

int pop() {

    int element;

    if(top == 0)
    {
	printf("Stack Underflow\n");
    }
    else {
    
	element = stack[top-1];
	top = top-1;
	return element;
    }
}

/*Function to only print the topmost element of the stack
 *
 * Runtime complexity is O(1)
 */

int peek() {
	
    if(top == 0)
    {
	printf("Stack is Empty\n");
    }
    else
    {
	return stack[top-1];
    }

}

/*Function to add element in the stack in Bottom to Top approach
 *
 * Runtime Complexity is O(1)
 */

void push(int value) {

    if(top == MAX)
    {
	printf("Stack Overflow!\n");
    }
    else
    {
	stack[top++] = value;
	printf("Present Stack is: ");
	for(int i = 0; i < top; i++)
	{
            printf("%d ",stack[i]);
	}
	printf("\n");
    }
    
}

/*Function to check if the stack is empty or not
 *
 * Runtime Complexity is O(1)
 */

int is_empty() {

    if(top == 0)
    {
	return 1;
    }
    return 0;
}

int main() {

    int value;
    int choice;
    int element;
    
    while(1) {
    printf("Select one of the options below:\n");
    printf("1. push()\n");
    printf("2. pop()\n");
    printf("3. peek()\n");
    printf("4. is_empty()\n");
    printf("5. Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
	case 1 :
	printf("Enter the element you want to push into the stack: ");
        scanf("%d",&value);
        push(value);
	break;
	case 2 :
	element = pop();
	printf("%d popped from the stack",element);
	break;
	case 3 :
	element = peek();
	printf("Element at the top is : %d\n",element);
	break;
	case 4 :
	if(is_empty() == 1)
	{
            printf("Yes, Stack is empty!\n");
	    break;
        }
	else
	{
	    printf("No, Stack is not empty!\n");
	    break;
	}
	case 5 :
	printf("Exiting...\n");
	exit(0);
	
	default :
	printf("Invaid Input! Please Enter again...\n");
    }
    }
}
