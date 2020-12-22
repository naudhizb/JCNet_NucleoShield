/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_0
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_1
#define LED5_GPIO_Port GPIOC
#define LED6_Pin GPIO_PIN_2
#define LED6_GPIO_Port GPIOC
#define LED7_Pin GPIO_PIN_3
#define LED7_GPIO_Port GPIOC
#define CDS_Pin GPIO_PIN_0
#define CDS_GPIO_Port GPIOA
#define uSD_NCS_Pin GPIO_PIN_1
#define uSD_NCS_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SW2_Pin GPIO_PIN_4
#define SW2_GPIO_Port GPIOA
#define SW2_EXTI_IRQn EXTI4_IRQn
#define uSD_SCK_Pin GPIO_PIN_5
#define uSD_SCK_GPIO_Port GPIOA
#define uSD_MISO_Pin GPIO_PIN_6
#define uSD_MISO_GPIO_Port GPIOA
#define uSD_MOSI_Pin GPIO_PIN_7
#define uSD_MOSI_GPIO_Port GPIOA
#define FND_SEL2_Pin GPIO_PIN_4
#define FND_SEL2_GPIO_Port GPIOC
#define CLCD_D4_Pin GPIO_PIN_5
#define CLCD_D4_GPIO_Port GPIOC
#define FND0_Pin GPIO_PIN_0
#define FND0_GPIO_Port GPIOB
#define FND1_Pin GPIO_PIN_1
#define FND1_GPIO_Port GPIOB
#define FND2_Pin GPIO_PIN_2
#define FND2_GPIO_Port GPIOB
#define LED0_Pin GPIO_PIN_12
#define LED0_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_13
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_14
#define LED2_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_15
#define LED3_GPIO_Port GPIOB
#define CLCD_D5_Pin GPIO_PIN_6
#define CLCD_D5_GPIO_Port GPIOC
#define CLCD_D6_Pin GPIO_PIN_7
#define CLCD_D6_GPIO_Port GPIOC
#define CLCD_D7_Pin GPIO_PIN_8
#define CLCD_D7_GPIO_Port GPIOC
#define CLCD_RS_Pin GPIO_PIN_9
#define CLCD_RS_GPIO_Port GPIOC
#define MOTOR_CH1_Pin GPIO_PIN_8
#define MOTOR_CH1_GPIO_Port GPIOA
#define MOTOR_CH2_Pin GPIO_PIN_9
#define MOTOR_CH2_GPIO_Port GPIOA
#define FND_SEL0_Pin GPIO_PIN_10
#define FND_SEL0_GPIO_Port GPIOA
#define FND_SEL1_Pin GPIO_PIN_11
#define FND_SEL1_GPIO_Port GPIOA
#define CLCD_E_Pin GPIO_PIN_12
#define CLCD_E_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_15
#define BUZZER_GPIO_Port GPIOA
#define MOTOR_BIN1_Pin GPIO_PIN_10
#define MOTOR_BIN1_GPIO_Port GPIOC
#define MOTOR_BIN2_Pin GPIO_PIN_12
#define MOTOR_BIN2_GPIO_Port GPIOC
#define SW1_Pin GPIO_PIN_2
#define SW1_GPIO_Port GPIOD
#define SW1_EXTI_IRQn EXTI2_IRQn
#define FND3_Pin GPIO_PIN_3
#define FND3_GPIO_Port GPIOB
#define FND4_Pin GPIO_PIN_4
#define FND4_GPIO_Port GPIOB
#define FND5_Pin GPIO_PIN_5
#define FND5_GPIO_Port GPIOB
#define FND6_Pin GPIO_PIN_6
#define FND6_GPIO_Port GPIOB
#define FND7_Pin GPIO_PIN_7
#define FND7_GPIO_Port GPIOB
#define TEMP_SENSOR_SCL_Pin GPIO_PIN_8
#define TEMP_SENSOR_SCL_GPIO_Port GPIOB
#define TEMP_SENSOR_SDA_Pin GPIO_PIN_9
#define TEMP_SENSOR_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
