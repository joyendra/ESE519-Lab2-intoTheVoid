# LAB 2B all parts explained

## 001 
We were supposed to toggle the QTPy's Neopixel using the onboard `BOOT` button. For this, the code initialized the `POWER_PIN` and `BOOT_PIN` and using GPIO toggled the status of the former based on the latter.

## 002
Continuing from part 1, the `BOOT` button updates a register and writes to it

## 003
Now that we could flash the neopixel based on button input, part 3 required us to record these keystokes and replay them on the neopixel. For this, we initialized an array which would store the changes for a fixed resolution and used the same changes from 1 to 0 or 0 to 1 in order to replicate the button presses.

## 004
Since the file was stored on PC, the timing could be controlled using macros. A specified key was used to loop, play, fast forward or slow down the data.

## 005
This part moved away from the sequencer to the I2C communication between the APDS and QTPy. The waveform between SCL and SDA pins were observed on the oscilloscope.

# 006
Moving on from an oscilloscope, we wanted to use the Pio's analyzer capabilities using logic analyzer. The logic analyzer pio example was used to read the I2C trace whenever the `BOOT` button was pressed

# 007
The pio sequencer used components of `.pio` file which used the IN method to read values from a GPIO pin (BOOT in this case) to the ISR. From here, the register value of ISR had to move to the FIFO in order to reach the SM of the pio. Finally, the pio_get_sm method fetched the values to the C code which could now alter the neopixel's color based on previous parts.

# 008
Since we could now access the SM, we could simply use the pio's capabilites to implement the I2C protocol and fetch the raw data value from the sensor to Pio

# 009
On getting the sensor values, we used the multi-pio setup to 
  1. Fetch sensor data from APDS;
  2. Relay that to Neopixel
The neopixel's color is based on the highest component between red, green and blue which shines on the sensor.

# 010
The custom board which was submitted as a part of this lab now uses pio capabilities of the QTPy board to relay the morse code data. 
  
