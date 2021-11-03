#include<iostream>
using namespace std;
/** ALL the fuction of the program
    1. check balance
    2. deposit
    3. withdraw money
    4. show mwnu
    5. transfer money**/
void account(){
    cout<<"Select the bank account"<<endl;
    cout<<"A. Account one"<<endl;
    cout<<"B. Account two"<<endl;
    
    
}
void menu(){
    cout<<"************MENU************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
}
int main(){
    char aac;
    account;
    cin>>aac;

    int option;
    float balance=1000;
    if (aac=='A')
    {
      do{ 
    menu();
    cout<<"Option: ";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"The Avaiable balace in your account is: Rs "<<balance<<endl;
        break;
    case 2:
        cout<<"Enter Amount to be deposited ";
        float deposit;
        cin>>deposit;
        balance+=deposit;
        break;
    case 3:
        cout<<"Enter the amount to be withdraw ";
        float withdraw;
        cin>>withdraw;
        if (withdraw>balance)
        {
            cout<<"Insufficant Funds"<<endl;
        }
        else{
            balance-=withdraw;
        }
        break;

    
    
    }
    }while(option!=4);
      
    }
    else {
    do{ 
    menu();
    cout<<"Option: ";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"The Avaiable balace in your account is: Rs "<<balance<<endl;
        break;
    case 2:
        cout<<"Enter Amount to be deposited ";
        float deposit;
        cin>>deposit;
        balance+=deposit;
        break;
    case 3:
        cout<<"Enter the amount to be withdraw ";
        float withdraw;
        cin>>withdraw;
        if (withdraw>balance)
        {
            cout<<"Insufficant Funds"<<endl;
        }
        else{
            balance-=withdraw;
        }
        break;

    
    
    }
    }while(option!=4);}
    
    
    
    


return 0;
}