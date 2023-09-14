#include <iostream>
#include <iomanip>
#include <cfloat>
#include<string>
#include <cmath>

using namespace std;

int main()
{
	system("title Voting Application");
	system("cls");
	system("color 0F");
	int select;
	
	
	
	
	 cout<<"Welcome to the  Voting System."<<endl;
	 cout<<"Enter Identification Number:"<<endl;
	int IndNum=15;
	cin>>IndNum;
	
	
	system("cls");
	system("pause");
    
	  int partyselect,A=0,B=0,C=0;
	  abc:
  
	cout<<"Press 1 to Vote for Candidate A"<<endl;
	cout<<"Press 2 to Vote for Candidate B"<<endl;
	cout<<"Press 3 to Vote for Candidate C"<<endl;
	
	   
 	
   cin>>partyselect;
   switch(partyselect)
   {
   	case 1:
   		cout<<" You voted for Candidate A";
   		A++;
   		break;
   		case 2:
   		cout<<" You voted for Candidate B";
   		B++;
   		break;
   		case 3:
   		cout<<" You voted for Candidate C";
   		C++;
   		break;
   		default:
   			cout<<"You pressed the wrong key"<<endl;
   			goto abc;
   			break;
   }
   system("cls");
   system("pause");
   cout<<" if you want to check the result of this elections then press R. \n otherwise press any key to continue voting\nPress 0 key to exit "<<endl;
   char ch;
   cin>>ch;
   system("cls");
   	system("pause");
   if(ch== 'R')
   {
   	
   	     xyz:
   	cout<<"Enter Adminstrative username = "<<endl;
   	string uname;
   	cin>>uname;
   	cout<<"Enter Adminstrative password ="<<endl;
   	int pass;
   	cin>>pass;
   	if(uname=="Admin" && pass == 7080)
   	{
   	    cout<<" Candidate A has= "<<A;
   	    cout<<" Candidate B has= "<<B;
   	    cout<<" Candidate C has= "<<C;
   if(A>B&& B>C)
   cout<<"A is winning"<<endl;
   else if(B>A && A>=C)
   cout<<"B is winning"<<endl;
   else if(C>A && A>=B)
   cout<<"C is winning"<<endl;
   else
   cout<<"Votes are tied"<<endl;
}
else
{
cout<<"Warning your username or password is incorrect.Retype username and password"<<endl;
goto xyz;

}
}
else
goto abc;

system("pause");
system("cls");
   return 0;
}
