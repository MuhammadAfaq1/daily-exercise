#include <iostream>
using namespace std;


class DynQueue{
private:
struct queueNode
            {
char num;

queueNode *next;
            };
queueNode *front;
queueNode *rear;

public:
int length=0;
DynQueue();
// ~DynQueue();
   void enqueue(char s);
   char dequeue();
   bool isEmpty();
   void displayQueue();
   void makeNull();
};

DynQueue::DynQueue()
{
front = NULL;
   rear = NULL;
}

void DynQueue::enqueue(char s)
{
queueNode *ptr;
ptr = new queueNode;
ptr->num=s;
ptr->next= NULL;
 if (front == NULL)
 {
front = ptr;
rear = front;
   }
   else
{
       rear->next=ptr;
       rear = ptr;
   }
   length++;
}

char DynQueue::dequeue()
{
char a;
queueNode *temp;
   temp = front;
if(front==NULL && rear==NULL)
cout<<"Queue is Empty";
 else
   {
// cout<<"data deleted="<<temp->num;
a=temp->num;
  front = front->next;
     delete temp;
   }
   length--;
   return a;
}

void DynQueue::displayQueue(){
queueNode *temp;
   temp = front;
if(front==NULL && rear==NULL)
cout<<"Queue is Empty";
 else
   {
while(temp!=NULL){
cout<<temp->num<<" ";
  temp = temp->next;
}
   }
   cout<<endl;
}

int main(){
string s; int a=1,b=0;
cout<<"Enter a string: ";
getline(cin,s);
for(int i=0;i<s.length();i++){
if(s[i]==' ')
a++;
}
DynQueue q[a];
for(int i=0;i<s.length();i++){
q[b].enqueue(s[i]);
if(s[i]==' ')
b++;
}
for(int i=0;i<a;i++)
q[i].displayQueue();

for(int i=1;i<a;i++){
b=q[i].length;
for(int j=1;j<=b;j++)
q[0].enqueue(q[i].dequeue());
}

q[0].displayQueue();
return 0;


}
