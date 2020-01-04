

/*
#include "HW_key.h"
uint8_t Key_row[1]={0xff};   //保存按键行扫描情况的状态数组
*/


#ifndef __HW_key_H__
#define __HW_key_H__

#include "main.h"
#include "stm32f1xx_hal.h"
#include <string.h>

char KEY_SCAN(void);
char KEY_ROW_SCAN(void);
void HW_KEY_FUNCTION(void);

#define KEY_CLO0_OUT_LOW  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_7,GPIO_PIN_RESET) 
#define KEY_CLO1_OUT_LOW  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_8,GPIO_PIN_RESET)
#define KEY_CLO2_OUT_LOW  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_RESET)
#define KEY_CLO3_OUT_LOW  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_10,GPIO_PIN_RESET)

#define KEY_CLO0_OUT_HIGH  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_7,GPIO_PIN_SET) 
#define KEY_CLO1_OUT_HIGH  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_8,GPIO_PIN_SET)
#define KEY_CLO2_OUT_HIGH  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,GPIO_PIN_SET)
#define KEY_CLO3_OUT_HIGH  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_10,GPIO_PIN_SET)

#endif