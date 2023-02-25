#include<stdio.h>
int main()
{
    int hr=0,min=0,sec=0,day;
    printf("time format is HH:MM:SS\n");
    scanf("%d%d%d",&hr,&min,&sec);
    start:
    for(hr;hr<24;hr++)
    {
        for(min;min<60;min++)
        {
            for(sec;sec<60;sec++)
            {
                system("cls");
                printf("\n\n\n\t\t\t%d:%d:%d", hr, min, sec);
                {
                    if(hr<12)
                        printf(" AM");
                    else
                        printf(" PM");
                }
                sleep(1);
            }
            sec=0;
        }
        min=0;
    }
    hr=0;
    goto start;
}

