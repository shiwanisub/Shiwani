#include<iostream>
#include<conio.h>
using namespace std;
class A{
	int a;
		public:
			void geta(){
				cout<<"enter the a:"<<endl;
		cin>>a;
	}
		void displaya(){
			cout<<"the value odf a:"<<a<<endl;
		
		}
		int senda(){
			return a;
		}
				
		
		
};
class B:protected A{
	int c;
	public:
		void getc(){
			cout<<"enter the value of c:"<<endl;
			cin>>c;
		}
		void displayc(){
			cout<<"the value of C;"<<endl;
		}
		void add(){
			cout<<"the add"<<(c+senda())<<endl;
		}
};
int main(){
	B b1;
	b1.geta();
	b1.getc();
	b1.add();
	getch();
	return 0;
}
