#include "led.h"

static int led_state=0;

void LED_Init(void)
{
    led_state=0;
}

void LED_On(void)
{
    led_state=1;
}

void LED_Off(void)
{
    led_state=0;
}

void LED_Toggle(void)
{
    led_state=!led_state;
}

int LED_GetState(void)
{
    return led_state;
}