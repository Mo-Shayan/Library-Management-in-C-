#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<windows.h>
using namespace std;
class User{
 	public:                //Number of line where defintion is:
 		void closeapp(void);//301
 		void Headmessage(void);//69
 		void title(void);//38
 		
};
class Books:public User{
	public:
		char bookname[100],authorname[100],department[50],publication[100],bookid[20];
		int bookquantity,q,B,p;
		double bookprice;
		void der(char st[],int b,int x);//465
		void Addbook(void);//101
		void ShowBookDetails(int);//126
        int branch(int);//501
		void issue(void);//535
		void mainmenu(void);//138
        void student(void);//179
        void faculty(void);//219
		void pass(void);//259 
		void librarian(void);//322
 		void passchange(void);//354
 		void modify(void);//831
 		void booklist(int);//1110
 		void search(int);//1152
 	    void fine(int,int,int,int,int,int,int);//1249
 		
};
void User::title()
{
    
	int i;

	Headmessage();
    
	cout<<"\n\n";
    cout<<"\n\t\t\t  ------------------------------------------------------------";
    cout<<"\n\t\t\t  |      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  |      =                 WELCOME                   =       |  ";
    Sleep(35);
	cout<<"\n\t\t\t  |      =                   TO                      =       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  |      =                 LIBRARY                   =       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  |      =               MANAGEMENT                  =       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  |      =                 SYSTEM                    =       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  |      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=       |  ";
    Sleep(30);
	cout<<"\n\t\t\t  ------------------------------------------------------------\n";
    Sleep(10);
	cout<<"\n\n\n\t Press any key to continue.....";
    
	getch();
}


