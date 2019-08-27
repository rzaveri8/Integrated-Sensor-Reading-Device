#include <stdio.h>
#include <stdlib.h>
#include "cmd_decl.h"
#include "rangefinder.h"
#include "us2.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main()
{
    init_us1();
    init_us2();
    while (1) {
        uint32_t dist_us1 = getDistance_us1();
        uint32_t dist_ir = getDistance_ir();
        double dist_us2 = getDistance_us2();
        printf("Distance (us1): %dmm\nDistance (ir): %dcm\n distance(us2): %fcm\n", dist_us1, dist_ir,dist_us2);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
