#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<random>
#include<cstdio>
using namespace std;
class user
{
 int phone;
 int m,d,t,h,n,seatno,ti;
 int date,year,month;
 char sname,seatname;
 char name[20],pass1[20],pass2[20];

 public:
 void getdata();
 void search();
 void app();
 void movie();
 void admin();
 void display();
 void finalticket(int ti,int m,int d,int t,int h,int n);
 char* getname()
  {
    return name;
  }
 char* getpass()
 {
   return pass1;
 }
 int gettno()
 {
   return ti;
 }
}us1,us;
int main();
void user::getdata()
{
     system("cls");
     cout<<"          WELCOME NEW USER\n";
     cout<<"     Register To Access The APP \n";
     cout<<"Name(your username):";
     gets(name);
     cout<<"\n";
     cout<<"Enter Your date of birth \n";
     cout<<"DATE:";
   do
   {
   cin>>date;
   if(date>31)
    {
     cout<<"Enter Again";
     cout<<"\n";
    }
   }while(date>31);
   cout<<"\n";
   cout<<"MONTH:";
   do
   {
   cin>>month;
   if(month>12)
    {
     cout<<"Enter Again";
     cout<<"\n";
    }
   }while(month>12);
   cout<<"\n";
   cout<<"YEAR:";
  do
   {
   cin>>year;
   if(year>2018 || year<1930)
    {
     cout<<"Enter Again";
     cout<<"\n";
    }
   }while(year>2018 || year<1930);

    char f='n';
  do
  {
   cout<<"Enter Password :";
   cin>>pass1;
   cout<<"\nConfirm Passwors :";
   cin>>pass2;

    if(strcmp(pass1,pass2)==0)
     {
       cout<<"Successfully Registered\n";
       f='n';
     }
    else
     {
      cout<<"Password Not Matched!!!\n";
      f='y';
     }
   }while(f=='y' || f=='Y');
}
void user::movie()
{
  system("cls");
  cout<<"                    WELCOME\n";
  cout<<"\n   You Have Been Successfully Registered Now You Can SeLect Movie\n";
  cout<<"\n";
  cout<<"Enter Ticket No. :";
  cin>>ti;
  do
  {
  cout<<"                 Select Movie  \n";
  cout<<"1)movie 1\n"
      <<"2)movie 2\n"
      <<"3)movie 3\n";
  cin>>m;
  cout<<"You Have Selected-\n ";
  switch(m)
   { case 1:cout<<"movie 1";
	   break;
     case 2:cout<<"movie 2";
	   break;
     case 3:cout<<"movie 3";
	   break;
   default:cout<<"select again" ;
	    cout<<"\n";

   }
  }while(m>3);
   cout<<"\n";

    do
    {

    cout<<"Select Days \n";
    cout<<"1)Monday\n";
    cout<<"2)Tuesday\n";
    cout<<"3)Wednesday\n";
    cout<<"4)Thursday\n";
    cout<<"5)Friday\n";
    cout<<"6)Saturday\n";
    cout<<"7)Sunday\n";
    cin>>d;
    cout<<"You Have Selected- ";
    switch(d)
    {case 1:cout<<"Monday";
	  break;
     case 2:cout<<"Tuesday";
	  break;
     case 3:cout<<"Wednesday";
	  break;
     case 4:cout<<"Thursday";
	  break;
     case 5:cout<<"Friday";
	  break;
     case 6:cout<<"Saturday";
	  break;
     case 7:cout<<"Sunday";
	  break;
     }
  }while(d>7);
  cout<<"\n";
  do
  {
  cout<<"Timmings-\n";
  cout<<"1)9:30 AM\n";
  cout<<"2)1:30 PM\n";
  cout<<"3)7:30 PM\n";
  cout<<"4)9:45 PM\n";
  cout<<"you have selected:";
  cin>>t;
  switch(t)
   {case 1:cout<<" 9:30";
	  break;
    case 2:cout<<" 1:30";
	  break;
    case 3:cout<<" 7:30";
	  break;
    case 4:cout<<" 9:45";
	  break;
    default:cout<<"Timming Not Available";
	   cout<<"\n";

   }
  }while(t>4);
  do
  {
  cout<<"\n";
  cout<<"Available Halls Are-\n";
  cout<<"1)IMAX 3D\n";
  cout<<"2)NORMAL 3D\n";
  cout<<"3)NORMAL\nselect any one";
  cin>>h;

  cout<<"you have selected:";
  switch(h)
  {
    case 1:cout<<"1)IMAX 3D\n";
	   break;
    case 2:cout<<"2)NORMAL 3D\n";
	   break;
    case 3:cout<<"3)NORMAL";
	   break;
    default:cout<<"Wrong choice!!";
   }
  }while(h>3);

  int i,j,flag,sea1[100][100];
  system("cls");
  seatno=1;
  sname='A';
  seatname='A';
  cout<<"                           Screen this way\n";
  for(i=0;i<6;i++)
     {
	cout<<"                  ";
	cout<<sname;
	(char)sname++;
	cout<<"    ";
	for(j=0;j<6;j++)
	   {
	     sea1[i][j]=seatno++;
	     cout<<sea1[i][j];
	     cout<<"  ";
	    }
	cout<<"\n";
     }
  cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
  flag=0;

  cout<<"                  enter the seat number you want to book";
  cout<<"\n"<<"                  ";
  cin>>n;
  for(i=0;i<6;i++)
     {
       for(j=0;j<6;j++)
	   {
	    if(sea1[i][j]==n)
	      {
		flag++;
		break;
	      }
	    }
     }
  if(flag==1)
    {
      for(i=0;i<6;i++)
	 {
	  for(j=0;j<6;j++)
	     {
	      if(sea1[i][j]==n)
		{
		  sea1[i][j]=0;
		  break;
		}
	     }
	 }
      }
	cout<<"                            Screen This Way \n";
	for(i=0;i<6;i++)
	   {
		cout<<"                  ";
		cout<<seatname;
		(char)seatname++;
		cout<<"    ";
		for(j=0;j<6;j++)
		   {
		      cout<<sea1[i][j];
		       cout<<"  ";
		   }
		cout<<"\n";
	   }
	cout<<" your booking for seat number"<<" "<<n<<" "<<"is done\n";

   system("cls");
 cout<<"the amount is\n";
 switch(h)
 { case 1:cout<<"rs 300(with/without snacks)\n";
	  break;
   case 2:cout<<"rs 250(with/without snacks)\n";
	  break;
   case 3:cout<<"rs 200(with/without snacks)\n";
	  break;
 }

   cout<<" enter the captcha to confirm\n";
  int c1,c2,at;
  do
  {
    //randomize();
   c1=rand()%9001+1000;
   cout<<"\n"<<c1<<"\n";
   cout<<"captcha here\n";
   cin>>c2;
   if(c2==c1)
     {
	  system("cls");
	  cout<<"             welcome to ezipay\n";
	  cout<<"            choose to pay through\n";
	  cout<<"              1)NET BANKING\n"
	      <<"              2)PAYTM\n"
	      <<"              3)CREDIT CARD/DEBIT CARD\n"
	      <<"              4)UPI APP(any)\n";
	  do
	   {

	      cin>>at;
	      switch(at)
	      {
	       case 1:cout<<"amount paid\n";
		     break;
	       case 2:cout<<"amount paid\n";
		  break;
	       case 3:cout<<"amount paid\n";
		  break;
	       case 4:cout<<"amount paid\n";
		  break;
	       default:cout<<"enter a correct option!!!\n";

	       }
	   }while(at>4);
     }
   else
     {
       cout<<"\n";
       cout<<"wrong!!!";
       cout<<"retry\n";
     }
   }while(c1!=c2);

   int c;
   cout<<"Press 1 to see the ticket or 2 Exit";
   cin>>c;
   if(c==1)
    {
      finalticket(ti,m,d,t,h,n);
    }
   else
    {
      cout<<"\nThanks for booking";
    }

   int d;
   cout<<"Press 1 for main menu or 2 for exit";
   cin>>d;
   if(d==1)
   {
      main();
   }
   else
   {
     exit(0);
   }
}
void user::finalticket(int ti,int m,int d,int t,int h,int n)
{
   system("cls");
   int mn;
 cout<<"           THE TICKET\n";
 cout<<"TICKET NO:"<<ti<<"\n";
 cout<<"MOVIE:";
 switch(m)
 { case 1:cout<<"movie 1\n";
	  break;
   case 2:cout<<"movie 2\n";
	  break;
   case 3:cout<<"movie 3\n";
	  break;
 }
 cout<<"TIME:";
  switch(t)
 { case 1:cout<<"9:30 AM\n";
	  break;
   case 2:cout<<"1:30 PM\n";
	  break;
   case 3:cout<<"7:30 PM\n";
	  break;
   case 4:cout<<"9:45 PM\n";
	  break;
 }
 cout<<"HALL NUMBER:";
 switch(h)
 { case 1:cout<<"1\n";
	  break;
   case 2:cout<<"2\n";
	  break;
   case 3:cout<<"3\n";
	  break;
 }
 cout<<"DAY:";
 switch(d)
   {case 1:cout<<"Monday\n";
	  break;
    case 2:cout<<"Tuesday\n";
	  break;
    case 3:cout<<"Wednesday\n";
	  break;
    case 4:cout<<"Thursday\n";
	  break;
    case 5:cout<<"Friday\n";
	  break;
    case 6:cout<<"Saturday\n";
	  break;
    case 7:cout<<"Sunday\n";
	  break;
    }
   cout<<"SEAT NUMBER:"<<n<<"\n";
   cout<<"AMOUNT:PAID\n";
   cout<<"           ENJOY YOUR DAY!!!\n";
   cout<<"\n\n\n\n";
   cout<<"TO LOGOUT PRESS 1\n";
   cout<<"TO GO TO MAIN MENU 2\n";
   cin>>mn;
   if(mn==1)
     {
	 exit(0);
     }
   if(mn==2)
     {
	 main();
     }
   else
     {
       cout<<"enter a valid number\n";
     }
getch();
}
void user :: display()
{
  cout<<"           THE TICKET\n";
 cout<<"TICKET NO:"<<ti<<"\n";
 cout<<"MOVIE:";
 switch(m)
 { case 1:cout<<"movie 1\n";
	  break;
   case 2:cout<<"movie 2\n";
	  break;
   case 3:cout<<"movie 3\n";
	  break;
 }
 cout<<"TIME:";
  switch(t)
 { case 1:cout<<"9:30 AM\n";
	  break;
   case 2:cout<<"1:30 PM\n";
	  break;
   case 3:cout<<"7:30 PM\n";
	  break;
   case 4:cout<<"9:45 PM\n";
	  break;
 }
 cout<<"HALL NUMBER:";
 switch(h)
 { case 1:cout<<"1\n";
	  break;
   case 2:cout<<"2\n";
	  break;
   case 3:cout<<"3\n";
	  break;
 }
 cout<<"DAY:";
 switch(d)
   {case 1:cout<<"Monday\n";
	  break;
    case 2:cout<<"Tuesday\n";
	  break;
    case 3:cout<<"Wednesday\n";
	  break;
    case 4:cout<<"Thursday\n";
	  break;
    case 5:cout<<"Friday\n";
	  break;
    case 6:cout<<"Saturday\n";
	  break;
    case 7:cout<<"Sunday\n";
	  break;
    }
   cout<<"SEAT NUMBER:"<<n<<"\n";
   cout<<"AMOUNT:PAID\n";
   cout<<"           ENJOY YOUR DAY!!!\n";
}
int main()
{
   system("cls");
  ifstream fin;
  ofstream fout;
  char uname[20],upass[20];
  int c;
  cout<<"                     #   # ### #   ### #### ##### ###\n";
  cout<<"                     # # # ##  #   #   #  # # # # ## \n";
  cout<<"                     ##### ### ### ### #### #   # ###\n";

  cout<<"\n";
  cout<<"                       welcome to booktheshow !!\n";
  cout<<"\n\n";
  cout<<"                        choose to continue :-\n\n";
  cout<<"                       1)Sign up(new user)\n";
  cout<<"                       2)Login(new user)\n";
  cin>>c;

      if(c==1)
       {
	 ofstream fout;
	 fout.open("user",ios::out);
	    us1.getdata();
	    fout.write((char*)&us1,sizeof(us1));
	 fout.close();

	 fout.open("t.dat",ios::app | ios::binary);
	    us1.movie();
	    fout.write((char*)&us1,sizeof(us1));
	 fout.close();

       }
    else if(c==2)
       {

	 ifstream fin;
	 fin.open("user",ios::in);
	 cout<<"Enter Username :";
	 gets(uname);
	 cout<<"\nEnter password :";
	 gets(upass);
	 while(fin)
	  {
	     fin.read((char*)&us1,sizeof(us1));
	     if(strcmp((us1.getname()),(uname))==0)
	       {
		 if(strcmp((us1.getpass()),(upass))==0)
		     {
			us1.admin();
			break;
		     }
		}
	  }
	}
 getch();
 return 0;
}
void user::admin()
{ int ad;
  char ch1='y';
  system("cls");
 do{
  cout<<"Select Following Options : ";
  cout<<"             1)Show Ticket\n";
  cout<<"             2)Buy More Tickets\n";
  cout<<"             3)Cancel Booking\n";
  cout<<"             4)Modify Your Bookings\n";
   cin>>ad;
   switch(ad)
   {
     case 1:search();
	  break;
     case 2:app();
	  break;
    /* case 3:deleting();
	  break;
     case 4:modify();
	  break;     */
     default :cout<<"Option not available\n";
   }
   cout<<"\nWant to select any other option ?(y/n)";
   cin>>ch1;
  }while(ch1=='y' || ch1=='Y');
  getch();
}
void user::search()
{
  int td;
  ifstream fin;
  fin.open("t.dat",ios::in | ios::binary);
  cout<<"Enter Ticket no.";
  cin>>td;
  while(fin)
  {
    fin.read((char*)&us1,sizeof(us1));
    if(us1.gettno()==td)
     {
       us1.display();
     }
  }
  fin.close();
}
void user::app()
{
  ofstream fout;
  char ch='y';
  while(ch=='y' || ch=='Y')
  {
     fout.open("t.dat",ios::app | ios::binary);
    us1.movie();
    fout.write((char*)&us,sizeof(us));
    fout.close();
    cout<<"Want Buy More Tickets ?(y/n) :";
    cin>>ch;
  }
}
