################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Binary.cpp \
../src/Casting.cpp \
../src/CirkularLinkedList.cpp \
../src/DifferentTestFunctions.cpp \
../src/Experimental.cpp \
../src/ReverseLinkedList.cpp 

OBJS += \
./src/Binary.o \
./src/Casting.o \
./src/CirkularLinkedList.o \
./src/DifferentTestFunctions.o \
./src/Experimental.o \
./src/ReverseLinkedList.o 

CPP_DEPS += \
./src/Binary.d \
./src/Casting.d \
./src/CirkularLinkedList.d \
./src/DifferentTestFunctions.d \
./src/Experimental.d \
./src/ReverseLinkedList.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


