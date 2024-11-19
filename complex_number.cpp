#include<iostream>
using namespace std;

class complex  
{   
    int x;
    private :
    int imag;
    int real;
public:

void setvalue(int a, int b)
 {
  
 real =a;
 imag =b;


 }
  void print ( )
  {
    cout<< real <<" + "<< imag<<"i \n";
  }

complex():real(0), imag(0) {}

complex(int a, int b):real(a), imag(b) {}

complex(const complex&object)
{
    real = object.real;
   imag =  object.imag;
}


complex operator+(complex&object)
{   
    complex res;
     res.imag = imag+object.imag;
     res.real = real + object.real;
    return res;
}


complex  & operator ++()
{  
  
   imag++;
   real++;
   return *this;
}


};


int main ()
{

    complex num_1(9,1), num_2(8,3), num_3;
    num_3 = num_1+num_2;
    num_3.print();
    cout<<" \n";

    ++(++num_3);

     num_3.print();

     

return 0;
}