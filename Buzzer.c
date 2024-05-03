#include <pic18f4550.h>		

#define Buzzer LATAbits.LATA5  		
unsigned int count = 0;

void interrupt Timer1_ISR()
{
    if(TMR1IF==1)
    {
    TMR1L = 0x20;
    TMR1H = 0xD1;
    count ++;
 
    if (count >= 1000) 
    {
        Buzzer = ~Buzzer;  
        count = 0;  
    }
    TMR1IF = 0; 
    }
}

void main()
{
    TRISB=0;  			
    TRISAbits.TRISA5 = 0;       
    GIE=1;                      
    PEIE=1;                     
    TMR1IE=1;                   
    TMR1IF=0;
    T1CON=0x80;         
    TMR1L = 0x20;
    TMR1H = 0xD1;
    TMR1ON=1;

    while(1);
}
