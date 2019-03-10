#ifndef MATRIX__H_INCLUDED
#define MATRIX__H_INCLUDED
#include<iostream>
#include<string>

class Matrix
{
    public:
        friend::std::ostream&operator<<(std::ostream&,const Matrix&);
        friend::std::istream&operator>>(std::istream&,Matrix);

    private:
        std::string firstRow;
        std::string secondRow;
        std::string thirdRow;
};



#endif // MATRIX__H_INCLUDED
