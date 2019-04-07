#include <iostream>
#include <iomanip>
#include "Package.h"

using namespace std;

int main()
{
    Package package("张秣翦","张秣翦","山东省青岛市黄岛区辛安街道579山东科技大学",
            "266000",5,10);

     cout<<fixed<<setprecision(2);

     cout<<"SenderName:"<<package.getSenderName()<<"\nReceiveName:"
        <<package.getSenderName()<<"\nThe address is:"<<package.getAddress()
        <<"\nPostalcode:"<<package.getPostalCode()<<"\nThe weight is:"<<
        package.getWeight()<<"\nThe price is:"<<package.getPrice()<<endl;

     package.setWeight(5);
     package.setPrice(10);

     cout<<"\nUpdated package information output by print function:\n"<<endl;
     package.print();

     cout<<"\n\nPackage gross price is:$"<<package.GrossPrice()<<endl;
}
