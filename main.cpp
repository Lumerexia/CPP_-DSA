#include <iostream>
#include <windows.h> // this is the header to change the color of the command prompt
#include <stdlib.h> //this header is used to make the clear screen or ("cls") to work

using namespace std;

void push(); //this is the declaration of the void functions that will be used in the stack and queue menu
void pop();
void fixer();
void high();
void display();
void finder();
void enqueue();
void dequeue();
void arrangement();
void showcase();
void explore();


int main()
    {
    int choice,want,need; //declaration of variables to be used in the stack menu and queue menu

    system("color 03");
    menu:
    system("CLS");

    cout<<endl;
    cout<<"\t""\t""\t""\t""\t"<<"Main Menu"<<endl;
    cout<<endl;
    cout<<"\t""\t""\t""\t"<<"[1] Stack"<<endl;
    cout<<"\t""\t""\t""\t"<<"[2] Queue"<<endl;
    cout<<"\t""\t""\t""\t"<<"[3] Quit"<<endl;
    cout<<"\t""\t""\t""\t"<<"Enter your choice: ";
    cin>>choice;
    cout<<endl;

    if(choice==1) //if you input number 1 in the main menu you will go to the stack menu
    {
        do{
        cout<<endl;
        cout<<"\t""\t""\t""\t""\t"<<"Stack Menu"<<endl;
        cout<<"\t""\t""\t""\t"<<"[1] Add"<<endl;
        cout<<"\t""\t""\t""\t"<<"[2] Delete"<<endl;
        cout<<"\t""\t""\t""\t"<<"[3] Sort"<<endl;
        cout<<"\t""\t""\t""\t"<<"[4] Top"<<endl;
        cout<<"\t""\t""\t""\t"<<"[5] Display"<<endl;
        cout<<"\t""\t""\t""\t"<<"[6] Search"<<endl;
        cout<<"\t""\t""\t""\t"<<"[7] Exit"<<endl;
        cout<<"\t""\t""\t""\t"<<"Enter your choice: ";
        cin>>want;
        cout<<endl;

            switch(want) //selection of function to be used
            {
                case 1:
                    {
                    push();
                    break;
                    }
                case 2:
                    {
                    pop();
                    break;
                    }
                case 3:
                    {
                    fixer();
                    break;
                    }
                case 4:
                    {
                    high();
                    break;
                    }
                case 5:
                    {
                    display();
                    break;
                    }
                case 6:
                    {
                    finder();
                    break;
                    }int see1;
                case 7:
                    {
                    goto menu;
                    break;
                    }
                default:
                    {
                    cout<<"\t""\t""\t""\t"<<"Invalid Input!"; //if you input an invalid element the program will terminate
                    return 0;
                    }
            }
        }while(want!=7);
        }

        if(choice==2) //if you input number 2 you will go to the queue menu
        {
        do{
        cout<<endl;
        cout<<"\t""\t""\t""\t""\t"<<"Queue Menu"<<endl;
        cout<<"\t""\t""\t""\t"<<"[1] Add"<<endl;
        cout<<"\t""\t""\t""\t"<<"[2] Delete"<<endl;
        cout<<"\t""\t""\t""\t"<<"[3] Sort"<<endl;
        cout<<"\t""\t""\t""\t"<<"[4] Display"<<endl;
        cout<<"\t""\t""\t""\t"<<"[5] Search"<<endl;
        cout<<"\t""\t""\t""\t"<<"[6] Exit"<<endl;
        cout<<"\t""\t""\t""\t"<<"Enter your choice: ";
        cin>>need;
            switch(need)
            {
                case 1:
                    {
                        enqueue();
                        break;
                    }

                case 2:
                    {
                        dequeue();
                        break;
                    }
                case 3:
                    {
                        arrangement();
                        break;
                    }

                case 4:
                    {
                        showcase();
                        break;
                    }
                case 5:
                    {
                        explore();
                        break;
                    }

                case 6:
                    {
                        goto menu;
                        break;
                    }
                default:
                    {
                        cout<<"\t""\t""\t""\t"<<"Invalid Input!"; //if you input an invalid element the program will terminate
                        return 0;
                    }
            }
            }while(need!=6);
        }
        if (choice==3) //if you input number 3 the program will terminate
        {

            cout<<"\t""\t""\t""\t"<<"Thank you for Using this Stack Program!";
            cout<<endl;
        }
        else
        {

            cout<<"\t""\t""\t""\t"<<"Incorrect input!"; //if you input an invalid element the program will terminate
            cout<<endl;
        }
}
//stack menu functions
    int stack[50];
    int ch, val,sorty,control,handler,see,locate; //this is my declaration of variables that will be used in the stack menu
    int top=-1;
    int n=50;

    void push() // this is the function for push
    {
       if(top>=n-1)
       {
        cout<<"Stack is Full"<<endl;
       }

       else {
            cout<<"\t""\t""\t""\t"<<"Enter an Element: ";
            cin>>val;
            cout<<"\t""\t""\t""\t"<<val<<" is added to the stack! ";
            cout<<endl;
          top++;
            stack[top]=val;
       }
    }

    void pop() // this is the function for the delete
    {
       if(top==-1)
       cout<<"\t""\t""\t""\t"<<"Stack is empty"<<endl;
       else
            {
          cout<<"\t""\t""\t""\t"<<"The element Deleted is: "<< stack[top] <<endl;
          cout<<endl;
          top--;
       }
    }

    void display() //this is the function for the display to show the stack elements
    {
       if(top>=0)
        {
          cout<<"\t""\t""\t""\t"<<"Stack elements are:";
          for(int x=top; x>=0; x--)
          cout<<stack[x]<<" ";
          cout<<endl;
       }
       else
       {
           cout<<"\t""\t""\t""\t"<<"Your Stack is empty!";
           cout<<endl;
       }

    }

    void fixer() // this function will sort the inputted elements in the stack
    {
    if(top>=0)
    {
    for(sorty=0;sorty<=top;sorty++)
    {
        for(control=0;control<=top;control++)
        {
            if(stack[sorty]>stack[control])
            {
                handler=stack[sorty];
                stack[sorty]=stack[control];
                stack[control]=handler;

            }

        }
    }
    cout<<"\t""\t""\t""\t"<<"Your Stack has been Sorted"<<endl;
    cout<<endl;
    }
    else
    {
    cout<<"\t""\t""\t""\t"<<"Your Stack is empty!"<<endl;
    cout<<endl;
    }
    }

    void high() //this function shows the top element or the element that is on the first array
    {
    if(top>=0)
        {
        cout<<"\t""\t""\t""\t"<<"The Top value is: "<<stack[top];
        cout<<endl;
        }
    else
        {
        cout<<"\t""\t""\t""\t"<<"Your Stack is empty!"<<endl;
        cout<<endl;
        }
    }

    void finder() //this is the function for the search that will search your desired element and will tell its position in the array
    {
    if(top>=0)
    {
    cout<<"\t""\t""\t""\t"<<"Find your desired element: ";
    cin>>see;
        int low=0;
        int high=top;
        int locate=-1;
        int mid;
        while(high>=low)
        {
            mid=(high+low)/2;
            {
                if(see<stack[mid])
                {
                    high=mid-1;
                }
                else if(see>stack[mid])
                {
                    low=mid+1;
                }
                else
                {
                    locate=1;
                    break;
                }
            }
        }
        if(locate==1)
        {
            cout<<"\t""\t""\t""\t"<<"The given Element "<<see<<" is found at position "<< mid+1<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"\t""\t""\t""\t"<<"The given Element "<<see<<" is not found in the stack :("<<endl;
            cout<<endl;
        }
    }
    else
    {
     cout<<"\t""\t""\t""\t"<<"Stack is Empty!"<<endl;
     cout<<endl;
    }
    }

