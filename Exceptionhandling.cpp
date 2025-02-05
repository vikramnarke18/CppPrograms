#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
  
  try{
      
    int a=5;
    int b=0;
    
    if (b==0)
    {
        throw invalid_argument("Number cannot be 0");
        
    }
    
    int result;
    result=a/b;
    
    
  }
  catch(exception &e)
  {
      cout<<e.what();
      
  }
  
  return 0;
}