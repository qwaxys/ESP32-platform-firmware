#include <string.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "driver/i2s.h"
#include "esp_sleep.h"
#include "nvs.h"
#include "nvs_flash.h"

#include "driver/gpio.h"
#include "driver/adc.h"
#include "driver/dac.h"
#include "soc/rtc_cntl_reg.h"

//Start audio output driver
void    driver_i2s_sound_start();

//Stop audio output driver
void    driver_i2s_sound_stop();

//Push audio to the driver
void    driver_i2s_sound_push(uint8_t *buf, int len);

//Set the volume (0-255)
void    driver_i2s_set_volume(uint8_t new_volume);

//Get the volume
uint8_t driver_i2s_get_volume();

//Mute audio output
void    driver_i2s_sound_mute(int doMute);
