//program to demonstrate the concept of Nacked function can be friend of our class

#include<iostream>
using namespace std;

class Demo
{
  public:
          int i;
  private: 
          int j;                // if not declare fun as friend then error : int Demo::j' is private within this context
  protected:
          int k;
  public:
         Demo()
		 {
			 i = 10;
			 j = 20;
			 k = 30;
		 }
		 friend void fun();
};

void fun()
{
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	cout<<obj.k<<"\n";
}
int main()
{
  fun();
return 0;
}
   /*
   output 
      10
      20
      30   
*/