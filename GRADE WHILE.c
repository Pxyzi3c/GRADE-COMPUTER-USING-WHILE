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
