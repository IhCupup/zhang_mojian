#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package
{
    public:
        Package(const std::string &, const std::string &, const std::string&,
                const std::string&,double=0.0,double=0.0);

        void setSenderName(const std::string&);
        std::string getSenderName()const;

        void setReceiverName(const std::string&);
        std::string getReceiverName()const;

        void setAddress(const std::string&);
        std::string getAddress()const;

        void setPostalCode(const std::string&);
        std::string getPostalCode()const;

        void setWeight(double);
        double getWeight()const;

        void setPrice(double);
        double getPrice()const;

        double GrossPrice()const ;
        void print()const;

    private:
        std::string senderName;
        std::string receiverName;
        std::string Address;
        std::string postalcode;
        double weight;
        double price;
};

#endif // PACKAGE_H
