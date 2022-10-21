# Board Proposal
### For this part of the lab we were supposed to implement a basic function and create something fun on top of it

The code used to flash an LED on keystroke looked like

```
int main() {
    const uint LED_PIN = 22;      # Stemma QT used PIN 22
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        int c = getchar_timeout_us (5000);
        if(c!=-1){
          gpio_put(LED_PIN, 1);    
          sleep_ms(250);
          gpio_put(LED_PIN, 0);
          sleep_ms(250);
        }
    }
} 
```

![ezgif com-gif-maker (1)](https://user-images.githubusercontent.com/36339255/197116371-eb131e26-2133-4850-b566-8a40df900958.gif)

## The Plan
Well keystrokes and flashing lights ring only one bell - MORSE CODE!!

So in this part of the lab, I plan to make a cool color blind friendly morse code. We can preset the colors based on the color blindness of a person so that the colors they can't distinguish never appear (thanks to the 255<sup>3</sup> colors we can create on an RGB LED).
Since each keystroke can be recorded, we can simply map it to the morse code in a particular color and it can be like a teaching tool used to teach morse code to color blind children so as to make this neat little activity a bit more inclusive for all.

## The Tools
1. RGB LED like the NeoPixel
2. A resistor which doesn't kill the lights

## The Mystery
1. Will a Morse code be created in any color which is as distinct?
2. Will the dots and dashes be significantly distinguishable from each other?
3. How to set the timing to make the process seamless?

## The Road
What lies ahead, only time will unravel,
The course is moving too fast, wish for some friction from mortar and gravel 
