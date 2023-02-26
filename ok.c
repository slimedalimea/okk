#include <flipper.h>
int led_red_pin = 25;   // choose pin 25 for the red LED
int led_green_pin = 27; // choose pin 27 for the green LED
int led_blue_pin = 29;  // choose pin 29 for the blue LED

/* Declare a function to blink the RGB LED */
void blink_led(void) {
    while (1) { // loop indefinitely
        lf_set_pin_state(led_red_pin, 1);   // turn on the red LED
        lf_set_pin_state(led_green_pin, 0); // turn off the green LED
        lf_set_pin_state(led_blue_pin, 0);  // turn off the blue LED
        lf_delay(500); // wait for 500 milliseconds
        lf_set_pin_state(led_red_pin, 0);   // turn off the red LED
        lf_set_pin_state(led_green_pin, 1); // turn on the green LED
        lf_set_pin_state(led_blue_pin, 0);  // turn off the blue LED
        lf_delay(500); // wait for 500 milliseconds
        lf_set_pin_state(led_red_pin, 0);   // turn off the red LED
        lf_set_pin_state(led_green_pin, 0); // turn off the green LED
        lf_set_pin_state(led_blue_pin, 1);  // turn on the blue LED
        lf_delay(500); // wait for 500 milliseconds
    }
}
