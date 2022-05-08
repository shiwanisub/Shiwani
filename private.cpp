#include<iostream>
#include<conio.h>
using namespace std;
class A{
	  int a;
	  public:
	  	void get_a(){
	  		cout<<"enter the value of a:"<<endl;
	  		cin>>a;
	  		 }
	  		 void display_a(){
	  		 	cout<<"the value of a is "<<a<<endl;
	  		
			   }
			   int sendvalue(){ 
			   	return a;
			   }
};
class B:private A {
	   int b;
	   public:
	   	void get(){
	   		get_a();
	   		cout<<"enter the value of b:"<<endl;
	   		cin>>b;
	   	
		   }
		void display(){
			display_a();
			
	  		 	cout<<"the value of b is "<<b<<endl;
	  		
			   }  
			   void add(){
			   	cout<<"the multiplication of a and b is :"<<(b *sendvalue());
			   } 
};
int main(){
	B b1;
	b1.get();
	b1.display();
	b1.add();
	getch();
	return 0;
}
	
	

