#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class date
{
	public:
	int dd, mm, yyyy;
};

ofstream fout;                        //Output Stream
ifstream fin;                         //Input Stream

class ticket
{
	int ticket_no;
	int ticket_count;
	string movie;
	date d;
	
	
	public:
		int amount;
		
		void add()
		{
			cout<<"\n\nEnter ticket_no: ";
			cin>>ticket_no;
			cout<<"\nEnter ticket_count: ";
			cin>>ticket_count;
			cout<<"\nEnter movie: ";
			cin>>movie;
			cout<<"\nEnter date: ";
			cin>>d.dd>>d.mm>>d.yyyy;
			amount = calculate();
		}
		int calculate()
		{
			if(movie == "beast")
			{
				return ticket_count*100;
			}
			if(movie == "maanaadu")
			{
				return ticket_count*120;
			}
			if(movie == "valimai")
			{
				return ticket_count*150;
			}
		}
		void showbooking()
		{
	        cout<<"\nTicket_no: ";
	        cout<<ticket_no;
			cout<<"\nTicket Count: ";
			cout<<ticket_count;
			cout<<"\nMovie: ";
			cout<<movie;
			cout<<"\nDate of Movie: ";
			cout<<d.dd<<"-"<<d.mm<<"-"<<d.yyyy;
			cout<<"\nTicket Price: ";
            cout<<calculate();
		}
		int retamount()
		{
			return amount;
		}
		int retticketno()
		{
			return ticket_no;
		}
		int retticketcount()
		{
			return ticket_count;
		}
		string retmovie()
		{
			return movie;
		}
		int retdate()
		{
			return d.dd;
		}
		int retmonth()
		{
			return d.mm;
		}
		int retyear()
		{
			return d.yyyy;
		}
};
int main()
{
    int choose1;
    int choose2;
    ticket ticket1;
    string username;
    string password;
    login:
    	system("cls");
    	cout<<"\n-------------------------------------LOGIN PAGE---------------------------------------------";
    	cout<<"\n\n\n";
    	label:
    	cout<<"\nEnter username: ";
    	cin>>username;
    	cout<<"Enter Password: ";
    	cin>>password;
    	
    	if(username == "Muhesh" && password == "sumusa69")
    	{
    		cout<<"\nLogin Successful!!";
    		goto menu;
		}
		else
		{
			cout<<"\nLogin Unsuccessful! Try again !";
			goto label;
		}
    	
    menu: 
    system("cls");
    cout<<"\n---------------------------------------------------------------------------------------------------------";
    cout<<"---------------------------------------WELCOME TO CHENNAI CINEMAS!!!!------------------------------------------";
    cout<<"\n--------------------------------------------------------------------------------------------------------------";
    cout<<"\n\n";
    cout<<"\t\tWhat Service would you like to avail?\n\n";
    cout<<"\t\t1. Ticket Booking\n";
    cout<<"\t\t2. Ticket Editing\n";
    cout<<"\t\t3. Show Ticket Details\n";
    cout<<"\t\t4. Exit\n\n";
    cout<<"\t\tChoose your option : ";
    cin>>choose1;
    switch(choose1)
    {
    	case 1:
    		booking:
    		system("cls");
            cout<<"\n---------------------------------------------------------------------------------------------------------";
            cout<<"---------------------------------------TICKET BOOKING------------------------------------------";
            cout<<"\n--------------------------------------------------------------------------------------------------------------";
            cout<<"\n\n";
            ticket1.add();
            fout.open("newfile.txt");
            fout<<"----------------------------------------------";
            fout<<"\nTicketNumber: "<<ticket1.retticketno();
            fout<<"\nTicketcount: "<<ticket1.retticketcount();
            fout<<"\nMovie: "<<ticket1.retmovie();
            fout<<"\nDate: "<<ticket1.retdate()<<"-"<<ticket1.retmonth()<<"-"<<ticket1.retyear();
            fout<<"\nAmount: "<<ticket1.retamount();
            fout<<"\n----------------------------------------------";
            fout.close();
            cout<<"\n-------------------------------------------------------------------------------------------------\n";
            cout<<"1. Ticket Editing\n";
            cout<<"2. Ticket Details\n";
            cout<<"3. Main Menu\n";
            cout<<"4. Logout\n";
            choice_one:
            cout<<"Give Your Choice: ";
            cin>>choose2;
            switch(choose2)
            {
            	case 1: goto ticketedit;
            	        break;
            	        
            	case 2: goto ticketdetails;
            	        break;
            	        
            	case 3: goto menu;
            	        break;
            	        
            	case 4: goto login;
            	        break;
            	        
            	default: cout<<"Wrong Choice! Try Again!";
            	         goto choice_one;
            	         break;
			}
            break;
    
    case 2:
    	    ticketedit:
    		system("cls");
            cout<<"\n---------------------------------------------------------------------------------------------------------";
            cout<<"-----------------------------------------TICKET EDITING-------------------------------------------------";
            cout<<"\n--------------------------------------------------------------------------------------------------------------";
            cout<<"\n\n";
            ticket1.showbooking();
            cout<<"\nEnter New Details: ";
            ticket1.add();
            fout.open("newfile.txt");
            fout<<"----------------------------------------------";
            fout<<"\nTicketNumber: "<<ticket1.retticketno();
            fout<<"\nTicketcount: "<<ticket1.retticketcount();
            fout<<"\nMovie: "<<ticket1.retmovie();
            fout<<"\nDate: "<<ticket1.retdate()<<"-"<<ticket1.retmonth()<<"-"<<ticket1.retyear();
            fout<<"\nAmount: "<<ticket1.retamount();
            fout<<"\n----------------------------------------------";
            fout.close();
            cout<<"\nTicket Details have been edited!";
            cout<<"\n-------------------------------------------------------------------------------------------------\n";
            cout<<"1. Ticket Booking\n";
            cout<<"2. Ticket Details\n";
            cout<<"3. Main Menu\n";
            cout<<"4. Logout\n";
            choice_two:
            cout<<"Give Your Choice: ";
            cin>>choose2;
            switch(choose2)
            {
            	case 1: goto booking;
            	        break;
            	        
            	case 2: goto ticketdetails;
            	        break;
            	        
            	case 3: goto menu;
            	        break;
            	        
            	case 4: goto login;
            	        break;
            	        
            	default: cout<<"Wrong Choice! Try Again!";
            	         goto choice_two;
            	         break;
			}
            break;
    
    case 3:
    	    ticketdetails:
    		system("cls");
            cout<<"\n---------------------------------------------------------------------------------------------------------";
            cout<<"---------------------------------------TICKET DETAILS------------------------------------------";
            cout<<"\n--------------------------------------------------------------------------------------------------------------";
            cout<<"\n\n";
            ticket1.showbooking();
            cout<<"\n\n-------------------------------------------ENJOY YOUR EXPERIENCE!!!-------------------------------------------";
            cout<<"\n-------------------------------------------------------------------------------------------------\n\n";
            cout<<"1. Ticket Editing\n";
            cout<<"2. Ticket Booking\n";
            cout<<"3. Main Menu\n";
            cout<<"4. Logout\n";
            choice_three:
            cout<<"Give Your Choice: ";
            cin>>choose2;
            switch(choose2)
            {
            	case 1: goto ticketedit;
            	        break;
            	        
            	case 2: goto booking;
            	        break;
            	        
            	case 3: goto menu;
            	        break;
            	        
            	case 4: goto login;
            	        break;
            	        
            	default: cout<<"Wrong Choice! Try Again!";
                         goto choice_three;
                         break;
			}
            break;
    
    case 4:
    		goto login;
    break;
    
    default: cout<<"Wrong Choice! Try Again!";
             goto menu;
             break;
	}
}
