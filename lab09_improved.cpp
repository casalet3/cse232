#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include <cmath>
using std::sqrt;
using std::pow;
using std::to_string;
#include "math_vector.hpp"

string vec_to_str(const MathVector& v){
    //string s;
    //s = to_string(v.x);
    //s += (":");
    //string z = to_string(v.y);
    
    return to_string(v.x)+ ":"+to_string(v.y);
}

MathVector MathVector::add(const MathVector& v){
    x = x+v.x;
    y = y+v.y;
    return MathVector(x,y);
}

MathVector MathVector::mult(const int& a){
    x = x*a;
    y = y*a;
    return MathVector(x,y);
}

int MathVector::mult(const MathVector& v){
    x = x*v.x;
    y = y*v.y;
    return x+y;
}

double MathVector::magnitude(){
    return sqrt(pow(x,2) + pow(y,2));
}

int main (){
  
  MathVector v1;
  MathVector v2(3,2);
  MathVector v3(10,12);

  std::cout << "V1:" << vec_to_str(v1) 
       	    << ", V2:" << vec_to_str(v2) 
            << ", V3:" << vec_to_str(v3) 
            << std::endl;


  MathVector add_result = v1.add(v2);
  std::cout << "Sum of v1 and v2 is: " << vec_to_str(add_result) << std::endl;
  MathVector add_result2 = v2.add(v3);
  std::cout << "Sum of v2 and v3 is: " << vec_to_str(add_result2) << std::endl;

  int scalar = 20;
  MathVector mult_result = v2.mult(scalar);
  std::cout << "mult of v2 and " << scalar << " is: " << vec_to_str(mult_result) << std::endl;

  int result = v1.mult(v2);
  std::cout << "mult of v1 and v2 is: " << result << std::endl;

  int result2 = v2.mult(v3);
  std::cout << "mult of v2 and v3 is: " << result2 << std::endl;
  
  double dbl_result = v2.magnitude();
  std::cout << "magnitude of v2 is: " << dbl_result << std::endl;  
}