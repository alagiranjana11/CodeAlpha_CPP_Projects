#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

class LoginSystem
{
    char username[30], password[30];
    char user[30], pass[30];

public:

    void registerUser()
    {
        ofstream fout("users.txt", ios::app);

        cout<<"\n====== Registration ======\n";

        cout<<"Enter Username : ";
        cin>>username;

        cout<<"Enter Password : ";
        cin>>password;

        fout<<username<<" "<<password<<endl;
        fout.close();

        cout<<"\nRegistration Successful!";
    }

    void loginUser()
    {
        ifstream fin("users.txt");

        char uname[30], pword[30];
        int found = 0;

        cout<<"\n====== Login ======\n";

        cout<<"Enter Username : ";
        cin>>user;

        cout<<"Enter Password : ";
        cin>>pass;

        while(fin>>uname>>pword)
        {
            if(strcmp(user,uname)==0 && strcmp(pass,pword)==0)
            {
                found = 1;
                break;
            }
        }

        fin.close();

        if(found==1)
            cout<<"\nLogin Successful!";
        else
            cout<<"\nInvalid Username or Password!";
    }
};

void main()
{
    clrscr();

    LoginSystem l;

    int ch;

    do
    {
        cout<<"\n==========================";
        cout<<"\n LOGIN & REGISTRATION";
        cout<<"\n==========================";
        cout<<"\n1. Register";
        cout<<"\n2. Login";
        cout<<"\n3. Exit";
        cout<<"\nEnter Choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                l.registerUser();
                break;

            case 2:
                l.loginUser();
                break;

            case 3:
                cout<<"\nThank You!";
                break;

            default:
                cout<<"\nInvalid Choice!";
        }

        getch();
        clrscr();

    }while(ch!=3);
}
