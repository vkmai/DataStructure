#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal){
        number = no;
        name = nm;
        balance = bal;
        limit = lim;
}

bool CreditCard::chargelt(double price){
        if (price + balance > double (limit))
        {
                return false;
        }
        blance += price;
        return true;
}

void CreditCard::makePayment(double payment)
{
        balance -= payment;
}

osstream& operator<<(osstream& out, const CreditCard& c){
        out<<"Number = " <<c.getNumber() <<"\n"
                << "Name = " << c.getName() <<"\n"
                <<
}
