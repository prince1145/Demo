#include<stdio.h>

int max = 8;
int stack[8];
int top = -1;

int isempty(){
    if(top == -1)
    return -1;
    else 
    return 0;
}

int isfull(){
    if(top == max)
    return 1;
    else 
    return 0;
}
int peek(){
    return stack[top];
}
int pop(){
    int data;
    if(!isempty){
        data = stack[top];
        top = top -1;
        return data;
    }else{
        printf("could not retrieve data stack is empty");
    }
}
int push(int data){
    if(!isfull()){
        top = top +1;
        stack[top] = data;
    }else{
        printf("could not insert data,stack is full");
    }
}

int main(){
    push(3);
    push(2);
    push(1);
     push(4);
    printf("%d",peek());
}
