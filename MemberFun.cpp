//program to demonstrate the concept of member function of a class is a friend of our class
/*steps 
1:declare class (Hello)
2:in demo class tell friend function of Hello class
3:define function of Hello class
4: in that function call private member of Demo class
*/
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
		 
		 friend void Hello::gun();

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