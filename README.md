# firefly
An annoying little thing, really

Here's a tiny pcb that you can stash somewhere and annoy people. Where's that chirping coming from?

![firefly photo](firefly.jpg?raw=true "assembled Firefly photo")

It uses an LED, piezo buzzer, ATTINY13 Atmel microcontroller, a very small amount of Arduino code, and a coin cell battery that should last about a week.

Battery life could be improved, with longer sleep times.

The device has but one function: sleep, then wake up periodically and blink and chirp, then go back to sleep.

You can program the chip using a pogo pin programmer, like [this one from Sparkfun](https://learn.sparkfun.com/tutorials/tiny-avr-programmer-hookup-guide/programming-in-arduino)

### schematic

![schematic](board/firefly-schematic.png?raw=true "Schematic Diagram")

### parts
Board ID | Part Number | Description | Sources
--- | --- | --- | ---
IC1 | ATTINY13A-SU | SMT Atmel Attiny 13a | Mouser
LED1 | HT-121UYG-4739 | 0603 20ma bright yellow SMT LED | Mouser
SG1 | PKMCS0909E4000-R1 | 9MM square 4KHz piezo buzzer, SMT | Mouser
R1 | 1M   | 0603 1 Meg ohm SMT resistor | Mouser, Newark, Digikey
R2 | 1300 | 1206 1.3K ohm SMT resistor | Mouser, Newark, Digikey
CR-2032 | CR-2032 | 3.3v lithium battery | Mouser, Amazon
Holder |  BAT-HLD-001 | SMT battery holder | Mouser

### PCB

Eagle CAD files are in /board in case you want to iterate

You can also [order these from OshPark](https://oshpark.com/shared_projects/t0UHeqNX)

![top layer](board/firefly-board-top.png?raw=true "Board Top")
![bottom layer](board/firefly-board-bottom.png?raw=true "Board Bottom")

