#include <iostream>
#include <string>

using namespace std;

class Stack{
    private:
        int top;;
        int arr[5];

    public:
        Stack(){   //constructor function 
            top = -1;
            for(int i=0; i<5; i++){
                arr[i] = 0;
            }
        };

        void display(){  //function to display
            for(int i=0; i<5; i++){
                cout<<arr[i];
            }
            cout<<endl;
        }

        void push(int num){ //push on stack
            top++;
            arr[top] = num;
        }

        int pop(){
            int a = arr[top];  //since return statement should be in the end since after return statement the control will go back to the parent function which called this fucntion
            arr[top] = 0;
            top--;
            return a;
        }

        void isEmpty(){       //can also be used for bool
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
        }

        void isFull(){   //can also used for bool
            if(top == 4){
                cout<<"Stack is full"<<endl;
            }
            else{
                cout<<"Stack is not full"<<endl;
            }
        }

        int count(){
            return (top + 1);
        }

        void peek(){
            int a;
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Current element inside stack: "<<arr[top]<<endl;
            }
        }

        int change(int num){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                arr[top] = num;
            }
        }

};

int main(){

    //This stack is implemented using just a vavriable top and NOT using pointer, implement it using pointer
    int count;
    Stack s1;
    
    s1.push(4);
    s1.display();
    count = s1.count();
    s1.peek();
    cout<<"Count for the stack:"<<count<<endl;
    s1.change(6);
    s1.display();
    s1.pop();
    s1.display();
    s1.isEmpty();
    s1.isFull();
    s1.peek();
    count = s1.count();
    cout<<"Count for the stack:"<<count<<endl;


    return 0;
}