#include <iostream>
#include <windows.h>  //for sound and color
using namespace std; 
int main()
{
	int amount,pin=0,balance,a,c;
	cout<<"\n****** Welcome to Team 007 ATM  ****** \n";
	account:
	cout<<"\nEnter Your Pin Code: ";
	cin>>pin;
	if(pin==4423)    //1st Account
	{
		Beep(523,500);
		 cout << "\nPin Approved!\n";
	 cout << "\n\t************************************";
    cout << "\n\t*    Welcome Raja Zia Un Nabi      *";
    switch_account:
    cout << "\n\t*     1. Deposit                   *";
    cout << "\n\t*     2. Withdraw                  *";
    cout << "\n\t*     3. Check Balance             *";
    cout << "\n\t*     4. Switch Another Account    *";
    cout << "\n\t*     5. Exit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
    system("Color 0A"); 
    back_menu:    //recall the case
    	cout << "\nSelect a Number: ";
		cin>>c;
		switch(c)
		{
		case 1:
		cout<<"Enter your Deposit Amount:  ";
		cin>>a;
		balance=a+amount;
		cout<<"Your New Balance is: "<<balance;
		goto back_menu;   //for goto previous option
		break;
		case 2:
		cout<<"Enter your Withdraw Amount:  ";
		cin>>a;
		amount=balance-a;
		if(a>balance)
		{
			cout<<"Account is Out of Balance.";
			goto back_menu;
		}
		else
		{
			cout<<"Your New Balance is:"<<balance;
			goto back_menu;
		}
		break;
		case 3:
			cout<<"Your Balance is : "<<balance;
			goto back_menu;
			break;
		case 4:
			goto account;
		case 5:
			cout<<"\n\t****** Thank You!!! ******";
			break;
		default:
				cout<<"Invalid Option";
				goto back_menu;
				
		}	
		
}
     else if(pin==1234)   //2nd Account
     {
     	Beep(523,500);
     	cout << "\nPin Approved!\n";
	 cout << "\n\t************************************";
    cout << "\n\t*    Welcome Talha Shah            *";
     	goto switch_account;  //recall to another account
	 }
	 else if(pin==5555)   //3rd Account
     {
     	Beep(523,500);
     	cout << "\nPin Approved!\n";
	 cout << "\n\t************************************";
    cout << "\n\t*    Welcome M.Muneeb              *";
     	goto switch_account;
	 }
     
	else
	{
	cout<<"Invalid Pin";
	goto account;
	}
	system("Color 04"); 
	Beep(300,400);
	return 0;
}
