#include<iostream>

#define MAX 5
int top = -1;
int stack[MAX];

void push(int item){
    if(top == MAX - 1){
        std :: cout << "Stack Overflow" << std :: endl;
    } else {
        top++;
        stack[top] = item;
    }
}

void pop(){
    if(top == -1){
        std :: cout << "Stack Underflow" << std :: endl;
    } else {
        top--;
    }
}

void display(){
    if(top == -1){
        std :: cout << "Stack is empty" << std :: endl;
    } else {
        std :: cout << "Stack elements: ";
        for(int i = top; i >= 0; i--){
            std :: cout << stack[i] << " ";
        }
        std :: cout << std :: endl;
    }
}
int main(){
    int choice, item;
    while(true){
        std :: cout << "1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        std :: cin >> choice;
        switch(choice){
            case 1:
                std :: cout << "Enter the item to push: ";
                std :: cin >> item;
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                std :: cout << "Invalid choice" << std :: endl;
        }
    }
}



