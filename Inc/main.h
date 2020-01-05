/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define blue_button_Pin GPIO_PIN_13
#define blue_button_GPIO_Port GPIOC
#define blue_button_EXTI_IRQn EXTI15_10_IRQn
#define OLED_DC_Pin GPIO_PIN_10
#define OLED_DC_GPIO_Port GPIOF
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define OLED_RES_Pin GPIO_PIN_7
#define OLED_RES_GPIO_Port GPIOE
#define OLED_CS_Pin GPIO_PIN_8
#define OLED_CS_GPIO_Port GPIOE
#define key_2_Pin GPIO_PIN_10
#define key_2_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_14
#define LED3_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define USB_OTG_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_OTG_FS_PWR_EN_GPIO_Port GPIOD
#define key_8_Pin GPIO_PIN_12
#define key_8_GPIO_Port GPIOD
#define key_7_Pin GPIO_PIN_13
#define key_7_GPIO_Port GPIOD
#define OLED_D1_Pin GPIO_PIN_14
#define OLED_D1_GPIO_Port GPIOD
#define OLED_D0_Pin GPIO_PIN_15
#define OLED_D0_GPIO_Port GPIOD
#define USB_OTG_FS_OVCR_Pin GPIO_PIN_7
#define USB_OTG_FS_OVCR_GPIO_Port GPIOG
#define key_1_Pin GPIO_PIN_7
#define key_1_GPIO_Port GPIOC
#define key_6_Pin GPIO_PIN_10
#define key_6_GPIO_Port GPIOA
#define key_5_Pin GPIO_PIN_3
#define key_5_GPIO_Port GPIOB
#define key_3_Pin GPIO_PIN_4
#define key_3_GPIO_Port GPIOB
#define key_4_Pin GPIO_PIN_5
#define key_4_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
