################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/If\ Statement\ (Guess\ Number\ Game).c 

OBJS += \
./src/If\ Statement\ (Guess\ Number\ Game).o 

C_DEPS += \
./src/If\ Statement\ (Guess\ Number\ Game).d 


# Each subdirectory must supply rules for building sources it contributes
src/If\ Statement\ (Guess\ Number\ Game).o: ../src/If\ Statement\ (Guess\ Number\ Game).c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/If Statement (Guess Number Game).d" -MT"src/If\ Statement\ (Guess\ Number\ Game).d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


