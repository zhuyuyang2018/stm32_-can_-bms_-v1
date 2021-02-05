/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for
  *                      the gpio
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define LED1_ON     		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET)     // 输出高电�?
#define LED1_OFF        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET)   // 输出低电�?
#define LED1_TOGGLE     HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_6)  							  // 电平反转

#define LED2_ON     		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET)     // 输出高电�?
#define LED2_OFF        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET)   // 输出低电�?
#define LED2_TOGGLE     HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_7)  							  // 电平反转  
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
