################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Lcd/ili9325.c \
../Core/Src/Lcd/lcd_io_gpio16.c \
../Core/Src/Lcd/stm32_adafruit_lcd.c \
../Core/Src/Lcd/stm32_adafruit_ts.c 

OBJS += \
./Core/Src/Lcd/ili9325.o \
./Core/Src/Lcd/lcd_io_gpio16.o \
./Core/Src/Lcd/stm32_adafruit_lcd.o \
./Core/Src/Lcd/stm32_adafruit_ts.o 

C_DEPS += \
./Core/Src/Lcd/ili9325.d \
./Core/Src/Lcd/lcd_io_gpio16.d \
./Core/Src/Lcd/stm32_adafruit_lcd.d \
./Core/Src/Lcd/stm32_adafruit_ts.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Lcd/%.o Core/Src/Lcd/%.su: ../Core/Src/Lcd/%.c Core/Src/Lcd/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Lcd

clean-Core-2f-Src-2f-Lcd:
	-$(RM) ./Core/Src/Lcd/ili9325.d ./Core/Src/Lcd/ili9325.o ./Core/Src/Lcd/ili9325.su ./Core/Src/Lcd/lcd_io_gpio16.d ./Core/Src/Lcd/lcd_io_gpio16.o ./Core/Src/Lcd/lcd_io_gpio16.su ./Core/Src/Lcd/stm32_adafruit_lcd.d ./Core/Src/Lcd/stm32_adafruit_lcd.o ./Core/Src/Lcd/stm32_adafruit_lcd.su ./Core/Src/Lcd/stm32_adafruit_ts.d ./Core/Src/Lcd/stm32_adafruit_ts.o ./Core/Src/Lcd/stm32_adafruit_ts.su

.PHONY: clean-Core-2f-Src-2f-Lcd

