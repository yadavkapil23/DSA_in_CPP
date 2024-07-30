// we are going to create a queue.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    if (q.empty())
    {
        cout << "Queue is empty , please enter some elements." << endl;
    }
    q.push(12);
    q.push(34);
    q.push(87);
    q.push(91);
    cout << "we are printing the front of our Queue." << endl;
    cout << q.front() << endl;
    cout << "we are printing the back of our queue : " << endl;
    cout << q.back() << endl;
    cout << "the size of your queue is : " << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    cout << q.size() << endl;
    cout << "we are printing the Queue : " << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "we are popping the elements in the Queue : " << endl;
    q.pop();
    cout << "the front of the Queue after popping is : " << q.front() << endl;
    return 0;
}

/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    if(q.empty()){
        cout<<"Your Queue is Empty . Please Insert Something"<<endl;
    }
    q.push(78);
    q.push(12);
    q.push(43);
    q.push(56);
    cout<<"The top of your queue is : ";
    cout<<q.front()<<endl;
    cout<<"The bottom of your queue is : ";
    cout<<q.back()<<endl;
    cout<<"the size of your queue is : ";
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    cout<<q.size()<<endl;
    cout<<"we are popping in the Queue."<<endl;
    q.pop();

    //we are creating a temp copy of our queue.
    queue<int> temp = q;

    cout<<"we are now printing the Queue : "<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<endl;
        temp.pop();
    }
    cout<<"the new top after popping is : ";
    cout<<q.front()<<endl;
    return 0;
}
*/
