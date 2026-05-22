#include "unity.h"
#include "led.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_LED_Should_Be_Off_After_Init(void)
{
    LED_Init();

    TEST_ASSERT_EQUAL(0, LED_GetState());
}

void test_LED_Should_Turn_On(void)
{
    LED_On();

    TEST_ASSERT_EQUAL(1, LED_GetState());
}

void test_LED_Should_Turn_Off(void)
{
    LED_On();
    LED_Off();

    TEST_ASSERT_EQUAL(0, LED_GetState());
}

void test_LED_Should_Toggle(void)
{
    LED_Off();

    LED_Toggle();

    TEST_ASSERT_EQUAL(1, LED_GetState());
}