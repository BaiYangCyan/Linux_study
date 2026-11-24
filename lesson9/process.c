#include "process.h"


void process_v1()
{
    int cut = 0;
    char buffer[bufferNum];
    memset(buffer, '\0', bufferNum);
    const char *Load = "|/-\\";
    int len = strlen(Load);
    while (cut <= 100)
    {
        printf("[%-100s][%d%%][%c]\r", buffer, cut, Load[cut % len]);
        fflush(stdout);
        buffer[cut] = symbol;
        usleep(50000);
        cut++;
    }
    printf("\n");
}

void  process_v2(int totle,double current)
{
    char buffer[bufferNum];
    memset(buffer, '\0', bufferNum);

    const char *Load = "|/-\\";
    int len = strlen(Load);

    static int cut=0;

    double current_t=((current/totle))*100;

    int num=(int)((current/totle)*100);
    if (num > bufferNum - 1) num = bufferNum - 1;
    for(int i=0;i<num;i++)
    {
        buffer[i]=symbol;
    }

    cut%=len;

    printf("[%-100s][%.1f%%][%c]\r",buffer,current_t,Load[cut]);
    
    cut++;
    fflush(stdout);
    
    
}

void DownLode()
{
    double current_t=0.0;
    while(totleMB>current_t)
    {
        process_v2(totleMB,current_t);

        current_t+=speedMB;
        if(current_t>=totleMB)
        {
            current_t=totleMB;
        }
        
        usleep(80000);
    }
    printf("\r\n");
}


