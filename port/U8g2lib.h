#ifndef U8G2LIB_H
#define U8G2LIB_H

#include <u8g2.h>
#include "gpio.h"
#include "i2c.h"
#include "spi.h"

// Initialize the U8X8 user pointer to hold hardware device details
// when using hardware I2C or SPI drivers.
// The details are held in dynamic memory pointed to by the U8X8 user
// pointer (u8x8_GetUserPtr(u8x8)), and can be freed when all access to
// the display has finished

// Initialize hardware SPI driver
int u8g2arm_arm_init_hw_spi(u8x8_t *u8x8, int bus_number, int cs_number);

// Initialize hardware I2C driver
int u8g2arm_arm_init_hw_i2c(u8x8_t *u8x8, int bus_number);


uint8_t u8x8_arm_linux_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_byte_arm_linux_hw_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_byte_arm_linux_hw_spi(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);

#endif
