/* This code is meant for educational purposes
 
 *@Author Alex Oduor

  Topic: Implementing a queue data structure using arrays

 * */
#include<stdio.h>

#define MAX 5
int Queue[MAX];
int head=-1 , tail=-1;

//check Queue underflow
int isEmpty(){
    if(head==-1 || head>tail){
        return 1;
    }else{
         return 0; }
}

// check Queue overflow
int isFull(){
    if(tail==MAX-1){
        return 1;
    }else{ return 0;}
}

// Enqueue operation
void enqueue(int value){
    if(isFull()){
        printf("Queue overflow\n");
    }else{
        if(head==-1){
            head=0;
        }
            Queue[++tail]=value;
            printf("Enqueued: %d\n",value);
        }
}

// Dequeue Operation 
int dequeue() {
    if (isEmpty()){
        printf("Queue Undeflow\n");
        return -1;
    }else{
        return  Queue[head++];
    }
}

//peek operation
int peek(){
    if(isEmpty()){
        printf("Queue is Empty\n");
    }else{
        return Queue[head];
    }
}

//display the Queue elements
void display(){
    if(isEmpty()){
        printf("Queue is empty\n");
    }else{
        for(int i=head;i <= tail;i++){
            printf("%d->",Queue[i]);
         }
         printf("\n");
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);  //overflow test
    printf("The head/first element is: %d\n",peek());
    display();
    printf("Dequeued: %d\n",dequeue());
    display();
}



