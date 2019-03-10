#include<iomainp>
#include "Matrix.h"
using namespace std;

ostream &operator<<(ostream &output,const Matrix &number)
{
  output <<"{" <<number.firstRow<<"}"
     <<"\n"<<"{"<<number.secondRow<<"}"
     <<"\n"<<"{"<<number.thirdRow<<"}";
  return output;
}

istream &operator>>(istream &input,Matrix &number)
{
  input.ignore();
  input>> setw(3)>>number.firstRow;
  input.ignore();
  input>>setw(3)>>number.secondRow;
  input.ignore();
  input>>setw(3)>>number.thirdRow;
  return input;
}
