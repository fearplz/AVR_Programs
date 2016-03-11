// POV toy demo framework //

// ------- Preamble -------- //
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

// -------- Functions --------- //
void POVDisplay(uint8_t oneByte) {
  PORTB = oneByte;
  _delay_ms(500);
}

int main(void) {
  // -------- Inits --------- //
  DDRB = 0xff;                    /* Set up all of LED pins for output */
  // ------ Event loop ------ //
  while (1) {
    PORTB = 0b00000000;
    _delay_ms(300);
    PORTB += rand()%255+1;
    _delay_ms(300);                           
                                /* mainloop */
    /*POVDisplay(0b00001110);
    POVDisplay(0b00011000);
    POVDisplay(0b10111101);
    POVDisplay(0b01110110);
    POVDisplay(0b00111100);
    POVDisplay(0b00111100);
    POVDisplay(0b00111100);
    POVDisplay(0b01110110);
    POVDisplay(0b10111101);
    POVDisplay(0b00011000);
    POVDisplay(0b00001110);*/
  }                                                    /* end mainloop */
  return (0);
}
