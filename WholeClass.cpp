//program to demonstrate the concept of whole class can be friend of our class

#include<iostream>
using namespace std;

class Hello
{
	public:
	     
		 void gun();
};
class Demo
{
  public:
          int i;
  private: 
          int j;
  protected:
          int k;
  public:
         Demo()
		 {
			 i = 10;
			 j = 20;
			 k = 30;
		 }
		 
		 friend class Hello;

};

 void Hello::gun()
 {
	 Demo obj;
	 cout<<obj.i<<"\n";
	 cout<<obj.j<<"\n";
	 cout<<obj.k<<"\n";
 }
int main()
{
   Hello hobj;
   hobj.gun();
return 0;
}

/*
output 
10
20
30
*/