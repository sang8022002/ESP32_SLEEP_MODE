#include <stdio.h>
#include "deep_sleep.h"

void app_main(void)
{
    deep_sleep_register_rtc_timer_wakeup(2000);
    //example_deep_sleep_register_ext1_wakeup();
    //example_deep_sleep_register_ext0_wakeup();
    while(1)
    {
        deep_sleep();
    }
}