#include <iostream>
#include <fstream> // for file handling operations
#include <iomanip> // use for floating points values
using namespace std;

void mainMenu();

class Management 
{
    public:
         
        Management()
        {
            mainMenu();
        }
};

class details
{
    public:
        
        static string  name,gender;
        int phoneNo;
        int age;
        string address;
        static int CID;
        char arr[100];

        void information()
        {
            cout << "Enter the customer ID : "<< endl;
            cin>> CID;
            cout <<"\nEnter the Name : ";
            cin>>name;
            cout << "\nEnter the age : " ; 
            cin >> age;
            cout << "\n Enter the Address : " ; 
            cin >> address;
            cout <<"\nEnter the Gender : " ;
            cin>> gender;
            cout << "Your Details are saved with us\n"<<endl;


        }
};

int details :: CID;
string details :: name;
string details :: gender;

class Regestration
{
    public :
       static int choice;
       
       int back;
       static float charges;

       void flights()
       {
         
         string flightN[] = {"Dubai", "Canda", "UK", "USA", "Australia","Europe"};

         for (int a = 0; a < 6; a++)
         {
            cout << (a+1)<<".flight to "<< flightN[a]<<endl;
         }

         cout<<"\nWelcome to the Airlines! " <<endl;
         cout << "\n Press the number of the country of which you want to book the flight : ";
         cin>>choice;

        switch (choice)
        {
        case 1 :
            { 
                cout <<"________________Welcome to Dubai Emirates_________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.DUB - 498"<<endl;
                cout << "\t14-04-2024 8:00 AM 10hrs  Rs. 14000"<<endl;
                cout << "1.DUB - 658"<<endl;
                cout << "\t15-04-2024 5:00 AM 10hrs  Rs. 17000"<<endl;
                cout << "1.DUB - 498"<<endl;
                cout << "\t16-04-2024 10:00 PM 10hrs  Rs. 10000"<<endl;

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=14000;
                    cout<<"\nYou have successfully Booked the flight DUB - 498"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 17000;
                    cout<<"\nYou have succesfully Booked the flight DUB - 658"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==3)
                {
                    charges = 10000;
                    cout<<"\nYou have succesfully Booked the flight DUB - 498"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                }
                }
                
                



            case 2:
                {
                   cout <<"________________Welcome to Canadain Airlines   _________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.CA - 198"<<endl;
                cout << "\t14-04-2024 2:00 AM 20hrs  Rs. 24000"<<endl;
                cout << "1.CA - 097"<<endl;
                cout << "\t15-04-2024 6:00 AM 23hrs  Rs. 30000"<<endl;
                cout << "1.CA - 256"<<endl;
                cout << "\t16-04-2024 12:00 PM 21hrs  Rs. 40000"<<endl;

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=24000;
                    cout<<"\nYou have successfully Booked the flight CA - 198"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 30000;
                    cout<<"\nYou have succesfully Booked the flight CA - 097"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==3)
                {
                    charges = 40000;
                    cout<<"\nYou have succesfully Booked the flight CA - 256"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                }
            }

            case 3:
                {
                     cout <<"________________Welcome to UK Airways_________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.UK - 230"<<endl;
                cout << "\t14-04-2024 10:00 AM 10hrs  Rs. 40000"<<endl;
                cout << "1.UK - 58"<<endl;
                cout << "\t15-04-2024 12:00 PM 10hrs  Rs. 38000"<<endl;
                

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=40000;
                    cout<<"\nYou have successfully Booked the flight UK - 230"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 38000;
                    cout<<"\nYou have succesfully Booked the flight UK - 58"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                }
            }

            case 4:
            {
                 cout <<"________________Welcome to American Airlines_________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.AA - 008"<<endl;
                cout << "\t14-04-2024 8:00 AM 22hrs  Rs. 38000"<<endl;
                cout << "1.AA - 549"<<endl;
                cout << "\t15-04-2024 3:00 AM 22hrs  Rs. 41000"<<endl;
                cout << "1.AA - 4"<<endl;
                cout << "\t16-04-2024 11:00 PM 21hrs  Rs. 45000"<<endl;

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=38000;
                    cout<<"\nYou have successfully Booked the flight AA - 008"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 41000;
                    cout<<"\nYou have succesfully Booked the flight AA - 549"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==3)
                {
                    charges = 45000;
                    cout<<"\nYou have succesfully Booked the flight AA - 4"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                }
                }

                case 5:
                {
                     cout <<"________________Welcome to Lufthansa_________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.LUF - 511"<<endl;
                cout << "\t14-04-2024 9:00 AM 12hrs 55 min Rs. 42000"<<endl;
                cout << "1.LUF - 112"<<endl;
                cout << "\t15-04-2024 2:00 PM 11hrs 45 min  Rs. 47000"<<endl;
                cout << "1.LUF - 023"<<endl;
                cout << "\t16-04-2024 7:00 PM 11hrs 30min Rs. 41000"<<endl;

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=42000;
                    cout<<"\nYou have successfully Booked the flight LUF - 511"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 47000;
                    cout<<"\nYou have succesfully Booked the flight LUF - 112"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==3)
                {
                    charges = 41000;
                    cout<<"\nYou have succesfully Booked the flight LUF - 023"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                }
            }

            case 6:
            {
                cout <<"________________Welcome to European Airlines_________________\n"<<endl;

                cout <<" Your comfort is our Priority. Enjoy the Journey!"<<endl;

                cout <<"Following are the Flights \n"<<endl;

                cout << "1.EU - 511"<<endl;
                cout << "\t14-04-2024 9:00 AM 6hrs 55 min Rs. 40000"<<endl;
                cout << "1.EU - 005"<<endl;
                cout << "\t15-04-2024 3:00 PM 6hrs 45 min  Rs. 38000"<<endl;
                cout << "1.LUF - 024"<<endl;
                cout << "\t16-04-2024 7:00 PM 9hrs 10min Rs. 41000"<<endl;

                cout <<"\nSelect the Flight you want to book : ";
                cin>> choice;

                if(choice==1)
                {
                    charges=40000;
                    cout<<"\nYou have successfully Booked the flight EU - 511"<<endl;  
                    cout<<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==2)
                {
                    charges = 38000;
                    cout<<"\nYou have succesfully Booked the flight EU - 005"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else if (choice==3)
                {
                    charges = 41000;
                    cout<<"\nYou have succesfully Booked the flight LUF - 024"<<endl;
                    cout <<"You can go back to the menu and take the Ticket"<<endl;
                }

                else
                {
                    cout << "Invalid input , shifting to the  previous menu"<<endl;
                    flights();
                }
   
                cout << "Press any key to go back to the main menu: "<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                
                else {
                    mainMenu();
                } 
            }

            default :
                {
                    cout <<"Invalid input, Shifting you to the main menu ! "<<endl;
                    mainMenu(); 
                    break; 
                }
        }
    }
};   


