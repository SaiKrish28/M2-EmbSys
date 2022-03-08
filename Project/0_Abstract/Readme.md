## Seat Temperature control automation

## Description

This is used to control the temperature inside a vehicle. Whenever the user sits inside the car, the sensor gets activated. After that, the user gets access to turn on the heater. Temperature will be monitored by the temperature sensor and the analog value will be sent to microcontroller,Atmega328


## Working

The working is demonstrated using a simuation software called SimulIDE.

When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.   
Then the analog input from the temperature sensor is received and digitized using ADC.   
The digitized temperature input is visualized using Pulse Width Modulation.  
