/* This code is meant for educational purposes
 
 *@Author Alex Oduor

 * */
#include<stdio.h>

// Global variables
#define MAX 5
int top=-1 , stack[MAX];

// stack operations
//isEmpty
int isEmpty(){
    if(top==-1){
	    return 1;
    }else{
	    return 0;
    }
}

//isFull
int isFull(){
    if(top==MAX-1){
	    return 1;
    }else{
	    return 0;
    }
}

// push
void push(int value)
{ 
    if(isFull()){
	   printf("\n Stack is full");
    }else{
	   top++;
	   stack[top]=value;
	   printf("\n Added: %d",value);
    }
}

//pop
void pop(){
    if(isEmpty()){
	   printf("\nStack is empty!");
    }else{
	   printf("\n poped: %d", stack[top]);
	   top--;
    }
}
//peek
void peek(){
    if(isEmpty()){
  	   printf("\nStack is empty");
    }else{
	   printf("\n Top value: %d",stack[top]);
    }
}

//display the stack values
void display(){
    if(isEmpty()){
	    printf("\n stack is empty");
    }else
    {
	    printf("\n");
        for(int i=top;i>=0 ;i--)
        {
	       printf(" %d->",stack[i]);
        }
    }
}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);  // overflow test
    pop();
    peek();
    display();
    return 0;
}