float Regestration::charges ;
int Regestration::choice ;                
                    
class ticket : public Regestration , details
{
    public:
        
        void Bill()
        {
            string destinations = "";
            ofstream outf("records.txt");
            {
                outf<< "Customer ID :" << details::CID<<endl;
                outf<< "Customer Name :" << details::name<<endl;
                outf<< "Customer Gender :" << details::gender<<endl;
                outf<< "\tDescription" << endl<<endl;
                
                if(Regestration::choice==1)
                {
                    destinations = "Dubai";
                }

                else if(Regestration::choice==2)
                {
                    destinations = "Canada";
                }

                else if(Regestration::choice==3)
                {
                    destinations = "UK";
                }

                else if(Regestration::choice==4)
                {
                    destinations = "USA";
                }

                else if(Regestration::choice==5)
                {
                    destinations = "Australia";
                }

                else if(Regestration::choice==6)
                {
                    destinations = "Europe";
                }

                outf << "Destination: " << destinations << endl;
                outf<<"Flight cost : \t\t"<<Regestration::charges<<endl;
                cout<<"Customer Name :\t\t"<<name<<endl;
                
                cout << "Your ticket details have been saved to record.txt." << endl;
            }
            outf.close();
        }

        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }

            ifs.close();
        }
};





void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t         XYZ Airlines /n" << endl;
    cout << "\t_________Main Menu___________"<<endl;
    cout << "\t___________________________________________________" <<endl;       
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to Add the Customer Details      \t|"<<endl;
    cout << "\t|\t Press 2 for Flight regstration            \t|"<<endl;
    cout << "\t|\t Press 3 for Tickets and Charges            \t|"<<endl;
    cout << "\t|\t Press 4 to Exit                             \t|"<<endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________________________" <<endl;

    cout <<"Enter your choice : ";
    cin>>lchoice;

    details d;
    Regestration r;
    ticket t;

    switch(lchoice)
    {

        case 1:
            {
                cout <<"____________Customer____________\n"<<endl;
                d.information();
                cout << "Press any key to get back to the Main Menu " ;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;

            }


            case 2 :
                {
                    cout<< "__________Book a fligh using this system___________\n"<<endl;
                    r.flights();
                    break;
                }

            case 3 :
                {
                    cout <<"__________GET YOUR TICKET_________\n"<<endl;
                    t.Bill();

                    cout << "Your ticket is printed you can collect it \n"<<endl;
                    cout <<"Press 1 to display your ticket ";   

                    cin>>back;

                        if (back==1)
                        {
                            t.dispBill();
                            cout<<"Press any key to go back to main menu : ";
                            cin>>back;
                            if (back==1)
                            {
                                mainMenu();
                            }
                            else if (int back = char())
                            {
                                mainMenu();
                            }
                            else
                            {
                                mainMenu();
                            }
                            
                        }
                        else
                        {
                            mainMenu();
                        }
                        break;
                }

            case 4:
                {
                    cout << "\n\n\t_________Thank-You___________"<<endl;
                    break;
                }

                default :
                    {
                        cout <<"Invalid input , Please try again!\n"<<endl;
                        mainMenu();
                        break;
                    }        
     }      
}

int main()
{
    
    Management Mobji;
    return 0 ;
}