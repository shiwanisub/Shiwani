#include<iostream>
#include<conio.h>
using namespace std;
class A{
	protected:
	  int a;
	  public:
	  	void get_a(){
	  		cout<<"enter the value of a:"<<endl;
	  		cin>>a;
	  		 }
	  		 void display(){
	  		 	cout<<"the value of a is "<<a<<endl;
	  		
			   }
			   int sendvalue(){
			   	return a;
			   }
};
class B:protected A {
	   int b,c;
	   public:
	   	void get(){
	   		cout<<"enter the value of b:"<<endl;
	   		cin>>b;
	   	
		   }
		void display(){
	  		 	cout<<"the value of b is "<<b<<endl;
	  		
			   }  
			   void add(){
			   	cout<<"the addition of a and b is :"<<(b+ sendvalue());
			   } 
};
int main(){
	B b1;
	b1.get_a();
	b1.get();
	b1.A::display();
	b1.B::display();
	b1.add();
	getch();
	return 0;
}
	
	