void User::Headmessage()//function to display a headmessage on every page
{
	int i;

	cout<<endl<<endl;
	Sleep(10);
	cout<<"\t\t\t###########################################################################";

    Sleep(10);
    cout<<"\n\t\t\t############                                                   ############";
    Sleep(10);
    cout<<"\n\t\t\t############                                                   ############";
    Sleep(30);
    cout<<"\n\t\t\t############      Library management System Project in C++     ############";
    Sleep(10);
	cout<<"\n\t\t\t############                                                   ############";
	Sleep(10);
	Sleep(10);
    cout<<"\n\t\t\t############                                                   ############";

    Sleep(10);
	cout<<"\n\t\t\t###########################################################################\n\n";
	
	for( i = 0; i < 120; i++ )
    {
    	Sleep(0.6);
    	cout<<"-";
	}
	cout<<"\n";

    return ;
}
void Books::Addbook()
{
	    fflush(stdin);
	    cout<<"\n\t\tEnter the details :-\n";
	    fflush(stdin);
	    cout<<"\n\t\tEnter Book's Name : ";
	    fflush(stdin);
	    cin.getline(bookname,100);
	    cout<<"\n\t\tEnter Author's Name : ";
	    fflush(stdin);
	    cin.getline(authorname,100);
	    cout<<"\n\t\tEnter Publication name : ";
	    fflush(stdin);
	    cin.getline(publication,100);
	    cout<<"\n\t\tEnter Book's ID : ";
	    fflush(stdin);
	    cin.getline(bookid,20);
	    cout<<"\n\t\tEnter Book's Price : ";
	    fflush(stdin);
	    cin>>bookprice;
	    cout<<"\n\t\tEnter Book's Quantity : ";
	    fflush(stdin);
	    cin>>bookquantity;	
	    fflush(stdin);
}
void Books::ShowBookDetails(int i)
{
    cout<<"\n\t\tBook Name : "<<bookname<<endl;
    cout<<"\n\t\tBook's Author Name : "<<authorname<<endl;
    cout<<"\n\t\tBook's ID : "<<bookid<<endl;
    cout<<"\n\t\tBook's Publication : "<<publication<<endl;
    if(i==2)
    {
        cout<<"\n\t\tBook's Price : "<<bookprice<<endl;
        cout<<"\n\t\tBook's Quantity : "<<bookquantity<<endl;
    }
}
void Books::mainmenu()
{
   int i; 
        system("cls");   
        Headmessage();
        cout<<"\n\t\t>>Please Choose Any Option To login \n";
        cout<<"\n\t\ta).Student\n\n\t\tb).Librarian\n\n\t\tc).Faculty\n\n\t\td).Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        switch(getch())
        {
        	case 'a':
        		{
        			system("cls");
        			student();
        			break;
				}
			case 'b':
			   {
			       pass();
				   break;	
				}	
			case 'c':
			{
				system("cls");
				faculty();
				break;
				}	
			case 'd':
			{
				closeapp();
				}	
			default:
			{
				cout<<"Please enter correct option :";
				getch();
            	system("cls");
           		mainmenu();
				}	
				
		}
}
void Books::student()
{
		    system("cls");
		    Headmessage();
        cout<<"\n\t<------------ WELCOME STUDENT ------------>\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\ta).View BookList\n\n\t\tb).Search for a Book\n\n\t\tc).Go to main menu\n\n\t\td).Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        switch(getch())
        {
        	case 'a':
        		{
        			booklist(1);
        			break;
				}
			case 'b':
			{
				search(1);
				break;
				}	
			case 'c':
			{
				system("cls");
				mainmenu();
				break;
				}	
			case 'd':
			{
				closeapp();
				}	
				
			default:
			{
				cout<<"\n\t\tPlease enter correct option :";
                getch();
                system("cls");
                student();
			}			
		}       
}
void Books::faculty()
{
		    system("cls");
		    Headmessage();
        cout<<"\n\t<------------ WELCOME FACULTY ------------>\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\ta).View BookList\n\n\t\tb).Search for a Book\n\n\t\tc).Go to main menu\n\n\t\td).Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        switch(getch())
        {
        	case 'a':
        		{
        			booklist(3);
        			break;
				}
			case 'b':
			{
				search(3);
				break;
				}	
			case 'c':
			{
				system("cls");
				mainmenu();
				break;
				}	
			case 'd':
			{
				closeapp();
				}	
				
			default:
			{
				cout<<"\n\t\tPlease enter correct option :";
                getch();
                system("cls");
                faculty();
			}			
		}       
}
void Books::pass()
{
    int i=0;
    char ch,st[21],ch1[21]={"pass"};
    cout<<"\n\t\tEnter Password : ";
    while(1)
    {
    ch=getch();
    if(ch==13)
    {
        st[i]='\0';
        break;
    }
    else if(ch==8&&i>0)
    {
        i--;
        cout<<"\b \b";
    }
    else
    {
    cout<<"*";
    st[i]=ch;
    i++;
    }
    }
    ifstream inf("password.txt");
    inf>>ch1;
    inf.close();
    for(i=0;st[i]==ch1[i]&&st[i]!='\0'&&ch1[i]!='\0';i++);
    if(st[i]=='\0'&&ch1[i]=='\0')
    {
        system("cls");
        librarian();
    }
    else
    {
        cout<<"\n\n\t\tWrong Password.\n\n\t\ttry again.....\n";
        getch();
        system("cls");
        mainmenu();
    }
}
void User::closeapp()
{
	system("cls");
			   Headmessage();
			   cout<<"\n";
			   cout<<"\t\t-------------------------------------------------------------------------\n";
			   cout<<"\t\t|\t\t\tThis project was programmed by :                |";
			   cout<<"\n\t\t|                                                                       |\n";
			   Sleep(40);
			   cout<<"\t\t|\t\t\t1) Insia Farhan (20k-0265)                      |";
			   cout<<"\n\t\t|                                                                       |\n";
			   Sleep(40);
			   cout<<"\t\t|\t\t\t2) Syed Azam (20k-0255)                         |";
			   cout<<"\n\t\t|                                                                       |\n";
			   Sleep(40);
			   cout<<"\t\t|\t\t\t3) Muhammad Shayan (20k-0186)                   |\n";
			   cout<<"\t\t-------------------------------------------------------------------------\n";
			   cout<<"\n\nExiting in 2 seconds-------------->";
			   Sleep(2000);
			   exit(0);  
}
void Books::librarian()
{
    int i;
    system("cls");
    Headmessage();
        cout<<"\n\t<------------ WELCOME LIBRARIAN ------------>\n";
        cout<<"\n\t\t>>Please Choose One Option:\n";
        cout<<"\n\t\ta).View BookList\n\n\t\tb).Search for a Book\n\n\t\tc).Modify/Add Book\n\n\t\td).Issue Book\n\n\t\te).Go to main menu\n\n\t\tf).Change Password\n\n\t\tg).Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        
        switch(getch())
        {
            case 'a':booklist(2);
                     break;
            case 'b':search(2);
                     break;
            case 'c':modify();
                     break;
            case 'd':issue();
                     break;
            case 'e':system("cls");
                     mainmenu();
                     break;
            case 'f':passchange();
                    break;
            case 'g':closeapp();
            default:cout<<"\n\t\tPlease enter correct option :";
            getch();
            system("cls");
            librarian();
        }
}
void Books::passchange()
{
    int i=0,j=0;
    char ch,st[21],ch1[21]={"pass"};
    system("cls");
    Headmessage();
    cout<<"\n\n\t\tEnter Old Password : ";
    while(1)
    {
    ch=getch();
    if(ch==13)
    {
        st[i]='\0';
        break;
    }
    else if(ch==8&&i>0)
    {
        i--;
        cout<<"\b \b";
    }
    else
    {
    cout<<"*";
    st[i]=ch;
    i++;
    }
    }
    ifstream intf;
    intf.open("password.txt");
    intf>>ch1;
    intf.close();
    for(i=0;st[i]==ch1[i]&&st[i]!='\0'&&ch1[i]!='\0';i++);
    if(st[i]=='\0'&&ch1[i]=='\0')
    {
        system("cls");
        Headmessage();
        cout<<"\n\t**The Password Should be less than 20 characters & don't use spaces**\n\n";
        cout<<"\n\t\tNOTE :- New password should must be euqal or bigger than the previous one\n\n";
        cout<<"\n\t\tEnter New Password : ";
        fflush(stdin);
        i=0;
        while(1)
        {
        j++;
        ch=getch();
        if(ch==13)
        {
            for(i=0;st[i]!=' '&&st[i]!='\0';i++);
            if(j>20 || st[i]==' ')
            {
                cout<<"\n\n\t\tYou did't follow the instruction \n\n\t\tPress any key for try again.....";
                getch();
                system("cls");
                passchange();
                librarian();
            }
            st[i]='\0';
            break;
        }
        else if(ch==8&&i>0)
        {
            i--;
            cout<<"\b \b";
        }
        else
        {
        cout<<"*";
        st[i]=ch;
        i++;
        }
        }
       
        ofstream outf("password.txt");
        outf<<st;
        outf.close();
        cout<<"\n\n\t\tYour Password has been changed Successfully.";
        cout<<"\n\t\tPress any key to continue......";
        getch();
        system("cls");
        librarian();
    }
    else
    {
        cout<<"\n\n\t\tPassword is incorrect.....\n";
retry:        
        cout<<"\n\t\tEnter 1 for retry or 2 for menu";
        switch(getch())
        {
        	case 49:
        		{
        			system("cls");
        			passchange();
				}
			case 50:
			{
				system("cls");
				librarian();
				}
			default:
			{
				cout<<"\n\n\t\t\tERROR! WRONG OPTION\n\n\t\tPress any key to continue.....";
				getch();
				system("cls");
				Headmessage();
				goto retry;
					}		
				
		}
        
    }
}
void Books::der(char st[],int b,int x)
{
    int i,cont=0;
    fstream intf("Booksdata.txt",ios::in|ios::out|ios::ate|ios::binary);
    intf.seekg(0);
    intf.read((char*)this,sizeof(*this));
    while(!intf.eof())
    {
        for(i=0;b==B&&bookid[i]!='\0'&&st[i]!='\0'&&st[i]==bookid[i];i++);
        if(bookid[i]=='\0'&&st[i]=='\0')
        {
            cont++;
            if(x==1)
            {
                bookquantity--;
            }
            else
            {
                bookquantity++;
            }
            intf.seekp(intf.tellp()-sizeof(*this));
            intf.write((char*)this,sizeof(*this));
            break;
        }
        intf.read((char*)this,sizeof(*this));
    }
    if(cont==0)
    {
        cout<<"\n\t\tBook not found.\n";
        cout<<"\n\n\t\tPress any key to continue.....";
        getch();
        system("cls");
        issue();
    }
    intf.close();
}
int Books::branch(int x)
  {
      int i;
      system("cls");
      Headmessage();
      cout<<"\n\t\t>>Please Choose one Branch :-\n";
      cout<<"\n\t\t1).Computer Science\n\n\t\t2).BBA\n\n\t\t3).EE\n\n\t\t4).CIVIL\n\n\t\t5).MECHANICAL\n\n\t\t6).Go to menu\n";
      cout<<"\n\t\tEnter youur choice : ";
      
      switch(getch())
      {
          case 49: return 1;
                  break;
          case 50: return 2;
                  break;
          case 51: return 3;
                  break;
          case 52: return 4;
                  break;
          case 53: return 5;
                  break;
          case 54: system("cls");
                   Headmessage();
                  if(x==1)
                  student();
                  
                  else
                    librarian();
          default : cout<<"\n\t\tPlease enter correct option :(";
                    getch();
                    system("cls");
                    branch(x);
        }
  }
 void Books::issue()
{
    char st[50],st1[20];
    int b,i,j,d,m,y,dd,mm,yy,cont=0;
    system("cls");
    Headmessage();
    cout<<"\n\n\n\n\n\n\n\n\t\t\ta). Student\n\n\t\t\tb). Faculty\n\n\t\t\tc). Go back\n\n\n\nSelect:- ";
    switch(getch())
    {
    	case 97:
    		{
retrystudent:    	
		    	system("cls");
		    	Headmessage();
		    	cout<<"\n\t\t->Please Choose one option :-\n";
			    cout<<"\n\t\ta).Issue Book\n\n\t\tb).View students who isuued books\n\n\t\tc).Reissue Book\n\n\t\td).Return Book\n\n\t\te).Go back to menu\n\n\t\tEnter Your Choice : ";
			    switch(getch())
			    {
			    	case 'a':
			    		{
			    			system("cls");
						    b=branch(2);					
						    system("cls");
						    Headmessage();
						    fflush(stdin);
						    cout<<"\n\t\t->Please Enter Details :-\n";
						    cout<<"\n\t\tEnter Book Name : ";
						    cin.getline(bookname,100);
						    fflush(stdin);
						    cout<<"\n\t\tEnter Book's ID : ";
						    cin.getline(bookid,20);
						    //strcpy(st,bookid);
						    fflush(stdin);
						    der(bookid,b,1);
						    cout<<"\n\t\tEnter Student Name : ";
						    cin.getline(authorname,100);
						    fflush(stdin);
						    cout<<"\n\t\tEnter Student's ID : ";
						    cin.getline(publication,20);
						    fflush(stdin);
						    cout<<"\n\t\tEnter date : ";
						    cin>>q>>B>>p;
						    ofstream outf("student.txt",ios::binary|ios::app);
						    outf.write((char*)this,sizeof(*this));
						    outf.close();
						    cout<<"\n\n\t\tIssue Successfully.\n";
						    break;
						}
					case 'b':
						{
							ifstream intf("student.txt",ios::binary);
						    system("cls");
						    Headmessage();
						    cout<<"\n\t\t->The Details are :-\n";
						    intf.read((char*)this,sizeof(*this));
						    i=0;
						    while(!intf.eof())
						    {
						    i++;
						    cout<<"\n\t\t********** "<<i<<". ********** \n";
						    cout<<"\n\t\tStudent Name : "<<authorname<<"\n\t\t"<<"Student's ID : "<<publication<<"\n\t\t"<<"Book Name : "<<bookname<<"\n\t\t"<<"Book's ID : "<<bookid<<"\n\t\t"<<"Date : "<<q<<"/"<<B<<"/"<<p<<"\n";
						    intf.read((char*)this,sizeof(*this));
						    }
						    intf.close();
						    break;
						}	
					case 'c':
						{
							system("cls");
							Headmessage();
						    fflush(stdin);
						    cout<<"\n\t\t->Please Enter Details :-\n";
						    cout<<"\n\n\t\tEnter Student's ID : ";
						    cin.getline(st,50);
						    cout<<"\n\t\tEnter Book's ID : ";
						    cin.getline(st1,20);
						    fstream intf("student.txt",ios::in|ios::out|ios::ate|ios::binary);
						    intf.seekg(0);
						    intf.read((char*)this,sizeof(*this));
						    while(!intf.eof())
						        {
						            for(i=0;bookid[i]!='\0'&&st1[i]!='\0'&&st1[i]==bookid[i];i++);
						            for(j=0;publication[j]!='\0'&&st[j]!='\0'&&st[j]==publication[j];j++);
						            if(bookid[i]=='\0'&&publication[j]=='\0'&&st[j]=='\0'&&st1[i]=='\0')
						                {
						                    d=q;
						                    m=B;
						                    y=p;
						                    cout<<"\n\t\tEnter New Date : ";
						                    cin>>q>>B>>p;
						                    fine(d,m,y,q,B,p,1); //fn1
						                    intf.seekp(intf.tellp()-sizeof(*this)); //fn3
						                    intf.write((char*)this,sizeof(*this)); //fn5
						                    cout<<"\n\n\t\tReissue successfully."; //fn3
						                    break;
						                }
						                   intf.read((char*)this,sizeof(*this));
						        }
						        intf.close();
						        break;
						}	
					case 'd':
						{
							
							system("cls");
						    Headmessage();
						    b=branch(2);
						    system("cls");
						    fflush(stdin);
						    cout<<"\n\t\t->Please Enter Details :-\n";
						    cout<<"\n\t\tEnter Book's ID : ";
						    cin.getline(st1,20);
						    der(st1,b,2);
						    cout<<"\n\n\t\tEnter Student's ID : ";
						    cin.getline(st,20);
						    cout<<"\n\t\tEnter Present date : ";
						    cin>>d>>m>>y;
						    ofstream outf("temp.txt",ios::app|ios::binary);
						    ifstream intf("student.txt",ios::binary);
						    intf.read((char*)this,sizeof(*this));
						    while(!intf.eof())
						        {
						            for(i=0;bookid[i]!='\0'&&st1[i]!='\0'&&st1[i]==bookid[i];i++);
						            for(j=0;publication[j]!='\0'&&st[j]!='\0'&&st[j]==publication[j];j++);
						            if(bookid[i]=='\0'&&publication[j]=='\0'&&st[j]=='\0'&&st1[i]=='\0'&&cont==0)
						                {
						                    cont++;
						                    intf.read((char*)this,sizeof(*this));
						                    fine(q,B,p,d,m,y,1);
						                    cout<<"\n\t\tReturned successfully.";
						                }
						            else
						                {
						                    outf.write((char*)this,sizeof(*this));
						                    intf.read((char*)this,sizeof(*this));
						                }
						        }
						
						    intf.close();
						    outf.close();
						    getch();
						    remove("student.txt");
						    rename("temp.txt","student.txt");
						    break;
							
						}	
					case 'e':
						{
							system("cls");
							issue();
							break;
							
						}	
					default:
					{
						cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
						getch();
						goto retrystudent;
					}	
						
				}
				break;
			}
		case 98:
			{
retryfaculty:    	
		    	system("cls");
		    	Headmessage();
		    	cout<<"\n\t\t->Please Choose one option :-\n";
			    cout<<"\n\t\ta).Issue Book\n\n\t\tb).View Faculty members who isuued books\n\n\t\tc).Return Book\n\n\t\td).Go back to menu\n\n\t\tEnter Your Choice : ";
			    switch(getch())
			    {
			    	case 'a':
			    		{
			    			system("cls");
						    b=branch(2);
						    system("cls");
						    Headmessage();
						    cout<<"NOTE :- Books are issued for a whole semester for faculty members (i.e->4 months==120 days)\n\n";
						    fflush(stdin);
						    cout<<"\n\t\t->Please Enter Details :-\n";
						    cout<<"\n\t\tEnter Book Name : ";
						    fflush(stdin);
						    cin.getline(bookname,100);
						    cout<<"\n\t\tEnter Book's ID : ";
						    fflush(stdin);
						    cin.getline(bookid,20);
						    //strcpy(st,bookid);
						    der(bookid,b,1);
						    cout<<"\n\t\tEnter Faculty member's Name : ";
						    cin.getline(authorname,100);
						    cout<<"\n\t\tEnter Faculty member's ID : ";
						    cin.getline(publication,20);
						    cout<<"\n\t\tEnter date : ";
						    cin>>q>>B>>p;
						    ofstream outf("faculty.txt",ios::binary|ios::app);
						    outf.write((char*)this,sizeof(*this));
						    outf.close();
						    cout<<"\n\n\t\tIssue Successfully.\n";
						    break;
						}
					case 'b':
						{
							ifstream intf("faculty.txt",ios::binary);
						    system("cls");
						    Headmessage();
						    cout<<"\n\t\t->The Details are :-\n";
						    intf.read((char*)this,sizeof(*this));
						    i=0;
						    while(!intf.eof())
						    {
						    i++;
						    cout<<"\n\t\t********** "<<i<<". ********** \n";
						    cout<<"\n\t\tFaculty member's Name : "<<authorname<<"\n\t\t"<<"Faculty member's ID : "<<publication<<"\n\t\t"<<"Book Name : "<<bookname<<"\n\t\t"<<"Book's ID : "<<bookid<<"\n\t\t"<<"Date : "<<q<<"/"<<B<<"/"<<p<<"\n";
						    intf.read((char*)this,sizeof(*this));
						    }
						    intf.close();
						    break;
						}	
					
					case 'c':
						{
							system("cls");
						    b=branch(2);
						    system("cls");
						    Headmessage();
						    fflush(stdin);
						    cout<<"\n\t\t->Please Enter Details :-\n";
						    cout<<"\n\t\tEnter Book's ID : ";
						    cin.getline(st1,20);
						    der(st1,b,2);
						    cout<<"\n\n\t\tEnter Faculty member's ID : ";
						    cin.getline(st,20);
						    cout<<"\n\t\tEnter Present date : ";
						    cin>>d>>m>>y;
						    ofstream outf("tempfac.txt",ios::app|ios::binary);
						    ifstream intf("faculty.txt",ios::binary);
						    intf.read((char*)this,sizeof(*this));
						    while(!intf.eof())
						        {
						            for(i=0;bookid[i]!='\0'&&st1[i]!='\0'&&st1[i]==bookid[i];i++);
						            for(j=0;publication[j]!='\0'&&st[j]!='\0'&&st[j]==publication[j];j++);
						            if(bookid[i]=='\0'&&publication[j]=='\0'&&st[j]=='\0'&&st1[i]=='\0'&&cont==0)
						                {
						                    cont++;
						                    intf.read((char*)this,sizeof(*this));
						                    fine(q,B,p,d,m,y,2);
						                    cout<<"\n\t\tReturned successfully.";
						                }
						            else
						                {
						                    outf.write((char*)this,sizeof(*this));
						                    intf.read((char*)this,sizeof(*this));
						                }
						        }
						
						    intf.close();
						    outf.close();
						    getch();
						    remove("faculty.txt");
						    rename("tempfac.txt","faculty.txt");
						    break;
							
						}	
					case 'd':
						{
							system("cls");
							issue();
							break;
							
						}	
					default:
					{
						cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
						getch();
						goto retryfaculty;
					}	
						
				}
				break;
			}	
		case 99:
			{
				system("cls");
				librarian();
				break;
			}	
		default:
			{
                cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
				getch();
				issue();
			}	
	}
	cout<<"\n\n\tPress any key to continue ..........";
	getch();
	issue();
    	
} 
void Books::modify()
  {
    char ch,st1[100];
    int i=0,b,cont=0;
    system("cls");
    Headmessage();
    cout<<"\n\t\t>>Please Choose one option :-\n";
    cout<<"\n\t\t1).Modification In Current Books\n\n\t\t2).Add New Book\n\n\t\t3).Delete A Book\n\n\t\t4).Go back\n";
    cout<<"\n\n\t\tEnter your choice : ";
    switch(getch())
    {
    	case 49:
    		{
    			    system("cls");
                    b=branch(2);
                    ifstream intf1("Booksdata.txt",ios::binary);
                    if(!intf1)
                    {
                        cout<<"\n\t\tFile Not Found\n";
                        cout<<"\n\t\tPress any key to continue.....";
                        getch();
                        system("cls");
                        Headmessage();
                        librarian();
                    }
                        intf1.close();
retryMod:                        
                        system("cls");
                        Headmessage();
                        cout<<"\n\t\tPlease Choose One Option :-\n";
                        cout<<"\n\t\t1.Search By Book Name\n\n\t\t2.Search By Book's ID\n";
                        cout<<"\n\t\tEnter Your Choice : ";
                        
                        fflush(stdin);
                        switch(getch())
                        {
                        	case 49:
                        		{
                        			system("cls");
                        			Headmessage();
	                                cout<<"\n\t\tEnter Book Name : ";
	                                cin.getline(st1,100);
	                                fflush(stdin);
	                                system("cls");
	                                Headmessage();
	                                fstream intf("Booksdata.txt",ios::in|ios::out|ios::ate|ios::binary);
	                                intf.seekg(0);
	                                intf.read((char*)this,sizeof(*this));
	                                while(!intf.eof())
	                                    {
	                                        for(i=0;b==B&&bookname[i]!='\0'&&st1[i]!='\0'&&(st1[i]==bookname[i]||st1[i]==bookname[i]+32);i++);
	                                        if(bookname[i]=='\0'&&st1[i]=='\0')
	                                            {
	                                                cont++;
	                                                Addbook();
	                                                intf.seekp(intf.tellp()-sizeof(*this));
	                                                intf.write((char*)this,sizeof(*this));
	                                                break;
	                                            }
	                                                     intf.read((char*)this,sizeof(*this));
	                                    }
	                                    intf.close();
	                                    break;
								}
							case 50:
								{
									system("cls");
									Headmessage();
									cout<<"\n\t\tEnter Book's ID : ";
									fflush(stdin);
	                                cin.getline(st1,100);
	                                system("cls");
	                                Headmessage();
	                                fstream intf("Booksdata.txt",ios::in|ios::out|ios::ate|ios::binary);
	                                intf.seekg(0);
	                                intf.read((char*)this,sizeof(*this));
	                                while(!intf.eof())
	                                    {
	                                        for(i=0;b==B&&bookid[i]!='\0'&&st1[i]!='\0'&&st1[i]==bookid[i];i++);
	                                        if(bookid[i]=='\0'&&st1[i]=='\0')
	                                            {
	                                                cont++;
	                                                Addbook();
	                                                intf.seekp(intf.tellp()-sizeof(*this));
	                                                intf.write((char*)this,sizeof(*this));
	                                                break;
	                                            }
	                                        intf.read((char*)this,sizeof(*this));
	                                    }
	
	                                intf.close();
	                                break;
								}
								default:
									{
										cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
										getch();
										goto retryMod;
										
									}	
								
						}
                        if(cont==0)
                        {
                            cout<<"\n\t\tBook Not Found.\n";
                            cout<<"\n\t\tPress any key to continue.....";
                            getch();
                            system("cls");
                            modify();
                        }
                        else
                            cout<<"\n\t\tUpdate Successful.\n";
                            break;
			}
		case 50:
			{
				    system("cls");
                    B=branch(2);
                    system("cls");
                    Addbook();
                    ofstream outf("Booksdata.txt",ios::app|ios::binary);
                    outf.write((char*)this,sizeof(*this));
                    outf.close();
                    cout<<"\n\t\tBook added Successfully.\n";
                    break;
			}	
		case 51:
			{
				    system("cls");
                    Headmessage();
                    b=branch(2);
                    ifstream intf1("Booksdata.txt",ios::binary);
                    if(!intf1)
                    {
                        cout<<"\n\t\tFile Not Found\n";
                        cout<<"\n\t\tPress any key to continue.....";
                        getch();
                        intf1.close();
                        system("cls");
                        librarian();
                    }
                        intf1.close();
retryDel:                        
                        system("cls");
                        Headmessage();
                        cout<<"\n\t\tPlease Choose One Option for deletion:-\n";
                        cout<<"\n\t\t1.By Book Name\n\n\t\t2.By Book's ID\n";
                        cout<<"\n\t\tEnter Your Choice : ";
                        switch(getch())
                        {
                        	case 49:
                        		{
                        			system("cls");
	                                Headmessage();
	                                cout<<"\n\n\t\tEnter Book Name : ";
	                                fflush(stdin);
	                                cin.getline(st1,100);
	                                ofstream outf;
									outf.open("temp.txt",ios::app|ios::binary);
								
	                                ifstream intf;
									intf.open("Booksdata.txt",ios::binary);
	                                intf.read((char*)this,sizeof(*this));
	                                while(!intf.eof())
	                                    {
	                                        for(i=0;b==B&&bookname[i]!='\0'&&st1[i]!='\0'&&(st1[i]==bookname[i]||st1[i]==bookname[i]+32);i++);
	                                        if(bookname[i]=='\0'&&st1[i]=='\0')
	                                            {
	                                                cont++;
	                                                intf.read((char*)this,sizeof(*this));
	
	                                            }
	                                        else
	                                        {
	                                        outf.write((char*)this,sizeof(*this));
	                                        intf.read((char*)this,sizeof(*this));
	                                        }
	                                    }	
				                    intf.close();
				                    outf.close();
				                    if(cont !=0){
				                    ofstream o;
									o.open("Booksdata.txt",ios::trunc|ios::binary);
				                    ifstream i;
									i.open("temp.txt",ios::app|ios::binary);
				                    while(!i.eof())
				                    {
				                    	i.read((char*)this,sizeof(*this));
				                    	o.write((char*)this,sizeof(*this));
									}
									i.close();
									o.close();
				                    remove("temp.txt");
				                }
				                    
				                    break;
								}
							case 50:
								{
									system("cls");
									Headmessage();
									cout<<"\n\t\tEnter Book's ID : ";
									fflush(stdin);
	                                cin.getline(st1,100);
	                                fflush(stdin);
	                                ofstream outf("temp.txt",ios::app|ios::binary);
	                                ifstream intf("Booksdata.txt",ios::binary);
	                                intf.read((char*)this,sizeof(*this));
	                                while(!intf.eof())
	                                    {
	                                        for(i=0;b==B&&bookid[i]!='\0'&&st1[i]!='\0'&&st1[i]==bookid[i];i++);
	                                        if(bookid[i]=='\0'&&st1[i]=='\0')
	                                            {
	                                                cont++;
	                                                intf.read((char*)this,sizeof(*this));
	                                            }
	                                        else
	                                        {
	                                        outf.write((char*)this,sizeof(*this));
	                                        intf.read((char*)this,sizeof(*this));
	                                        }
	                                    }
				                    outf.close();
				                    intf.close();
				                    if(cont!=0){
				                    	ofstream o;
									o.open("Booksdata.txt",ios::trunc|ios::binary);
				                    ifstream i;
									i.open("temp.txt",ios::app|ios::binary);
				                    while(!i.eof())
				                    {
				                    	i.read((char*)this,sizeof(*this));
				                    	o.write((char*)this,sizeof(*this));
									}
									i.close();
									o.close();
				                    remove("temp.txt");
				                }
				                    break;
								}	
							default:
								{
								  cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
										getch();
										goto retryDel;
								}	
						}
                        if(cont==0)
                        {
                            cout<<"\n\t\tBook Not Found.\n";
                            remove("temp.txt");
                            cout<<"\n\t\tPress any key to continue.....";
                            getch();
                            system("cls");
                            modify();
                        }
                        else
                            cout<<"\n\t\tDeletion Successful.\n";
                            break;
			}	
		case 52:
			{
				system("cls");
    			librarian();
    			break;
			}	
		default:
			{
			  cout<<"\n\n\n\t\t\aWrong option! press any key to try again...";
			  getch();
			  modify();	
			  break;
			}	
	}
	cout<<"\n\t\tPress any key to continue.....";
    getch();
    system("cls");
    librarian();
}
void Books::booklist(int i)
  {
                int b,r=0;
                system("cls");
                b=branch(i);
                system("cls");
                Headmessage();
                ifstream intf("Booksdata.txt",ios::binary);
                if(!intf)
                    cout<<"\n\t\tFile Not Found.";
                else
                {
                    cout<<"\n\t    ************ Book List ************ \n\n";
                    intf.read((char*)this,sizeof(*this));
                while(!intf.eof())
                {
                    if(b==B)
                    {
                        if(bookquantity==0 && i==1)
                        {

                        }
                        else
                            {
                                r++;
                                cout<<"\n\t\t********** "<<r<<". ********** \n";
                                ShowBookDetails(i);
                            }
                    }
                    intf.read((char*)this,sizeof(*this));
                }
                }
                cout<<"\n\t\tPress any key to continue.....";
                getch();
                system("cls");
                if(i==1)
                    student();
                else if(i==3)
                    faculty();
                   else 
                    librarian();
    }