//Queue Menu functions
    const int cap=10;//Variables in the Queue Menu :D
    int queue[cap];
    int front=-1;
    int back1=-1,q,v;



    bool isFull() // this function tells that if the stack has values inputed in it
    {
        if(back1 ==cap-1)
        {
            return true;
        }
        else
            return false;
    }

    bool isEmpty() // this function tells if the stack has empty value in the array
    {
    if(front==-1 || front>back1)
            {
            return true;
            }
    else
            return false;
    }

    void enqueue() //this is the function for the queue
    {
        if (isFull())
            {
            cout<<"\t""\t""\t""\t"<<"Queue is Over the limit!"<<endl;
            }
        else
            {
            if(front==-1)
            front=0;
            cout<<"\t""\t""\t""\t"<<"Enter Value: ";
            cin>>q;
            cout<<"\t""\t""\t""\t"<<q<<" is Added to the Queue!"<<endl;
            back1++;
            queue[back1]=q;
            }
    }

    void dequeue() //this deletes the first element in the queue
    {
        if(isEmpty())
            {
            cout<<"\t""\t""\t""\t"<<"Your Queue is Empty!"<<endl;
            return;
            }
        else
            {
            cout<<"\t""\t""\t""\t"<<"The element deleted is: "<<queue[front]<<endl;
            front=front+1;
            }
    }

    void arrangement() //this sorts all the elements in the queue
    {
    if(isEmpty())
        {
        cout<<"\t""\t""\t""\t"<<"Queue is Empty"<<endl;
        }
    else
        {
            for(v=front;v<=back1;v++)
            {
                for(int y=front;y<=back1;y++)
                {
                    if(queue[v]<queue[y])
                    {
                        int temp=queue[v];
                        queue[v]=queue[y];
                        queue[y]=temp;

                    }

                }
            }
        cout<<"\t""\t""\t""\t"<<"Your stack has been already Sorted!"<<endl;
        cout<<endl;
        }
    }


    void showcase() //this displays the elements in the queue
    {
        if(isEmpty())
            {
             cout<<"\t""\t""\t""\t"<<"Queue is empty!"<<endl;
             return;
            }
        else
            {
             cout<<"\t""\t""\t""\t"<<"Elements in that are currently in Queue: ";
             for(q=front; q<=back1;q++)
             cout<<queue[q]<<" ";
             cout<<endl;
            }
     }

    void explore() //this search your desired element in the queue
    {
    if(isEmpty())
        {
        cout<<"\t""\t""\t""\t"<<"Your Queue is Empty!"<<endl;
        cout<<endl;
        }
    else
    {
    int see1;
    cout<<"\t""\t""\t""\t"<<"Enter the value you want to find the position: ";
    cin>>see1;
        int low1=0;
        int high1=back1;
        int locate1=-1;
        int mid1;
        while(high1>=low1)
        {
            mid1=(high1+low1)/2;
            {
                if(see1<queue[mid1])
                {
                    high1=mid1-1;
                }
                else if(see1>queue[mid1])
                {
                    low1=mid1++;
                }
                else
                {
                    locate1=1;
                    break;
                }
            }
        }
        if(locate1==1)
        {
            cout<<"\t""\t""\t""\t"<<"The Element " <<see1<< " is found at position "<< mid1+1<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"\t""\t""\t""\t"<<"The Element " <<see1<< " is not found in the stack :("<<endl;
            cout<<endl;
        }
    }

    }



