#include <flipper/flipper.h>

void blink_led(void) {
    lf_set_pin_mode(LF_LED_RED, OUTPUT); // set the LED pin to output mode
    while (1) {
        lf_set_pin_state(LF_LED_RED, 1); // turn on the LED
        lf_delay(500); // wait for 500 milliseconds
        lf_set_pin_state(LF_LED_RED, 0); // turn off the LED
        lf_delay(500); // wait for 500 milliseconds
    }
}

int main(void) {
    lf_return_t ret;
    ret = lf_invoke("lk", "configure", NULL); // configure the Link kernel
    if (ret < 0) {
        lf_error("Failed to configure the Link kernel: %s\n", lf_error_string(ret));
        return -1;
    }
    blink_led();
    return 0;
}
