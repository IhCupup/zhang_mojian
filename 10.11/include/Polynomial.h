#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include<iostream>

class Polynomial
{
    friend std::istream &operator>>(std::istream&,Polynomial&);
    friend std::ostream &operator<<(std::ostream&,const Polynomial&);

    friend Polynomial operator+(const Polynomial&,const Polynomial&);
    friend Polynomial operator-(const Polynomial&,const Polynomial&);
    friend Polynomial operator=(const Polynomial&,const Polynomial&);
    friend Polynomial operator*(const Polynomial&,const Polynomial&);
    friend Polynomial operator+=(const Polynomial&,const Polynomial&);
    friend Polynomial operator-=(const Polynomial&,const Polynomial&);
    friend Polynomial operator*=(const Polynomial&,const Polynomial&);


    public:
        Polynomial();
        Polynomial(double coefs[], int exps[], int size);
        Polynomial(const Polynomial&);
        ~Polynomial();
        Polynomial& operator=(const Polynomial&);



        int degree() const;
        double evaluate(double x) const;
        bool operator==(const Polynomial&);
        bool operator!=(const Polynomial&right )const
        {
            return!(*this=right);
        }

        Polynomial operator+(const Polynomial&) const;
        Polynomial operator-(const Polynomial&) const;
        Polynomial operator=(const Polynomial&) const;
        Polynomial operator*(const Polynomial&) const;
        Polynomial operator+=(const Polynomial&) const;
        Polynomial operator-=(const Polynomial&) const;
        Polynomial operator*=(const Polynomial&) const;
}
        int Polynomial::add(const Polynomial&, double *coefs, int *exps) const
        { int count=0,i=0,j=0;
        while (i<num_of_items && j<p.num_of_items)
             { if (pexps[i] == p.pexps[j])
                 { if (pcoefs[i] != -p.pcoefs[j])
                    { coefs[count] = pcoefs[i] + p.pcoefs[j];
                      exps[count] = pexps[i];
                      count++;
                    }
                    i++; j++;
                  }
                else if (pexps[i] < p.pexps[j])
                 { coefs[count] = pcoefs[i];
                   exps[count] = pexps[i];
                   count++; i++;
                 }
                 else
                 { coefs[count] = p.pcoefs[j];
                   exps[count] = p.pexps[j];
                   count++; j++;
                 }
            }
                if (i<num_of_items)
                   while (i<num_of_items)
                  { coefs[count] = pcoefs[i];
                    exps[count] = pexps[i];
                    count++; i++;
                  }
                   else
                  while (j<p.num_of_items)
                  { coefs[count] = p.pcoefs[j];
                    exps[count] = p.pexps[j];
                    count++; j++;
                   }
                 return count;
           int Polynomial::subtract(const Polynomial &p, double *coefs, int *exps) const
               { int count=0,i=0,j=0;
while (i<num_of_items && j<p.num_of_items)
{ if (pexps[i] == p.pexps[j])
{ if (pcoefs[i] != p.pcoefs[j])
{ coefs[count] = pcoefs[i] - p.pcoefs[j];
exps[count] = pexps[i];
count++;
}
i++; j++;
}
else if (pexps[i] < p.pexps[j])
{ coefs[count] = pcoefs[i];
exps[count] = pexps[i];
count++; i++;
}
else
{ coefs[count] = -p.pcoefs[j];
exps[count] = p.pexps[j];
count++; j++;
}
}
if (i<num_of_items)
while (i<num_of_items)
{ coefs[count] = pcoefs[i];
exps[count] = pexps[i];
count++; i++;
}
else
while (j<p.num_of_items)
{ coefs[count] = -p.pcoefs[j];
exps[count] = p.pexps[j];
count++; j++;
}
return count;
}
                   Polynomial::Polynomial()
                   { pcoefs=NULL;
                     pexps=NULL;
                     num_of_items=0;
                   }
           Polynomial::Polynomial(double coefs[], int exps[], int size)
                { num_of_items=size;
                  pcoefs=new double[num_of_items];
                  pexps=new int[num_of_items];
                  int i;
            for (i=0; i<num_of_items; i++)
              { pcoefs[i]=coefs[i];
                pexps[i]=exps[i];
              }
            for (i=num_of_items; i>1; i--)
              { bool exchange=false;
                for (int j=1; j<i; j++)
              { if (pexps[j] < pexps[j-1])
                { int temp1=pexps[j];
                  pexps[j] = pexps[j-1];
                  pexps[j-1] = temp1;
                  double temp2 = pcoefs[j];
                  pcoefs[j] = pcoefs[j-1];
                  pcoefs[j-1] = temp2;
                  exchange = true;
                }
                }
             if (!exchange) break;
              }
              }
             Polynomial::Polynomial(const Polynomial &p)
             { num_of_items=p.num_of_items;
              pcoefs=new double[num_of_items];
              pexps=new int[num_of_items];
               for (int i=0; i<num_of_items; i++)
                 { pcoefs[i]=p.pcoefs[i];
                   pexps[i]=p.pexps[i];
                 }
                 }
             Polynomial::~Polynomial()
             { delete []pcoefs;
               delete []pexps;
               pcoefs=NULL;
               pexps=NULL;
               num_of_items=0;
             }



Polynomial& Polynomial::operator=(const Polynomial &p)
{ delete []pcoefs;
delete []pexps;
num_of_items=p.num_of_items;
pcoefs=new double[num_of_items];
pexps=new int[num_of_items];
for (int i=0; i<num_of_items; i++)
{ pcoefs[i]=p.pcoefs[i];
pexps[i]=p.pexps[i];
}
return *this;
}
int Polynomial::degree() const
{ if (num_of_items == 0)
return 0;
else
return pexps[num_of_items-1];
}
double Polynomial::evaluate(double x) const
{ double sum=0;
for (int i=0; i<num_of_items; i++)
{ double temp=pcoefs[i];
for (int j=0; j<pexps[i]; j++)
temp *= x;
sum += temp;
}
return sum;
}
bool Polynomial::operator==(const Polynomial &p) const
{ if (num_of_items != p.num_of_items) return false;
for (int i=0; i<num_of_items; i++)
if (pcoefs[i]!=p.pcoefs[i] || pexps[i]!=p.pexps[i])
return false;
return true;
}
bool Polynomial::operator!=(const Polynomial &p) const
{ return !(*this == p);
}
Polynomial Polynomial::operator+(const Polynomial &p) const
{ double *coefs=new double[num_of_items+p.num_of_items];
int *exps=new int[num_of_items+p.num_of_items];
int count=add(p,coefs,exps);
Polynomial temp(coefs, exps, count);
delete []coefs;
delete []exps;
return temp;
}
Polynomial Polynomial::operator-(const Polynomial &p) const
{ double *coefs=new double[num_of_items+p.num_of_items];
int *exps=new int[num_of_items+p.num_of_items];
int count=subtract(p,coefs,exps);
Polynomial temp(coefs, exps, count);
delete []coefs;
delete []exps;
return temp;
}
Polynomial Polynomial::operator*(const Polynomial &p) const
{ Polynomial sum,temp=*this;
for (int i=0; i<p.num_of_items; i++)
{ for (int j=0; j<num_of_items; j++)
{ temp.pcoefs[j] = pcoefs[j] * p.pcoefs[i];
temp.pexps[j] = pexps[j] + p.pexps[i];
}
sum += temp;
}
return sum;
}
Polynomial &Polynomial::operator+=(const Polynomial &p)
{ double *coefs=new double[num_of_items+p.num_of_items];
int *exps=new int[num_of_items+p.num_of_items];
int count=add(p,coefs,exps);
delete []pcoefs;
delete []pexps;
pcoefs = coefs;
pexps = exps;
num_of_items = count;
return *this;
}
Polynomial &Polynomial::operator-=(const Polynomial &p)
{ double *coefs=new double[num_of_items+p.num_of_items];
int *exps=new int[num_of_items+p.num_of_items];
int count=subtract(p,coefs,exps);
delete []pcoefs;
delete []pexps;
pcoefs = coefs;
pexps = exps;
num_of_items = count;
return *this;
}
Polynomial &Polynomial::operator*=(const Polynomial &p)
{ Polynomial sum,temp=*this;
for (int i=0; i<p.num_of_items; i++)
{ for (int j=0; j<num_of_items; j++)
{ temp.pcoefs[j] = pcoefs[j] * p.pcoefs[i];
temp.pexps[j] = pexps[j] + p.pexps[i];
}
sum += temp;
}
*this = sum;
return *this;
}


#endif // POLYNOMIAL_H
