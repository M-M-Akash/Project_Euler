################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/project\ euler\ prob\ 12.cpp 

OBJS += \
./src/project\ euler\ prob\ 12.o 

CPP_DEPS += \
./src/project\ euler\ prob\ 12.d 


# Each subdirectory must supply rules for building sources it contributes
src/project\ euler\ prob\ 12.o: ../src/project\ euler\ prob\ 12.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/project euler prob 12.d" -MT"src/project\ euler\ prob\ 12.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


