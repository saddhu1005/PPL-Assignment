#ifndef QUEUES_H_INCLUDED
#define QUEUES_H_INCLUDED
#include<iostream>
using namespace std;
#define SIZE 500

class Queue {
private:
    int elements[SIZE];
    int rear;
    int front;

public:

    Queue() {
        rear = -1;
        front = -1;
    }
    void enqueue(int item)
    {
        if (isfull())
           cout << "\nOverflow";
        else if(isempty())
        {
            rear=0;front=0;
            elements[rear]=item;
        }
        else {

            elements[++rear] = item;
        }
    }
    int dequeue()
    {
       if(isempty())
       {     // cout<<"\nUnderflow";
           return -1;
       }

       else if(front==rear)
       {
           int temp=front;
           front=-1;rear=-1;
           return elements[temp];
       }
       else
        return elements[front++];
    }
    bool isempty()
        {
            return front==-1;
        }
    bool isfull()
        {
            return rear==SIZE-1;
        }

};


#endif // QUEUES_H_INCLUDED
