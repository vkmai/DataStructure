#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <isotream>

class CreditCard{
        public:
                CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0);
                std::string getNumber() const {return number;}
                std::string getName() const {return name;}
                double getBalance() const {return balance;}
                int getLimit() const {return limit;}
                
                bool chargelt(double price);
                void makePayment(double payment);
        private:
                std::string name;
                std::string number;
                int limit;
                double balance;
};


#endif
