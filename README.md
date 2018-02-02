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
![top layer](board/firefly-board-top.png?raw=true "Board Top")
![bottom layer](board/firefly-board-bottom.png?raw=true "Board Bottom")

