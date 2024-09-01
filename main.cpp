#include <iostream>

using namespace std;

int main()
{
    int Result=0;
    char playAgain;
    int playQuiz(void);
    play:
    Result=playQuiz();
    cout<<"Your total score is: "<<Result;

    if(Result>=7)
    {
        cout<<"\nYou are pass"<<endl;
        cout<<"Do you want to play again ?(y/n)"<<endl;
        cin>>playAgain;
        if(playAgain=='y'||playAgain=='Y')
            goto play;
        else
            cout<<"Thank you for playing the Quiz!..."<<endl;
    }
    else
    {
        cout<<"\nYou are fail"<<endl;
        cout<<"Do you want to play again ?(y/n)"<<endl;
        cin>>playAgain;
        if(playAgain=='y'||playAgain=='Y')
            goto play;
        else
            cout<<"Thank you for playing the Quiz!..."<<endl;
    }
    return 0;
}


int playQuiz()
{
    char choice;
    char option;
    int score=0;
    playIn:
    cout<<"--------Welcome to Quiz Game-----------"<<endl;
    cout<<"--------Please follow the instructions--------"<<endl;
    cout<<"   Step 1: Quiz contains total 15 questions   "<<endl;
    cout<<"   Step 2: You will score 1 mark for each right answer and no negative marking   "<<endl;
    cout<<"   Step 3: You will considered as pass only when you scored above 7    "<<endl;
    cout<<"\n\nNext\n ---Please enter/press s to start the quiz---"<<endl;
    cin>>choice;
    if(choice=='s'||choice=='S')
    {
        cout<<"***Please select any one option as A, B, C, D"<<endl;
        cout<<"\n1.How is an array initialized in C language?"<<endl;
        cout<<"A. int a[3]={1,2,3};\nB. int a={1,2,3};\nC. int a[]=new int[3];\nD. int a(3)=[1,2,3];"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n2.Which of the following is a linear data structure?"<<endl;
        cout<<"A. Array\nB. AVL Trees\nC. BinaryTrees\nD. Graphs"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n3.How is the 2nd element in an array accessed based on pointer notation?"<<endl;
        cout<<"A. *a + 2\nB. *(a + 2)\nC. *(*a + 2)\nD. &(a + 2)"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
            score=score+1;
        else
            score=score+0;


        cout<<"\n4.Which of the following is not the type of queue?"<<endl;
        cout<<"A. Priority queue\nB. Single-ended queue\nC. Circular queue\nD. Ordinary queue"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
            score=score+1;
        else
            score=score+0;


        cout<<"\n5.From the following which is not the operation of data structure?"<<endl;
        cout<<"A. Operations that manipualte data in some way\nB. Operations that perform a computation\nC. Operations that check for syntax errors\nD. Operations that monitor an object for the occurence of controlling event"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n6.What will be the output of the following code snippet?\n void solve(){\n int a[]={1,2,3,4,5};\n int sum=0;\n for(int i=0;i<5;i++){\n\t if(i%2==0){\n sum+=a[i];\n }\n }\n cout<<sum<<endl;\n}"<<endl;
        cout<<"A. 5\nB. 15\nC. 9\nD. 6"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
            score=score+1;
        else
            score=score+0;


        cout<<"\n7.How are String represented in memory in C?"<<endl;
        cout<<"A. An array of characters\nB. The object of some class\nC. Same as other primitive data types\nD. Linkedlist of characters"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n8.What is the output of the following code snippet?\n void solve(){\n stack<int>s;\n s.push(1);\n s.push(2);\n s.push(3);\n for(int i=1;i<=3;i++){\n cout<<s.top()<<" ";\n s.pop();\n }\n }"<<endl;
        cout<<"A. 3 2 1\nB. 1 2 3\nC. 3\nD. 1"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n9.What function is used to append a characters at the back of a string in C++?"<<endl;
        cout<<"A.push()\nB. append()\nC. push_back()\nD. insert()"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
            score=score+1;
        else
            score=score+0;


        cout<<"\n10.Whwn a pop() operation is called on an empty queue, what is the condition called?"<<endl;
        cout<<"A. Overflow\nB. Syntax Error\nC. Garbage value\nD. Underflow"<<endl;
        cin>>option;
        if(option=='d'||option=='D')
            score=score+1;
        else
            score=score+0;


        cout<<"\n11.Which one of the following is an application of queue data structure?"<<endl;
        cout<<"A. When resource is shared among multiple consumers.\nB. When data is transferred asynchronously\nC. Load balancing\nD. All of the above"<<endl;
        cin>>option;
        if(option=='d'||option=='D')
            score=score+1;
        else
            score=score+0;

        cout<<"\n12.Which of the following data structures can be used to implement queues?"<<endl;
        cout<<"A. Stack\nB. Arrays\nC. LinkedList\nD. All of the above"<<endl;
        cin>>option;
        if(option=='d'||option=='D')
            score=score+1;
        else
            score=score+0;


        cout<<"\n13.Which of the following data structures finds its use in recursion?"<<endl;
        cout<<"A. Stack\nB. Arrays\nC. LinkedList\nD. Queues"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
            score=score+1;
        else
            score=score+0;


        cout<<"\n14.Which of the following data structures allows insertion and deletion from both ends?"<<endl;
        cout<<"A. Stack\nB. Queue\nC. LinkedList\nD. None of the above"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
            score=score+1;
        else
            score=score+0;


        cout<<"\n15.Which of the following sorting algorithms provide the best time complexity in the worst-case scenario?"<<endl;
        cout<<"A. Quick sort\nB. Merge sort\nC. Bubble sort\nD. Selction sort"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
            score=score+1;
        else
            score=score+0;
    }
    else
    {
        cout<<"You have entered wrong choice, Please enter S to start quiz!.."<<endl;
        goto playIn;
    }
    return score;
}
