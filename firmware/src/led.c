#include "led.h"

static LED_State led_state = LED_STATE_OFF;

/**
 * @brief Initializes the LED driver and sets the LED state to off.
 */
void LED_Init(void)
{
    led_state = LED_STATE_OFF;
}

/**
 * @brief Turns the LED on by setting the internal state to LED_STATE_ON.
 */
void LED_On(void)
{
    led_state = LED_STATE_ON;
}

/**
 * @brief Turns the LED off by setting the internal state to LED_STATE_OFF.
 */
void LED_Off(void)
{
    led_state = LED_STATE_OFF;
}

/**
 * @brief Cycles the LED through three states: OFF -> ON -> BLINK -> OFF.
 */
void LED_Toggle(void)
{
    if (led_state == LED_STATE_OFF)
        led_state = LED_STATE_ON;
    else if (led_state == LED_STATE_ON)
        led_state = LED_STATE_BLINK;
    else
        led_state = LED_STATE_OFF;
}

/**
 * @brief Returns the current state of the LED.
 *
 * @return LED_STATE_OFF (0), LED_STATE_ON (1), or LED_STATE_BLINK (2).
 */
int LED_GetState(void)
{
    return led_state;
}
