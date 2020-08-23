#include<bits/stdc++.h>
using namespace std;

// Created by Akif on 8/13/2020.
// 5 Jon er Line Hobe
// 1,2,3,4,5,

int arr[6];
int head = 5;
int tail = 5;

void print() {
    while(head!=tail) {
        cout<<arr[head%5]<<" ";
        head++;
    }
    cout<<endl;
}


bool isEmpty() {
    return head == tail;
}

bool isFull() {
    return abs(tail-head) == 5;
}

int enqueue(int x) {
    if(isFull()) printf("Full !\n");
    else {
        arr[tail % 5] = x;
        tail++;
        printf("Head : %d, Tail %d\n", head, tail);
    }
}

void dequeue() {
    if (isEmpty()) cout << "Empty" << endl;
    else {
        cout << "Dequeued : " << arr[head % 5] << endl;
        head++;
        printf("Head : %d, Tail %d\n", head, tail);
    }
}



int main() {
    enqueue(5);
    enqueue(55);
    enqueue(4);
    enqueue(13);
    enqueue(17);
    enqueue(217);
    dequeue();


    print();



}
