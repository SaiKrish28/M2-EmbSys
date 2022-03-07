#include <avr/io.h>
#include<util/delay.h>
#include "Step1.h"
#include "Step2.h"
#include "Step3.h"


int main(void)
{
    initialise();
     InitADC();

    while(1)
    {
        if(occupied)
        {
            PORTB|=(1<<PB0);
            _delay_ms(200);

            config_timer();
            pwm_output();
            _delay_ms(200);

        }

        else
        {
           PORTB&=~(1<<PB0);
          _delay_ms(200);
          OCR1A = 0; //PWM wave 0
        }
    }
    return 0;
}