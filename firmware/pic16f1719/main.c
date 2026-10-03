#include "mcc.h"
#include "lcd.h"
#include "pwm2.h"
#include "tmr2.h"
#include <stdio.h>
#include <stdint.h>

#define LED_JAUNE   LATBbits.LATB3
#define LED_VERTE   LATBbits.LATB2
#define LED_ROUGE   LATBbits.LATB1

#define TMP36_CHANNEL   14      // RC2 = AN14
#define POT_CHANNEL     0       // RA0 = AN0


uint16_t Lire_ADC_Moyenne(uint8_t canal)
{
    uint32_t somme = 0;

    ADCON0bits.CHS = canal;

    for(uint8_t i = 0; i < 8; i++)
    {
        __delay_us(50);
        ADCON0bits.GO_nDONE = 1;
        while(ADCON0bits.GO_nDONE);

        somme += ((uint16_t)ADRESH << 8) | ADRESL;
    }

    return (uint16_t)(somme / 8);
}

void PWM_Rouge_Enable(void)
{
    TMR2_StartTimer();

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0;

    RB1PPS = 0x0D;   // PWM2 vers RB1

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 1;
}

void PWM_Rouge_Disable(void)
{
    PWM2_LoadDutyValue(0);

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0;

    RB1PPS = 0x00;   // RB1 redevient GPIO

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 1;

    LATBbits.LATB1 = 0;
}

void main(void)
{
    uint16_t adcTemp;
    uint16_t adcPot;

    float voltage;
    float temperature;
    float consigne;
    float seuil_rouge;

    uint16_t dutyCycle;

    char buffer[17];

    SYSTEM_Initialize();
    LCD_Initialize();
    LCD_Clear();

    ADCON1bits.ADFM = 1;

    TRISCbits.TRISC2 = 1;
    ANSELCbits.ANSC2 = 1;

    TRISAbits.TRISA0 = 1;
    ANSELAbits.ANSA0 = 1;

    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    TRISBbits.TRISB3 = 0;

    ANSELBbits.ANSB1 = 0;
    ANSELBbits.ANSB2 = 0;
    ANSELBbits.ANSB3 = 0;

    LED_JAUNE = 0;
    LED_VERTE = 0;
    LED_ROUGE = 0;
    PWM2_LoadDutyValue(0);

    LCD_GoTo(0,0);
    LCD_WriteString((const uint8_t*)"  Micro Projet  ");
    LCD_Clear();

    while(1)
{
    adcTemp = Lire_ADC_Moyenne(TMP36_CHANNEL);
    voltage = ((float)adcTemp * 5.0) / 1023.0;
    temperature = (voltage - 0.5) * 100.0;

    adcPot = Lire_ADC_Moyenne(POT_CHANNEL);
    consigne = 15.0 + (((float)adcPot * 30.0) / 1023.0);

    seuil_rouge = consigne * 1.10;

    LED_VERTE = 0;
    LED_JAUNE = 0;
    LED_ROUGE = 0;

    if(temperature < consigne)
    {
        PWM_Rouge_Disable();
        LED_VERTE = 1;
    }
    else if(temperature < seuil_rouge)
    {
         uint16_t dutyCycle;
        float depassement;

        LED_VERTE = 0;
        LED_JAUNE= 0;

        PWM_Rouge_Enable();

        depassement = temperature - seuil_rouge;

        if(depassement > 5.0)
            depassement = 5.0;

        dutyCycle = (uint16_t)((depassement / 5.0) * 1023.0);

        PWM2_LoadDutyValue(dutyCycle);
     
    }
    else
    {
        PWM_Rouge_Disable();
        LED_JAUNE = 1;
    }

    LCD_Clear();

    LCD_GoTo(0,0);
    sprintf(buffer,"T=%.1fC C=%.1fC",temperature,consigne);
    LCD_WriteString((const uint8_t*)buffer);

    LCD_GoTo(1,0);

    if(temperature < consigne)
        LCD_WriteString((const uint8_t*)"LED VERTE");
    else if(temperature < seuil_rouge)
        LCD_WriteString((const uint8_t*)"ROUGE PWM" );
    else
        LCD_WriteString((const uint8_t*)"LED JAUNE");

    __delay_ms(500);
}
    }
