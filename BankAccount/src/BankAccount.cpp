#include "BankAccount.h"

BankAccount::BankAccount()
{
    //basic creator



}


void BankAccount::readData(){

    cin >> name;
    cin >> number;
    cin >> balance;
    cin >> intRate;

}

void BankAccount::update(){

    double temp = (intRate / 100) + 1;

    balance = balance * temp;
}
int BankAccount::getNumber(){

    return number;


}


bool BankAccount::withdraw(double withdrawAmount){

    balance = balance - withdrawAmount;

    if(balance <= 0){
            balance = balance + withdrawAmount;
        return false;
    }
    else {

    return true;
    }



}

ostream& operator << (ostream& outs, const BankAccount& b) {
    //operator overloading, making it possible to use cout << on a BankAccount variable
    outs << "Customer name: " << b.name << endl;
    outs << "Customer number: " << b.number << endl;
    outs << "Balance: " << b.balance << endl;
    outs << "Interest rate: " << b.intRate << endl;
    return outs;
}


