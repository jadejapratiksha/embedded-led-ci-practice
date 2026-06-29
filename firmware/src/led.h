#ifndef LED_H
#define LED_H

/**
 * @brief Represents the possible states of the LED.
 */
typedef enum {
    LED_STATE_OFF   = 0, /**< LED is off. */
    LED_STATE_ON    = 1, /**< LED is on. */
    LED_STATE_BLINK = 2  /**< LED is in blink/strobe state. */
} LED_State;

/**
 * @brief Initializes the LED driver and sets the LED state to off.
 */
void LED_Init(void);

/**
 * @brief Turns the LED on by setting the internal state to 1.
 */
void LED_On(void);

/**
 * @brief Turns the LED off by setting the internal state to 0.
 */
void LED_Off(void);

/**
 * @brief Toggles the LED state between on (1) and off (0).
 */
void LED_Toggle(void);

/**
 * @brief Returns the current state of the LED.
 *
 * @return LED_STATE_OFF (0), LED_STATE_ON (1), or LED_STATE_BLINK (2).
 */
int LED_GetState(void);


#endif
