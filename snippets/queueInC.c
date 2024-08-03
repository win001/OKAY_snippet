******************************************************************************/
// Structured Queue implementation in C`

#include <stdio.h>
#include <stdint.h>
#define SIZE 12

typedef struct {
	uint8_t cmd[22];
	uint16_t len;
} your_struct_t;

your_struct_t forQueue[SIZE];

your_struct_t push_1 = {{1,2,3,4,5,6,7,8,9,10,11},1};
your_struct_t push_2 = {{0},2};
your_struct_t push_3 = {{0},3};
your_struct_t push_4 = {{0},4};
your_struct_t push_5 = {{0},5};
your_struct_t push_6 = {{0},6};

void enQueue(your_struct_t _putData);
void deQueue();
void display();
int queueSize();
void latestElementInQueue();

int items[SIZE], front = -1, rear = -1;

int main() {
	//deQueue is not possible on empty queue
	deQueue();
	queueSize();
	//enQueue 5 elements
	enQueue(push_1);
	queueSize();
	enQueue(push_2);
	queueSize();
	enQueue(push_3);
	queueSize();
	enQueue(push_4);
	queueSize();
	enQueue(push_5);
	queueSize();
	
	// 6th element can't be added to because the queue is full
	enQueue(push_6);
	queueSize();
	
	display();
	
	//deQueue removes element entered first i.e. 1
	deQueue();
	queueSize();
	
	//Now we have just 4 elements
	display();
	
	return 0;
}

void enQueue(your_struct_t _puData) {
	if (rear == SIZE - 1)
	printf("\nQueue is Full!!");
	else {
	if (front == -1)
	front = 0;
	rear++;
	forQueue[rear] = _puData;
	printf("\nInserted -> %d", _puData.len);
	}
	printf("\n front -> %d, rear -> %d\n", front, rear);
}

void deQueue() {
	if (front == -1)
	printf("\nQueue is Empty!!");
	else {
	printf("\nDeleted : %d", forQueue[front].len);
	front++;
	if (front > rear)
	front = rear = -1;
	}
	printf("\n front -> %d, rear -> %d\n", front, rear);
}

// Function to print the queue
void display() {
	if (rear == -1)
		printf("\nQueue is Empty!!!");
	else {
		int i;
		printf("\nQueue elements are:\n");
		for (i = front; i <= rear; i++) {
			printf("\n%d\n", forQueue[i].len);
			for(int j = 0; j < 22; j++) {
				printf("%d  ", forQueue[i].cmd[j]);
			}
		}
	}
	printf("\n");
}

int queueSize() {
	int _size = 0;
	if(rear == -1 && front == -1) {
		_size = 0;
		return _size;
	}
	_size = rear - front + 1;
	printf("\n SIZE =  %d\n", _size);
	return _size;
}

void latestElementInQueue() {

}