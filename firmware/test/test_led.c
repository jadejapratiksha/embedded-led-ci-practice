#include "unity.h"
#include "led.h"

/**
 * @brief Unity setUp hook — runs before each test case.
 */
void setUp(void)
{
}

/**
 * @brief Unity tearDown hook — runs after each test case.
 */
void tearDown(void)
{
}

/**
 * @brief Verifies that the LED state is 0 (off) immediately after initialization.
 */
void test_LED_Should_Be_Off_After_Init(void)
{
    LED_Init();

    TEST_ASSERT_EQUAL(0, LED_GetState());
}

/**
 * @brief Verifies that calling LED_On sets the LED state to 1.
 */
void test_LED_Should_Turn_On(void)
{
    LED_On();

    TEST_ASSERT_EQUAL(1, LED_GetState());
}

/**
 * @brief Verifies that calling LED_Off after LED_On returns the LED state to 0.
 */
void test_LED_Should_Turn_Off(void)
{
    LED_On();
    LED_Off();

    TEST_ASSERT_EQUAL(0, LED_GetState());
}

/**
 * @brief Verifies that LED_Toggle switches the LED from off to on.
 */
void test_LED_Should_Toggle(void)
{
    LED_Off();

    LED_Toggle();

    TEST_ASSERT_EQUAL(1, LED_GetState());
}

/**
 * @brief Verifies that a second toggle from on advances the LED to the blink state (2).
 */
void test_LED_Should_Toggle_To_Blink(void)
{
    LED_On();

    LED_Toggle();

    TEST_ASSERT_EQUAL(2, LED_GetState());
}

/**
 * @brief Verifies that a third toggle from blink wraps the LED back to off.
 */
void test_LED_Should_Toggle_Blink_To_Off(void)
{
    LED_On();
    LED_Toggle(); /* ON -> BLINK */
    LED_Toggle(); /* BLINK -> OFF */

    TEST_ASSERT_EQUAL(0, LED_GetState());
}
