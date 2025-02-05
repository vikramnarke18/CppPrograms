// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <typename T>
T print(T x)
{
    cout<<"Value="<<x<<endl;
    return x;
}

int main() {
    // Write C++ code here
   print(2);
   print(2.5);
   print("Vikram");

    return 0;
}