void Books::search(int x)
  {
      int i,b,cont=0;
      char ch[100];
      system("cls");
      b=branch(x);
      ifstream intf("Booksdata.txt",ios::binary);
        if(!intf)
        {
            cout<<"\n\t\tFile Not Found.\n";
            cout<<"\n\t\t->Press any key to continue.....";
            getch();
            system("cls");
            if(x==1)
            student();
            else
            librarian();
        }
      system("cls");
      Headmessage();
      cout<<"\n\t\tPlease Choose one option :-\n";
      cout<<"\n\t\t1.Search By Name\n\n\t\t2.Search By Book's ID\n";
      cout<<"\n\t\tEnter Your Choice : ";
      switch(getch())
      {
      	case 49:
      		{
      			system("cls");
      			Headmessage();
      			cout<<"\n\t\tEnter Book's Name : ";
		          cin.getline(ch,100);
		          system("cls");
		          while(!intf.eof())
		          {
		            for(i=0;b==B&&bookquantity!=0&&bookname[i]!='\0'&&ch[i]!='\0'&&(ch[i]==bookname[i]||ch[i]==bookname[i]+32);i++);
		            if(bookname[i]=='\0'&&ch[i]=='\0')
		                {
		                	Headmessage();
		                        cout<<"\n\t\tBook Found :-\n";
		                        ShowBookDetails(x);
		                        cont++;
		                        break;
		                }
		             intf.read((char*)this,sizeof(*this));
		          }
		          break;
			}
			
		case 50:
			{
				   system("cls");
				   Headmessage();
				   cout<<"\n\t\tEnter Book's ID : ";
		          cin.getline(ch,100);
		          system("cls");
		          while(!intf.eof())
		          {
		              for(i=0;b==B&&q!=0&&bookid[i]!='\0'&&ch[i]!='\0'&&ch[i]==bookid[i];i++);
		              if(bookid[i]=='\0'&&ch[i]=='\0')
		                {
		                		    Headmessage();

		                            cout<<"\n\t\tBook Found :-\n";
		                            ShowBookDetails(x);
		                            cont++;
		                            break;
		                }
		               intf.read((char*)this,sizeof(*this));
		          }
		          break;
			}	
			
		default:
		{
			cont++;
             cout<<"\n\t\tPlease enter correct option :(";
             getch();
             system("cls");
             search(x);
             break;
			
			}	
	  }
	  intf.close();
    if(cont==0)
   cout<<"\n\t\tThis Book is not available  \n";

    cout<<"\n\t\tPress any key to continue.....";
    getch();
    system("cls");
    if(x==1)
    student();
    else if(x==3)
    faculty();
    else if(x==2)
    librarian();
}    
void Books::fine(int d,int m,int y,int dd,int mm,int yy,int flag)
{
    long int n1,n2;
    int years,l,i;
    const int monthDays[12] = {30, 30, 30, 30, 30, 30,30, 30, 30, 30, 30, 30};
    n1 = y*365 + d;
    for (i=0; i<m - 1; i++)
        n1 += monthDays[i]; //fn1353
    years = y;
    if (m <= 2)
    years--;
    l= years / 4 - years / 100 + years / 400;
    n1 += l;
    n2 = yy*365 + dd;
    for (i=0; i<mm - 1; i++)
        n2 += monthDays[i];
    years = yy;
    if (m <= 2)
    years--;
    l= years / 4 - years / 100 + years / 400;
    n2 += l;
    n1=n2-n1;
    if(flag==1){
    n2=n1-15;
    if(n2>0)
    cout<<"\n\t\tThe Total Fine is : "<<n2; 
	}
    else if(flag==2)
    {
    n2=n1-120;
    if(n2>0)
    cout<<"\n\t\tThe Total Fine is : "<<n2; 
    	
	}
      
}
    
int main()
{
	system("cls");
    system("color E0");
	Books u1;
	u1.title();
	u1.mainmenu();
	
}
