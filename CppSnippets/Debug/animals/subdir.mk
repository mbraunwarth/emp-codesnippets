################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../animals/Animal.cpp \
../animals/Dog.cpp 

OBJS += \
./animals/Animal.o \
./animals/Dog.o 

CPP_DEPS += \
./animals/Animal.d \
./animals/Dog.d 


# Each subdirectory must supply rules for building sources it contributes
animals/%.o: ../animals/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


