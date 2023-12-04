/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "gf_cal.h"
#include "STM_LCD16x2.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
int index = 0;
uint8_t uint_hex = 0;
int cal_mode = 0;
int reset_mode = 0;
char hex_number[2] = {'-1','-1'};
uint8_t result;
char hex_text[10] = {'0','x','0','-1'};
char text[3];
uint16_t keyPad;
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
unsigned int ascii_to_hex(const char* str)
{
	uint8_t result;
	unsigned int i = 0, h, high, low;
	high = (str[i] > '9') ? str[i] - 'A' + 10 : str[i] - '0';
	low = (str[i + 1] > '9') ? str[i + 1] - 'A' + 10 : str[i + 1] - '0';
	result = (high << 4) | low;
	return result;
}
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  char *welcom = "Welcome galois \n\r";
  char *welcom2 = "field! \n\r";
  char *input_text = "click Key Pad";
  char inversion_result[22] = "Result : ";
  char calculating[] = "Calculating...";
  char initial_message[] = "Initializing....";
  GPIO_PinState pin_state;
  /* USER CODE END 2 */
  LCD1602_Begin8BIT(RS_GPIO_Port, RS_Pin, E_Pin, D0_GPIO_Port, D0_Pin, D1_Pin, D2_Pin, D3_Pin, D4_GPIO_Port, D4_Pin, D5_Pin, D6_Pin, D7_Pin);
    LCD1602_print(welcom);
    LCD1602_2ndLine();
    LCD1602_print(welcom2);
    LCD1602_1stLine();
    HAL_Delay(1000);
    LCD1602_clear();
    LCD1602_print(input_text);
    HAL_Delay(2000);
    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
    while (1)
    {
    	LCD1602_print(input_text);
    	HAL_Delay(500);
    	LCD1602_clear();
    	if(index == 2){
    		    LCD1602_clear();
    			uint_hex = ascii_to_hex(hex_number);
    			sprintf(hex_text, "0x%02x", uint_hex);
    			LCD1602_print(hex_text);
    			LCD1602_2ndLine();
    			LCD1602_print(calculating);
    			HAL_Delay(2000);

    			LCD1602_clear();
    			LCD1602_1stLine();

    			result = gf_inverse(uint_hex, FIELD_POLY);
    			sprintf(hex_text, "0x%02x", result);
    			LCD1602_print(inversion_result);
    			LCD1602_2ndLine();
    			LCD1602_print(hex_text);
    			HAL_Delay(2000);

    			LCD1602_clear();
    			LCD1602_1stLine();
    			LCD1602_print(initial_message);
    			HAL_Delay(2000);


    			index = 0;
    		}

    	 switch(keyPad){
    	    case KEY0_Pin:
    	    	hex_number[index] = '0';
    	    	keyPad = NULL;
    	    	index++;
    	    	break;
    	    case KEY1_Pin:
    	    	hex_number[index] = '1';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY2_Pin:
    	    	hex_number[index] = '2';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY3_Pin:
    	    	hex_number[index] = '3';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY4_Pin:
    	    	hex_number[index] = '4';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY5_Pin:
    	    	hex_number[index] = '5';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY6_Pin:
    	    	hex_number[index] = '6';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY7_Pin:
    	    	hex_number[index] = '7';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY8_Pin:
    	    	hex_number[index] = '8';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY9_Pin:
    	    	hex_number[index] = '9';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY10_Pin:
    	    	hex_number[index] = 'A';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY11_Pin:
    	    	hex_number[index] = 'B';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY12_Pin:
    	    	hex_number[index] = 'C';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY13_Pin:
    	    	hex_number[index] = 'D';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY14_Pin:
    	    	hex_number[index] = 'E';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    case KEY15_Pin:
    	    	hex_number[index] = 'F';
    	    	keyPad = NULL;
    	    	index++;
    	        break;
    	    default:
    	    	break;
    	    }

      /* USER CODE BEGIN 3 */
    }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, D0_Pin|D1_Pin|D2_Pin|D3_Pin
                          |D4_Pin|D5_Pin|D6_Pin|D7_Pin
                          |RS_Pin|RW_Pin|E_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : D0_Pin D1_Pin D2_Pin D3_Pin
                           D4_Pin D5_Pin D6_Pin D7_Pin
                           RS_Pin RW_Pin E_Pin */
  GPIO_InitStruct.Pin = D0_Pin|D1_Pin|D2_Pin|D3_Pin
                          |D4_Pin|D5_Pin|D6_Pin|D7_Pin
                          |RS_Pin|RW_Pin|E_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : SW3_Pin SW4_Pin */
  GPIO_InitStruct.Pin = SW3_Pin|SW4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : KEY8_Pin KEY9_Pin KEY10_Pin KEY11_Pin
                           KEY12_Pin KEY13_Pin KEY14_Pin KEY15_Pin
                           KEY0_Pin KEY1_Pin KEY2_Pin KEY3_Pin
                           KEY4_Pin KEY5_Pin KEY6_Pin KEY7_Pin */
  GPIO_InitStruct.Pin = KEY8_Pin|KEY9_Pin|KEY10_Pin|KEY11_Pin
                          |KEY12_Pin|KEY13_Pin|KEY14_Pin|KEY15_Pin
                          |KEY0_Pin|KEY1_Pin|KEY2_Pin|KEY3_Pin
                          |KEY4_Pin|KEY5_Pin|KEY6_Pin|KEY7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

  HAL_NVIC_SetPriority(EXTI1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI1_IRQn);

  HAL_NVIC_SetPriority(EXTI2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI2_IRQn);

  HAL_NVIC_SetPriority(EXTI3_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI3_IRQn);

  HAL_NVIC_SetPriority(EXTI4_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI4_IRQn);

  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

}

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	keyPad = GPIO_Pin;

}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
