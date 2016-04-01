################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Client.cpp \
../Client_main.cpp \
../Server.cpp \
../Server_main_.cpp \
../Socket.cpp 

OBJS += \
./Client.o \
./Client_main.o \
./Server.o \
./Server_main_.o \
./Socket.o 

CPP_DEPS += \
./Client.d \
./Client_main.d \
./Server.d \
./Server_main_.d \
./Socket.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


