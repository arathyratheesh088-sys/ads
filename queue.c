#include <stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int ele)
{
if (rear == size - 1)
{
printf("Queue is full\n");
}
else
{
if (front == -1)
front = 0;
 rear++;
queue[rear] = ele;
printf("%d inserted\n", ele);
}
}
void dequeue()
{
if (front == -1 || front > rear)
{
printf("Queue is empty\n");
}
else
{
printf("%d deleted\n", queue[front]);
front++;
if (front > rear)
{
front = rear = -1;
}
}
}
void display()
{
int i;
if (front == -1)
{
printf("Queue is empty\n");
}
else
{
printf("Queue elements: ");
for (i = front; i <= rear; i++)
{
printf("%d ", queue[i]);
}
printf("\n");
}
}
int main()
{
int ch, item, n, i;
while (1)
{
printf("\n----- MENU -----\n");
printf("1. Insertion\n");
printf("2. Deletion\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("How many elements do you want to insert? ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
printf("Enter element %d: ", i + 1);
scanf("%d", &item);
enqueue(item);
}
break;
case 2:
printf("How many elements do you want to delete? ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
dequeue();
}
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("Invalid choice\n");
}
}
}

