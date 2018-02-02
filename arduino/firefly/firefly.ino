
/**
 * firefly
 * 
 * ATTINY13 code for a firefly
 * 
 * Inspired by & based on https://www.seanet.com/~karllunt/fireflyLED.html
 * 
 * 
 */
 
#include <avr/interrupt.h>
#include <avr/sleep.h>
 
#define LED 4 //3
#define PIEZO 1 //0
#define CLOCK_ADJ 5
#define PIEZO_INTERVAL 165 // us
#define PIEZO_COUNT 50 // cycles
#define LIGHT_TIME 250 // ms
#define LIGHT_BETWEEN 100 // ms
#define DARK_MAXTIME 9 // seconds
#define DARK_MINTIME 3 // seconds


void setup() {                

  pinMode(LED, OUTPUT);
  pinMode(PIEZO, OUTPUT);

}


void loop() {
  cricket();
}

ISR( WDT_vect ) {
  // wake the heck up
}

void cricket() {
   
  // double-blink
  chirpled();
  delay( LIGHT_BETWEEN * CLOCK_ADJ );
  chirpled();
  
  // now go to "sleep"
  sleepBetweenChirps();

}

void chirpled() {
  digitalWrite( LED, HIGH );
  for ( int i = 0; i < PIEZO_COUNT; i++ ) {
    digitalWrite( PIEZO, HIGH ); 
    delayMicroseconds( PIEZO_INTERVAL * CLOCK_ADJ ); 
    digitalWrite( PIEZO, LOW ); 
    delayMicroseconds( PIEZO_INTERVAL * CLOCK_ADJ );
  }
  delay( LIGHT_TIME * CLOCK_ADJ );
  digitalWrite( LED, LOW );

}

void sleepBetweenChirps() {

  // add this if you want to use light detection to adjust the sleep time
  //delay( 1000 * DARK_MAXTIME * CLOCK_ADJ );
    
  // prescale timer to 8s
  WDTCR |= ( 1 << WDP3 ) | ( 1 << WDP0 );
    
  // enable watchdog timer interrupts
  WDTCR |= ( 1 << WDTIE );
    

    
  // go to sleep
  set_sleep_mode( SLEEP_MODE_PWR_DOWN );
  
  //sleep_bod_disable();
  // enable global interrupts
  sei();
  sleep_mode();
  sleep_disable();
  
  
}
