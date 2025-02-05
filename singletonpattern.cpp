#include <iostream>
using namespace std;

class test{
    private:
    static int objcount;
    test(){
       cout<<"private constructor"; 
    }
    
   public:
   
   static test* getinstance()
   {
       if (objcount==0)
          return NULL;
          objcount++;
       return new test();
   }

};
 int test::objcount=0;

int main() {
    
  test *p= test::getinstance();

  delete p;
    return 0;
}