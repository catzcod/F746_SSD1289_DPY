################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ssd1289/lcd_main.c \
../Core/Src/ssd1289/ssd1289_hal.c \
../Core/Src/ssd1289/xpt2046.c 

OBJS += \
./Core/Src/ssd1289/lcd_main.o \
./Core/Src/ssd1289/ssd1289_hal.o \
./Core/Src/ssd1289/xpt2046.o 

C_DEPS += \
./Core/Src/ssd1289/lcd_main.d \
./Core/Src/ssd1289/ssd1289_hal.d \
./Core/Src/ssd1289/xpt2046.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/ssd1289/%.o Core/Src/ssd1289/%.su: ../Core/Src/ssd1289/%.c Core/Src/ssd1289/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-ssd1289

clean-Core-2f-Src-2f-ssd1289:
	-$(RM) ./Core/Src/ssd1289/lcd_main.d ./Core/Src/ssd1289/lcd_main.o ./Core/Src/ssd1289/lcd_main.su ./Core/Src/ssd1289/ssd1289_hal.d ./Core/Src/ssd1289/ssd1289_hal.o ./Core/Src/ssd1289/ssd1289_hal.su ./Core/Src/ssd1289/xpt2046.d ./Core/Src/ssd1289/xpt2046.o ./Core/Src/ssd1289/xpt2046.su

.PHONY: clean-Core-2f-Src-2f-ssd1289

