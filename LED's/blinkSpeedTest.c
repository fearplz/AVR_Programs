                                                       /* Blinker Demo */

// ------- Preamble -------- //
#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */


int main(void) {

  // -------- Inits --------- //
  DDRB |= 0b0000001;            /* Data Direction Register B:
                                   writing a one to the bit
                                   enables output. */
  int counter = 0;

  // ------ Event loop ------ //
  while (1) {
    PORTB = 0b00000001;         /* Turn on first LED bit/pin in PORTB */
    if(counter%10<5) {
        _delay_ms(300);
    }
    else {
        _delay_ms(600);
    }
    PORTB = 0b00000000;          /* Turn off all B pins, including LED */                                         /* wait */
    if(!(counter%10<5)) {
        _delay_ms(300);
    }
    else {
        _delay_ms(600);
    }
    counter++;
  }                                                  /* End event loop */
  return (0);                            /* This line is never reached */
}
