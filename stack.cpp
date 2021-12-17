/*design a stack whose size is defined by a global constant push a sequence of elements
 reading them from an array and checking for the overflow condition
 remove a set of element from the stack the count of which is to be taken as an input
 display the element at the top of the stack also make provisions for single push and single pop
 write a menu driven program to implement the above
*/
#include<iostream>
using namespace std;
int size=5;
class stack{
	private:
	int s[40],top;
	public:
		stack(){
			top=-1;
		}
	void singlepush(int x1){
		if(top>=size){
			cout<<"The stack is full"<<'\n';
		}
		else{
			top++;
			s[top]=x1;
		}
	}
	void singlepop(){
		int y1;
		if(top<=-1){
			cout<<"The stack is empty"<<'\n';
		}
		else{
			y1=s[top];
			top--;
			cout<<"The popped element is :"<<y1;
		}
	}
	void multipush(int x2[40],int s1){
		for(int i=0;i<s1;i++){
	     		if(top>=size){
	     			cout<<"The stack is full"<<'\n';
	     			break;
				 }
				 else{
				 top++;
				 s[top]=x2[i];
				 }
		}
	}
	void multipop(int s2){
		int y2;
		for(int i=0;i<s2;i++){
			if(top<=-1){
				cout<<"End of Stack..."<<'\n';
				break;
			}
			else{
			y2=s[top];
			top--;
			cout<<"The element popped is :"<<y2;
			cout<<'\n';	
			}
		}
	}
	void peek(){
		if(top<=-1){
			cout<<"Stack is empty"<<'\n';
		}
		else{
			cout<<"The elements of the stack are : "<<'\n';
			for(int i=top;i>=0;i--){
				cout<<s[i]<<'\n';
		}
		}
	}
};
int main(){
	int c1;
	stack st;
	char c2;
	int a1,a2[40];
	int size1,size2,size3;
	size3=::size;
	int c=0;
	do{
		cout<<"Enter your option "<<'\n'<<"1.Single Push"<<'\n'<<"2.Single Pop"<<'\n'<<"3.Multi Push"<<'\n'<<"4.Multi Pop"<<'\n'<<"5.Peek"<<'\n'<<"6.Exit"<<'\n';
        cout<<'\n';
		cin>>c1;
     	switch(c1){
     		case 1:if(size3>0){
			       cout<<"Enter the number to be pushed : "<<'\n';
     		       cin>>a1;
     		       st.singlepush(a1);
     		       size3--;
     		       if(size3<0){
			  	   label:
                   cout<<"The stack has become full"<<'\n';
                   goto label2;
			       }
     		       }
				   else{
				   cout<<"Push operation not available"<<'\n';
				    break;
				   }
				    break;
     		case 2:st.singlepop();
			       break;
			case 3:if(size3>0){
			       cout<<"Enter the size of the array : "<<'\n';
			       cin>>size1;
			       cout<<"Enter the elements of the array"<<'\n';
				   for(int i=0;i<size1;i++){
				   cin>>a2[i];
				   size3--;
				   if(size3<=0){
				   	goto label;
	               }
				   }
				   label2:	       
				   st.multipush(a2,size1);
			       }
			       else{
				   cout<<"Push operation not available"<<'\n';
				    break;
				   }
				   break;
			case 4:cout<<"Enter the number of elements to be popped"<<'\n';
			       cin>>size2;
			       st.multipop(size2);
				   break;
			case 5:st.peek();
			       break;
			case 6:cout<<"Ending-----";
			       return 0;       
			 }
   	cout<<'\n'<<"Do you want to operate the stack again : yes(y)/no(n)"<<'\n';
	cin>>c2;	 
	}while(c2=='y');
	return 0;
}
