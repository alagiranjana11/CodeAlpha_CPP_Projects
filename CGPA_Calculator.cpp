#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class CGPA
{
    int n, i;
    char grade;
    float credit, point, totalCredit, totalPoint, cgpa;

public:

    void getData()
    {
        totalCredit = 0;
        totalPoint = 0;

        cout<<"============================";
        cout<<"\n     CGPA CALCULATOR";
        cout<<"\n============================";

        cout<<"\nEnter Number of Subjects : ";
        cin>>n;

        for(i=1;i<=n;i++)
        {
            cout<<"\nSubject "<<i;

            cout<<"\nEnter Grade (O/A+/A/B+/B/C/F) : ";
            cin>>grade;

            cout<<"Enter Credit Hours : ";
            cin>>credit;

            switch(grade)
            {
                case 'O':
                case 'o':
                    point = 10;
                    break;

                case 'A':
                    point = 9;
                    break;

                case 'a':
                    point = 9;
                    break;

                case 'B':
                    point = 8;
                    break;

                case 'b':
                    point = 8;
                    break;

                case 'C':
                case 'c':
                    point = 7;
                    break;

                case 'F':
                case 'f':
                    point = 0;
                    break;

                default:
                    point = 0;
            }

            totalCredit += credit;
            totalPoint += point * credit;
        }

        cgpa = totalPoint / totalCredit;
    }

    void display()
    {
        cout<<"\n============================";
        cout<<"\nTotal Credits : "<<totalCredit;
        cout<<"\nTotal Grade Points : "<<totalPoint;
        cout<<"\nFinal CGPA : "<<setprecision(3)<<cgpa;
        cout<<"\n============================";
    }
};

void main()
{
    clrscr();

    CGPA c;

    c.getData();
    c.display();

    getch();
}
