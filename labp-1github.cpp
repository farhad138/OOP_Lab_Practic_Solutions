/*Bank Account Security*/
#include <bits\stdc++.h>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    void setaccountNumber(int accountNumber)
    {
        this->accountNumber =accountNumber;
    }

    void setaccountHolder(string accountHolder)
    {
        this->accountHolder= accountHolder;

    }

    void setbalance(double balance)
    {
        this-> balance=balance;
    }

    int getaccountNumber()
    {
        return accountNumber;
    }

    string getaccountHolder()
    {
        return accountHolder;
    }

    double getbalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount e1;
    e1.setaccountNumber(1);
    e1.setaccountHolder("Fahim");
    e1.setbalance(100);
    cout<<"Account Number:"<<e1.getaccountNumber() <<endl;
    cout<<"Account Holder Name:"<<e1.getaccountHolder() <<endl;
    cout<<"Balance:"<<e1.getbalance() <<endl;
    return 0;
}
