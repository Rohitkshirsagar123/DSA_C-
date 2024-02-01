#include<iostream>
using namespace std;

class customer
{
    string name;
    int balance ,account_number;

    public:

    customer(string name,int balance,int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }


    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"rs is credited sucessfully \n";
        }
        else{
            throw"enter amount greater than 0 \n";
        }
    }

     void withdraw(int amount){
        if(amount>0 & amount<balance){
            balance+=amount;
            cout<<amount<<"rs is withdraw sucessfully \n";
        }
        else if(amount>balance){
            throw "No Sufficient Balance";
        }
        else{
            throw "enter amount greater than 0 \n";
        }
    }
};


int main(){
    cout<<"Exception Handling"<<endl;
    customer c1("rk",5000,4);
    try{
        c1.deposit(100);
        c1.withdraw(6000);
    }catch(const char *e ){
        cout<<"exception occured: "<<e<<endl;
    }

}