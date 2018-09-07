#include <iostream>
#include <cstdlib>
using namespace std;
class general
{
protected:
    char f_name[20];
    char l_name[20];
    int age;
    char gender[10];
public:
    void get_gen()
    {
        cout<<"\nENTER FIRST NAME : ";
        cin>>f_name;
        cout<<"ENTER LAST NAME : ";
        cin>>l_name;
        cout<<"ENTER AGE : ";
        cin>>age;
        cout<<"ENTER GENDER male / female : ";
        cin>>gender;
    }
    void put_gen()
    {
        cout<<"\nNAME : "<<f_name<<" "<<l_name;
        cout<<"\nAGE : "<<age;
    }

};
class crew : public general
{
protected:
    string desig;
    long long con_no;
    int emp_id;
    int j_d;
    int j_m;
    int j_y;
    string crew_remark;
public:
    void get_j_date()
    {
        cout<<"ENTER JOINING DATE OF CREW MEMBER";
        cout<<"\nDD : ";
        cin>>j_d;
        cout<<"MM : ";
        cin>>j_m;
        cout<<"YY : ";
        cin>>j_y;
    }
    void put_j_date()
    {
        cout<<"\nJOINING DATE : ";
        cout<<j_d<<" : "<<j_m<<" : "<<j_y;
    }
    void get_crew_details (int crew_no)
    {
        cout<<"REGISTRATION NUMBER : "<<crew_no;
        cout<<"\nENTER EMPLOY ID : ";
        cin>>emp_id;
        cout<<"ENTER DESIGNATION : ";
        cin>>desig;
        cout<<"ENTER CONTACT NUMBER : ";
        cin>>con_no;
        get_j_date();
        cout<<"ENTER REMARK (if any) : ";
        cin>>crew_remark;
    }
    void put_crew_details (int crew_no_e)
    {
        cout<<"\nREGISTRATION NUMBER : "<<crew_no_e;
        cout<<"\nEMPLOY ID : ";
        cout<<emp_id;
        cout<<"\nDESIGNATION : ";
        cout<<desig;
        cout<<"\nCONTACT NUMBER : ";
        cout<<con_no;
        put_j_date();
        cout<<"\nREMARK : ";
        cout<<crew_remark;
    }
};
class client : public general
{
protected:
    int seat;                                //general client info
    long double client_id;
    long double ph_no;
    string from;
    string to;
public:
    void get_gen_client(int pass_id)
    {
        cout<<"ENTER YOUR SEAT NUMBER : ";
        cin>>seat;
        cout<<"YOUR CLIENT ID : ";
        cout<<pass_id;
        cout<<"\nENTER YOUR PHONE NUMBER : ";
        cin>>ph_no;
        cout<<"ENTER FROM AIRPORT : ";
        cin>>from;
        cout<<"ENTER TO AIRPORT : ";
        cin>>to;
    }
    void put_gen_client(int pass_id_e)
    {
        cout<<"\nSEAT NUMBER : ";
        cout<<seat;
        cout<<"\nCLIENT ID : ";
        cout<<pass_id_e;
        cout<<"\nPHONE NUMBER : ";
        cout<<ph_no;
        cout<<"\nBOARDING AIRPORT : ";
        cout<<from;
        cout<<"\nDESTINATION AIRPORT : ";
        cout<<to;
    }

protected:
    int starter;                                //for food booking
    int main;
    int bread;
    int desert;
    int drink;
    int snacks;
    string food_remark;
public:
    void get_food ()                           //to get food details
    {
        cout<<"\nPLEASE PROVIDE YOUR FOOD DETAILS";
        cout<<"\nTO SKIP ANY CATEGORY OF FOOD PRESS 9";
        cout<<"\nSELECT YOUR STARTER";
        cout<<"\n1.PANEER CHILLI\n2.PANEER KEBAB\n3.MANCHURIAN\n4.PASTA\n5.GREEN SALAD";
        cout<<"\nENTER YOUR ITEM NUMBER : ";
        cin>>starter;
        cout<<"SELECT YOUR MAIN";
        cout<<"\n1.PANEER BHURJI\n2.PANEER TAWA\n3.KOLHAPURI\n4.MUSHROOM MASALA\n5.MIX VEGIES";
        cout<<"\nENTER YOUR ITEM NUMBER : ";
        cin>>main;
        cout<<"SELECT YOUR BREAD";
        cout<<"\n1.ROTI\n2.BUTTER ROTI\n3.NAAN\n4.BUTTER NAAN\n5.TANDOORI\n6.BUTTER TANDOORI";
        cout<<"\nENTER YOUR ITEM NUMBER : ";
        cin>>bread;
        cout<<"SELECT YOUR DRINK";
        cout<<"\n1.LASSI\n2.BUTTER MILK\n3.LEMON SODA\n4.COKE\n5.SIKANGI";
        cout<<"\nENTER YOUR ITEM NUMBER : ";
        cin>>drink;
        cout<<"SELECT YOUR SNACKS";
        cout<<"\n1.FRENCH FRIES\n2.CHEESE BALLS\n3.MASALA BALLS\n4.BURGER\n5.VEG ROLLS";
        cout<<"\nENTER YOUR ITEM NUMBER : ";
        cin>>snacks;
    }
    void put_food ()                          //to put food details
    {
        cout<<"\n"<<starter<<":";
        if(starter==1)
            cout<<"PANEER CHILLI";
        if(starter==2)
            cout<<"PANEER KEBAB";
        if(starter==3)
            cout<<"MANCHURIAN";
        if(starter==4)
            cout<<"PASTA";
        if(starter==5)
            cout<<"GREEN SALAD";
        cout<<"\n"<<main<<":";
        if(main==1)
            cout<<"PANEER BHURJI";
        if(main==2)
            cout<<"PANEER TAWA";
        if(main==3)
            cout<<"KOLHAPURI";
        if(main==4)
            cout<<"MUSHROOM MASALA";
        if(main==5)
            cout<<"MIX VEGIES";
        cout<<"\n"<<bread<<":";
        if(bread==1)
            cout<<"ROTI";
        if(bread==2)
            cout<<"BUTTER ROTI";
        if(bread==3)
            cout<<"NAAN";
        if(bread==4)
            cout<<"BUTTER NAAN";
        if(bread==5)
            cout<<"TANDOORI";
        if(bread==6)
            cout<<"BUTTER TANDOORI";
        cout<<"\n"<<drink<<":";
        if(drink==1)
            cout<<"LASSI";
        if(drink==2)
            cout<<"BUTTER MILK";
        if(drink==3)
            cout<<"LEMON SODA";
        if(drink==4)
            cout<<"COKE";
        if(drink==5)
            cout<<"SIKANGI";
        cout<<"\n"<<snacks<<":";
        if(snacks==1)
            cout<<"FRENCH FRIES";
        if(snacks==2)
            cout<<"CHEESE BALLS";
        if(snacks==3)
            cout<<"MASALA BALLS";
        if(snacks==4)
            cout<<"BURGER";
        if(snacks==5)
            cout<<"VEG ROLLS";
    }

protected:
    int transport;                          //transport
    string to_city;
    string add;
public:
    void get_trans()
    {
        cout<<"TO GET A TRANSPORTATION FACILITY FROM DESTINATION AIRPORT PRESS 1 ";
        cout<<"\nTO SKIP TRANSPORTATION BOOKING PRESS 2";
        cout<<"\nENTER YOUR OPTION : ";
        cin>>transport;
        if(transport == 1)
        {
          cout<<"\nWELCOME TO TRANSPORT BOOKING";
          cout<<"\nENTER THE CITY NAME TO WHERE YOU WANT TO GO FROM YOUR DESTINATION AIRPORT : ";
          cin>>to_city;
          cout<<"\nENTER THE EXACT ADDRESS WHERE YOU WANT TO GO : ";
          cin>>add;
        }
    }
    void put_trans()
    {
        cout<<"\nTRANSPORTATION DETAILS OF PASSENGER : ";
        if(transport == 1)
        {
            cout<<"\nTO CITY : ";
            cout<<to_city;
            cout<<"\nADDRESS : ";
            cout<<add;
        }
        else
        {
            cout<<"\nNO NEED OF TRANSPORTATION FACILITY";
        }
    }

protected:
    int food;                               //feedback
    int timing;
    int cleaniness;
    int service;
    int transport_f;
    string feedback_remark;
public:
    void get_feedback(int pass_id_o)
    {
        system("cls");
        cout<<"YOUR CLIENT ID : "<<pass_id_o;
        cout<<"\nPLEASE PROVIDE YOUR VALUABLE FEEDBACK ON SCALE OF 0-10";
        cout<<"\nFOR FOOD SERVED BY US : ";
        cin>>food;
        cout<<"FOR TIMING : ";
        cin>>timing;
        cout<<"FOR CLEANINESS : ";
        cin>>cleaniness;
        cout<<"FOR OUR SERVICES : ";
        cin>>service;
        cout<<"FOR TRANSPORTATION BOOKING FACILITY : ";
        cin>>transport_f;
        cout<<"PLEASE PROVIDE VALUABLE FEEDBACK REMARK (if any) : ";
        cin>>feedback_remark;
    }
    void put_feedback()
    {
        cout<<"\nFEEDBACK DETAILS ARE GIVEN BELOW OUT OF 10";
        cout<<"\nFOR FOOD SERVED : ";
        cout<<food;
        cout<<"\nFOR TIMING OF FLIGHT : ";
        cout<<timing;
        cout<<"\nFOR CLEANINESS : ";
        cout<<cleaniness;
        cout<<"\nFOR SERVICES : ";
        cout<<service;
        cout<<"\nFOR TRANSPORTATION BOOKING FACILITY : ";
        cout<<transport_f;
        cout<<"\nFEEDBACK REMARK : ";
        cout<<feedback_remark;
    }
};
int main ()
{
    crew c[20];
    client p[20];
    int m_login,crew_no=1,pass_id=1;
    again1:
    system("cls");                            //home page
    cout<<"TO LOGIN AS CREW MEMBER PRESS 1";
    cout<<"\nTO LOGIN AS CLIENT PRESS 2";
    cout<<"\nENTER YOUR CHOICE : ";
    cin>>m_login;
    system("cls");
    if (m_login == 1)    //this is crew member section
    {
        string pass_in,pass_o="crew";
        again2:
        cout<<"ENTER YOUR PASSWORD TO LOGIN AS A CREW MEMBER";
        cout<<"\nPASSWORD : ";
        cin>>pass_in;
        system("cls");
        if(pass_in == pass_o) //crew will login here
        {
            cout<<"SUCESSFULLY LOG IN AS A CREW MEMBER";
        chome:
            system("cls");
            int c_choice;
            cout<<"\nTO VIEW PASSENGER DETAILS PRESS 1";
            cout<<"\nTO VIEW CREW MEMBER DETAILS PRESS 2";
            cout<<"\nTO ADD A CREW MEMBER PRESS 3";
            cout<<"\nTO LOG OUT FROM CREW SECTION PRESS 4";
            cout<<"\nENTER YOUR OPTION : ";
            cin>>c_choice;
            if(c_choice==1)
            {
                int pass_id_e;
                system("cls");
                cout<<"ENTER REGISTRATION NUMBER OF PASSENGER : ";
                cin>>pass_id_e;
                system("cls");
                p[pass_id_e].put_gen();
                p[pass_id_e].put_gen_client(pass_id_e);
                p[pass_id_e].put_food();
                p[pass_id_e].put_trans();
                p[pass_id_e].put_feedback();
                system("pause>nul");
                goto chome;
            }
            if(c_choice==2)
            {
                int crew_no_e;
                system("cls");
                cout<<"ENTER REGISTRATION NUMBER OF CREW MEMBER : ";
                cin>>crew_no_e;
                system("cls");
                c[crew_no_e].put_gen();
                c[crew_no_e].put_crew_details(crew_no_e);
                system("pause>nul");
                goto chome;
            }
            if(c_choice==3)
            {
                system("cls");
                c[crew_no].get_gen();
                c[crew_no].get_crew_details(crew_no);
                crew_no++;
                system("cls");
                goto chome;
            }
            if(c_choice==4)
                goto again1;
            else
            {
                goto chome;
            }
        }
        else //if password entered by crew is wrong
        {
            int inc_pass;
            again3:
            system("cls");
            cout<<"INCORRECT PASSWORD ENTERED";
            cout<<"\nTO RETRY PRESS 1";
            cout<<"\nTO GO TO HOMEPAGE PRESS 2";
            cout<<"\nENTER YOUR CHOICE : ";
            cin>>inc_pass;
            if(inc_pass == 1) //to retry
            {
                system("cls");
                goto again2;
            }
            else if (inc_pass == 2) //to go to homepage
            {
                system("cls");
                goto again1;
            }
            else //for wrong option
            {
                cout<<"PLEASE ENTER CORRECT OPTION";
                goto again3;
            }
        }

    }
    if (m_login == 2) //this is client section
    {
    re:
        int option;
        cout<<"YOU ARE IN CLIENT SECTION NOW";
        cout<<"\nTO PROVIDE FEEDBACK PRESS 2";
        cout<<"\nTO REGISTER AS A NEW PASSENGER PRESS 1";
        cout<<"\nENTER OPTION : ";
        cin>>option;
        if(option==2)
        {
        int pass_id_o;
        cout<<"ENTER YOUR CLIENT ID : ";
        cin>>pass_id_o;
        p[pass_id_o].get_feedback(pass_id_o);
        goto again1;
        }
        if(option==1)
        {
        system("cls");
        p[pass_id].get_gen();
        p[pass_id].get_gen_client(pass_id);
        system("cls");
        p[pass_id].get_food();
        system("cls");
        p[pass_id].get_trans();
        pass_id++;
        goto again1;
        }
        else
            goto re;
    }
    else //if wrong option is entered on home screen
    {
        goto again1;
    }
}

