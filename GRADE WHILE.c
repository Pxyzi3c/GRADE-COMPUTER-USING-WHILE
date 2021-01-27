#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   int studno, tnosp=0, tnosf=0, tnosprocessed=0;
    float mgrade, fgrade, agrade;
    char studfname[15], studlname[15], ans;

    do{
        p("\n\t\t\tPUP INSTITUTE OF TECHNOLOGY");
        p("\n\t\t\tPUREZA ST. STA. MESA, MANILA");
        p("\n\nSTUDENT NO.: ");
        s("%d",&studno);
        p("STUDENT NAME: ");
        s("%s %s",&studfname,&studlname);
        p("MIDTERM GRADE: ");
        s("%f",&mgrade);
        p("FINAL GRADE: ");
        s("%f",&fgrade);
        p("AVERAGE GRADE: %.2f",agrade=(mgrade+fgrade)/2);
        if(agrade<=3.00){
            p("\nREMARK: PASSED");
            tnosp=tnosp+1;
        }
        else if(agrade>3.00){
            p("\nREMARK: FAILED");
            tnosf=tnosf+1;
        }
        tnosprocessed=tnosf+tnosp;
        p("\n\nPROCESS ANOTHER? (Y/N): ");
        s("%s",&ans);
    }while(ans=='Y'||ans=='y');
    p("\nTOTAL NO. OF STUDENTS PASSED: %d", tnosp);
    p("\nTOTAL NO. OF STUDENTS FAILED: %d", tnosf);
    p("\nTOTAL NO. OF STUDENTS PROCESSED: %d", tnosprocessed);
    getch();
    return 0;
}




/*1.

#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

HARVY JONES PONTILLAS DICT 1-2

int main()
{   char fname[15],lname[15], ans;
    int cstatus;

    do{
        p("\n\t\t\t\tCIVIL STATUS CHECKER");
        p("\n\nENTER YOUR NAME: ");
        s("%s %s", &fname,&lname);
        p("SELECT YOUR CIVIL STATUS");
        p("\n1 - SINGLE, 2 - MARRIED, 3 - ANNULED, 4 - SEPARATED, 5 - WIDOW: ");
        s("%d", &cstatus);
        if(cstatus==1)
            p("\nHI, %s %s YOU ARE SINGLE.", fname, lname);
        else if(cstatus==2)
            p("\nHI, %s %s YOU ARE MARRIED.", fname, lname);
        else if(cstatus==3)
            p("\nHI, %s %s YOU ARE ANNULED.", fname, lname);
        else if(cstatus==4)
            p("\nHI, %s %s YOU ARE SEPARATED.", fname, lname);
        else if(cstatus==5)
            p("\nHI, %s %s YOU ARE WIDOW.", fname, lname);
        else
            p("\nINVALID ENTRY!");
        p("\n\n\t DO YOU WANT TO CONTINUE? (TYPE Y OR N): ");
        s("%s", &ans);
    }while(ans=='Y'||ans=='y');
    p("\n\n\t\t\t THANK YOU FOR USING THIS PROGRAM");

    getch();
    return 0;
}*/
