// #include<stdio.h>
// int main (){
//     struct pokemon
//     {
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//     };
//     struct pokemon pika;
//     pika.attack=60;
//     pika.hp=20; 
//     pika.speed=50;  
//     pika.tier='a';  
//     struct pokemon chari;                       
//     chari.attack=20;                        
//     chari.hp=10;                        
//     chari.speed=900;                    
//     chari.tier = 'b';
//     return 0;                                               
// }
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x) {
if (top == MAX - 1) {
printf("Stack overflow\n");
return;
}
stack[++top] = x;
}
int pop() {
if (top == -1) {
printf("Stack underflow\n");
return -1;
}
return stack[top--];
}
int peek() {
if (top == -1) {
printf("Stack is empty\n");
return -1;
}
return stack[top];
}
int isEmpty() {
return top == -1;
}