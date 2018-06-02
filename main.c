#include <stdio.h>

void _CLOCK (void);
void _Delay(int time);


#define TRUE  1
#define FALSE 0

int
      msec    =0
    , second  =0
    , minute  =5
    , hour    =17;

int
      sTimeHours_Ago
    , RESULTOPERATOR
    , RESULTsenddataserver;

int main(void)
{

    sTimeHours_Ago=20;

    while(1){

/** ############################################################
 ** resave data gas matring
 ** and save data 24 hors and save to array
*/
            RESULTOPERATOR = (sTimeHours_Ago < minute) ? TRUE : FALSE;
            switch(RESULTOPERATOR)
            {
                case TRUE:
                //printf("minute: %d\r\n",minute);

                break;

                case FALSE:

                break;
            };
/** ############################################################
 ** send data server
 ** \r\n
*/
            RESULTsenddataserver =( 58 < minute) ? TRUE : FALSE;
            switch(RESULTsenddataserver)
            {
                case TRUE:
                     printf("send data server \r\n");
                     msec   	=0;
                     second		=0;
                     minute		=0;
                break;

                case FALSE:

                break;
            };
_CLOCK();
    }
}

/* ******************** clock ********************* */
/* _________________________________________________*/
void _CLOCK (void)
{
    _Delay(10000);
    msec++;
    if(msec>=100)
    {
        msec=0;
        second++;
        if(second>59)
        {
            second=0;
            minute++;
            if(minute == 59)
            {
                minute=0;
                hour++;
                if(hour>24)
                    hour=0;
            }
       }
    }
}
/* ******************** delay ********************* */
/* ____________________________________________*/
void _Delay(int time)
{
  int i,j;

  for(i=0 ; i<time ;i++){
    for(j=0 ; j<2 ;j++)
    {}
  }
}
