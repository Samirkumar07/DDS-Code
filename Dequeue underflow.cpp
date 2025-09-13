#include <iostream>
using namespace std;
#define SIZE 5
int Queue[SIZE];
int rear=-1,front=-1;
void dequeue(){
    if(front==-1 && rear==-1){
        cout<<"underflow";
    }
    else if(front==rear){
        front=-1;
        rear=-1;
        cout<<Queue[front]<<"removed";
    }
    else{
        cout<<Queue[front]<<" removed";
        front++;
    } 
}
int main(){
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
