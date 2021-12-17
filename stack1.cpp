/*Implement the queue operations in the linked list maintain two pointers ,front pointing to the first node and rear pointing to the last node.
 Demonstate insertion ,deletion and search,display operation in the linked queue.*/
 #include<iostream>
 using namespace std;
 struct NODE{
 	int data;
 	struct NODE* link;
  };typedef struct NODE node;
  class LinkedQueue{
  	node *F, *R;
  	public:
  		LinkedQueue(){
  			F=R=NULL;
		  }
		node* createNode(int x){
			node* t=new node;
			t->data=x;
			t->link=NULL;
			return t;
		}  
		void enqueue(int a){
			node* temp=createNode(a);
			if(F==NULL){
				F=R=temp;
				return;
			}
			else{
				R->link=temp;
				R=temp;
			}
		}
		int dequeue(){
			node* temp=F;
			int x1;
		if(R==NULL){
			cout<<"The Queue is empty";
			return 0;
		}
		else{
			if(F==R){
				x1= temp->data;
				F=NULL;
				R=NULL;
				return x1;
			}
			else{
				x1=temp->data;
				temp=temp->link;
				F=temp;    				
				return x1;
			}
		}	
		}
  };
   
   
   
   
   int main(){
   	LinkedQueue lq;
   	char ch1;
	int  ch2;
	int a1,b1;
   	while(ch1=='y'){
   		cout<<"Enter your choice";
   		cin>>ch1; 
   		
   		
   		
   		
   		
   		switch(ch2){
   			case 1: cout<<"Enter the value to be inserted"<<'\n';
   			        cin>>a1;
			        lq.enqueue(a1);
   			        break;
   			case 2: b1=lq.dequeue();
   			        cout<<'\n'<<"The element deleted from the queue is : "<<b1;
   			        break;
   			        
		   }
		   cout<<"Do you want to enter more";
		   cin>>ch1;
	   }
	   return 0;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /*struct node* front=NULL:
   struct node* rear=NULL:
  void insert(int val){
  	if(rear==NULL){
  		rear=(struct node*)malloc(sizeof(struct node));
  		rear->data=val;
  		rear->link=NULL;
  		}
  		
  } */	
