#include <string.h>
#include <stdio.h>
#include "sdkconfig.h"
#include "esp_types.h"
#include "esp_log.h"
#include "esp_check.h"
#include "driver/i2c_master.h"
#include "lsm9ds1.h"
#include "esp_check.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"