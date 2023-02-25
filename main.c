/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F45K20
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"
void clearALL()
{
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(5);
}

void makeH()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(9);   
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    clearALL();
}

void makeE()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3); 
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(12);   
    
    clearALL();
}

void makeL()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);     
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(12);  
    
    clearALL();
}

void makeN()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);     

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3); 
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);  
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);  
    
    clearALL();
    
}

void makeS()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);      
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(9); 
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3); 
    
    clearALL();
}

void makeA()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);   
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(9);
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);  
    
    clearALL();
}

void makeI()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(6); 
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(6); 
    
    clearALL();
}

void makeO()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(9);
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    clearALL();
}

void makeT()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(6);      
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(6);  
    
    clearALL();
}

void makeW()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);     
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);   
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);   
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3); 
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(1); 
    
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);       
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);   
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);     
    

    clearALL();
    
}

void makeM()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(2);     
    
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(2);   
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(2);   
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(2);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(2);     
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(2);     
     

    clearALL();
    
}

void makeY()
{
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);     
     
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);       

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);  
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 1;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);    
    
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1);   
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1); 
        LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(1); 
    
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);  
    
    clearALL();    
}

void makeQuest()
{
    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);  

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);  
 
    LATBbits.LATB4 = 1;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 1;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 1;    
    __delay_ms(3);  

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 1;
    LATBbits.LATB2 = 1;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 1;
    LATCbits.LATC7 = 1;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3); 

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 1;
    LATDbits.LATD6 = 1;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;    
    __delay_ms(3);
    
    clearALL();
    clearALL();
    clearALL();
    clearALL();
}

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    

    LATBbits.LATB4 = 0;
    LATBbits.LATB5 = 0;
    LATBbits.LATB2 = 0;
    LATBbits.LATB0 = 0;
    LATDbits.LATD6 = 0;
    LATDbits.LATD5 = 0;
    LATCbits.LATC7 = 0;
    LATCbits.LATC4 = 0;
    LATDbits.LATD2 = 0;
    LATDbits.LATD3 = 0;
    
    while (1)
    {
     makeQuest();   
    }
    
    int k = 0;
    while (1)
    {
        for (k=0;k<30;k++)
        {
            makeH();
            makeE();
            makeL();
            makeE();
            makeE();
            makeN();
            __delay_ms(50);
        }
        __delay_ms(500);
        for (k=0;k<30;k++)
        {
            makeI();
            makeS();
            __delay_ms(50);
        }       
        __delay_ms(500);
        for (k=0;k<30;k++)
        {
            makeH();
            makeO();
            makeT();
            __delay_ms(50);
        }     
        __delay_ms(500);
        for (k=0;k<30;k++)
        {
            makeW();
            makeE();
            makeE();
            makeS();
            __delay_ms(50);
        }   
        __delay_ms(500);
        for (k=0;k<30;k++)
        {
            makeM();
            makeY();
            __delay_ms(50);
        }   
        __delay_ms(500);
        for (k=0;k<30;k++)
        {
            makeM();
            makeE();
            makeI();
            makeS();
            makeI();
            makeE();
            __delay_ms(50);
        }   
        __delay_ms(500);
    }
}


/**
 End of File
*/