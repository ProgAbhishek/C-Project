//MY FIRST DIGITAL CLOCK MMADE IN C
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int hr, min, sec;
    hr=min=sec=0;
    while(1)
    {
        system("cls");
        printf("\n\n%02d : %02d : %02d",hr,min,sec);
        fflush(stdout);
        sec++;

        if(sec==60)
        {
            min+=1;
            sec=0;
        }
        if(min==60)
        {
            hr+=1;
            min=0;
        }
        if(hr==12)
        {
         hr=0;
         min=0;
         sec=0;
        }
        sleep(1);
    }
    return 0;
}
