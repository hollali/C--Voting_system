#include <iostream>
#include <iomanip>
#include <cfloat>
#include<string>
#include <cmath>

using namespace std;

int main()
{
	 cout<<"Welcome to the Nigerian People's Party Voting System."<<endl;
	 cout<<"Enter Identification Number:"<<endl;
	int IndNum=20;
	cin>>IndNum;
	

	  int partyselect,A=0,B=0,C=0;
	  abc:
  
	cout<<"Press 1 to Vote for Candidate A"<<endl;
	cout<<"Press 2 to Vote for Candidate B"<<endl;
	cout<<"Press 3 to Vote for Candidate C"<<endl;
	   

 	
 	
 	
   cin>>partyselect;
   switch(partyselect)
   {
   	case 1:
   		cout<<"Vote for Candidate A";
   		A++;
   		break;
   		case 2:
   		cout<<"Vote for Candidate B";
   		B++;
   		break;
   		case 3:
   		cout<<"Vote for Candidate C";
   		C++;
   		break;
   		default:
   			cout<<"You pressed the wrong key"<<endl;
   			goto abc;
   }
   cout<<" if you want to check the result of this elections then press R. \n otherwise press any key to continue voting\nPress any key to exit "<<endl;
   char ch;
   cin>>ch;
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
   	    cout<<"Vote for Candidate A is in this voting station="<<A;
   	    cout<<"Vote for Candidate B is in this voting station="<<B;
   	    cout<<"Vote for Candidate C is in this voting station="<<C;
   if(A>B&& B>C)
   cout<<"A is winning";
   else if(B>A && A>=C)
   cout<<"B is winning";
   else if(C>A && A>=B)
   cout<<"C is winning";
   else
   cout<<"Votes are tied";
}
else
{
cout<<"Warning your username or password is incorrect.Retype username and password"<<endl;
goto xyz;

}
}
else
goto abc;


   return 0;
}
