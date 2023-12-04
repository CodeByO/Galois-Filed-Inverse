/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define D0_Pin GPIO_PIN_0
#define D0_GPIO_Port GPIOC
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOC
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOC
#define D3_Pin GPIO_PIN_3
#define D3_GPIO_Port GPIOC
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOC
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOC
#define SW3_Pin GPIO_PIN_7
#define SW3_GPIO_Port GPIOE
#define SW4_Pin GPIO_PIN_8
#define SW4_GPIO_Port GPIOE
#define KEY8_Pin GPIO_PIN_8
#define KEY8_GPIO_Port GPIOD
#define KEY8_EXTI_IRQn EXTI9_5_IRQn
#define KEY9_Pin GPIO_PIN_9
#define KEY9_GPIO_Port GPIOD
#define KEY9_EXTI_IRQn EXTI9_5_IRQn
#define KEY10_Pin GPIO_PIN_10
#define KEY10_GPIO_Port GPIOD
#define KEY10_EXTI_IRQn EXTI15_10_IRQn
#define KEY11_Pin GPIO_PIN_11
#define KEY11_GPIO_Port GPIOD
#define KEY11_EXTI_IRQn EXTI15_10_IRQn
#define KEY12_Pin GPIO_PIN_12
#define KEY12_GPIO_Port GPIOD
#define KEY12_EXTI_IRQn EXTI15_10_IRQn
#define KEY13_Pin GPIO_PIN_13
#define KEY13_GPIO_Port GPIOD
#define KEY13_EXTI_IRQn EXTI15_10_IRQn
#define KEY14_Pin GPIO_PIN_14
#define KEY14_GPIO_Port GPIOD
#define KEY14_EXTI_IRQn EXTI15_10_IRQn
#define KEY15_Pin GPIO_PIN_15
#define KEY15_GPIO_Port GPIOD
#define KEY15_EXTI_IRQn EXTI15_10_IRQn
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOC
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOC
#define RS_Pin GPIO_PIN_8
#define RS_GPIO_Port GPIOC
#define RW_Pin GPIO_PIN_9
#define RW_GPIO_Port GPIOC
#define E_Pin GPIO_PIN_10
#define E_GPIO_Port GPIOC
#define KEY0_Pin GPIO_PIN_0
#define KEY0_GPIO_Port GPIOD
#define KEY0_EXTI_IRQn EXTI0_IRQn
#define KEY1_Pin GPIO_PIN_1
#define KEY1_GPIO_Port GPIOD
#define KEY1_EXTI_IRQn EXTI1_IRQn
#define KEY2_Pin GPIO_PIN_2
#define KEY2_GPIO_Port GPIOD
#define KEY2_EXTI_IRQn EXTI2_IRQn
#define KEY3_Pin GPIO_PIN_3
#define KEY3_GPIO_Port GPIOD
#define KEY3_EXTI_IRQn EXTI3_IRQn
#define KEY4_Pin GPIO_PIN_4
#define KEY4_GPIO_Port GPIOD
#define KEY4_EXTI_IRQn EXTI4_IRQn
#define KEY5_Pin GPIO_PIN_5
#define KEY5_GPIO_Port GPIOD
#define KEY5_EXTI_IRQn EXTI9_5_IRQn
#define KEY6_Pin GPIO_PIN_6
#define KEY6_GPIO_Port GPIOD
#define KEY6_EXTI_IRQn EXTI9_5_IRQn
#define KEY7_Pin GPIO_PIN_7
#define KEY7_GPIO_Port GPIOD
#define KEY7_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
