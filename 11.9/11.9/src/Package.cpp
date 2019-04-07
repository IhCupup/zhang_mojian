#include<iostream>
#include<stdexcept>
#include "Package.h"
using namespace std;

Package::Package(const string&sender, const string&recevie,const string&address,
                 const string&pc,double weight,double price)
{
    senderName=sender;
    receiverName=recevie;
    Address=address;
    postalcode=pc;
    setWeight(weight);
    setPrice(price);
}

void Package::setSenderName(const string&sender)
{
    senderName=sender;
}

string Package::getSenderName()const
{
    return senderName;
}

void Package::setReceiverName(const string&receive)
{
   receiverName=receive;
}

string Package::getReceiverName()const
{
    return receiverName;
}

void Package::setAddress(const string&address)
{
    Address=address;
}

string Package::getAddress()const
{
    return Address;
}

void Package::setPostalCode(const string&pc)
{
    postalcode=pc;
}

string Package::getPostalCode()const
{
    return postalcode;
}

void Package::setWeight(double weights)
{
    if (weights>=0.0)
        weight=weights;
    else
        throw
        invalid_argument("weight must be >=0.0");
}

double Package::getWeight() const
{
    return weight;
}

void Package::setPrice(double prices)
{
    if (prices>=0.0)
        price=prices;
    else
        throw invalid_argument("price must be>=0.0");
}

double Package::getPrice()const
{
    return price;
}

double Package::GrossPrice()const
{
    return weight*price;
}

void Package::print()const
{
    cout<<"SenderName:"<<senderName<<"\nReceiveName:"<<receiverName
    <<"\nThe address is:"<<Address<<"\nPostalcode:"<<postalcode
    <<"\nThe weight is:"<<weight<<"\nThe price is:"<<price;
}

