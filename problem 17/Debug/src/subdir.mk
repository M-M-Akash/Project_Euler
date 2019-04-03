################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/problem\ 17.cpp \
../src/problem\ 20.cpp 

OBJS += \
./src/problem\ 17.o \
./src/problem\ 20.o 

CPP_DEPS += \
./src/problem\ 17.d \
./src/problem\ 20.d 


# Each subdirectory must supply rules for building sources it contributes
src/problem\ 17.o: ../src/problem\ 17.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/problem 17.d" -MT"src/problem\ 17.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/problem\ 20.o: ../src/problem\ 20.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/problem 20.d" -MT"src/problem\ 20.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


