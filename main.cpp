#include<iostream>
#include<string.h>
#include"bankaccount.h"
using namespace std;
int main()
{
    BankAccount myacc;
    myacc.setcurrentBalance(800000);/*Null constructor call*/
    myacc.Deposit(500);
    myacc.Display();
    cout <<endl;
    BankAccount cat(3456,"jam",200000);/*parameterized constructor call*/
    cat.Withdraw(1000);
    cat.Display();
    cout <<endl;
    BankAccount jam(cat);/*copy constructor call*/
    jam.Display();
    cout <<endl;
}
