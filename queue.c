/* Program to implement a Queue and perform its function in C.
 *
 * compilation: gcc -o queue queue.c
 * execution: ./queue
 *
 * @Ujjwal, 1910991390, 02/08/2021
 * Day_2_Coding_Assignment (Stacks and queues in C)
 */

#include <stdio.h>
#include <stdlib.h>

/*declarations of global variables*/

#define MAX 6
int queue[MAX];
int tail = 0;
int head = 0;

/*Function to remove and print the element at the head of Queue
 * 
 * Runtime complexity is O(n)
 */

int dequeue() {

    int element;
    int i = 0;
    if(tail == head)
    {
	printf("Queue is Empty!\n");
    }
    else {
	element = queue[head];
    while(i < tail){
    queue[head+i] = queue[head + i + 1];
    i++;
    }
	tail--;
	return element;
    }
}

/*Function to only print the element at the head of the Queue
 *
 * Runtime complexity is O(1)
 */

int peek() {
	
    if(tail == head)
    {
	printf("Queue is Empty\n");
    }
    else
    {
	return queue[head];
    }

}

/*Function to add element to the tail of the queue
 *
 * Runtime Complexity is O(1)
 */

void enqueue(int value) {

    if(tail == MAX)
    {
	printf("Queue is full!\n");
    }
    else
    {
	queue[tail++] = value;
	printf("Present Queue is: ");
	for(int i = 0; i < tail; i++)
	{
            printf("%d ",queue[i]);
	}
	printf("\n");
    }
    
}

/*Function to check if the Queue is empty or not
 *
 * Runtime Complexity is O(1)
 */

int is_empty() {

    if(tail == head)
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
    printf("1. enqueue()\n");
    printf("2. dequeue()\n");
    printf("3. peek()\n");
    printf("4. is_empty()\n");
    printf("5. Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
	case 1 :
	printf("Enter the element you want to enqueue: ");
        scanf("%d",&value);
        enqueue(value);
	break;
	case 2 :
	element = dequeue();
	printf("%d dequeued from the queue",element);
	break;
	case 3 :
	element = peek();
	printf("Element at the head is : %d\n",element);
	break;
	case 4 :
	if(is_empty() == 1)
	{
            printf("Yes, Queue is empty!\n");
	    break;
        }
	else
	{
	    printf("No, Queue is not empty!\n");
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
