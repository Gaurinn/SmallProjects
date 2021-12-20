#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
using namespace std;



class BankAccount
{
    private:
        string name;
        int number;
        double balance;
        double intRate;

    public:

        BankAccount();

//        getPrivateInfo();

        void readData();
        void update();
        int getNumber();
        bool withdraw(double withdrawAmount);

        friend ostream& operator << (ostream& outs, const BankAccount& b);



};

#endif // BANKACCOUNT_H
