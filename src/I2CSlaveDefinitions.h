// I2CSlaveDefinitions.h

#ifndef _I2CSLAVEDEFINITIONS_h
#define _I2CSLAVEDEFINITIONS_h

//This feature is only useful if you have rom/ram to spare and want a clean way to composite a message class.
//Otherwise, it's best turned off, as it simplifies the class object into a simples intance with no virtual calls.
//#define I2C_MESSAGE_IMPLEMENT_INTERFACE

//Basic messaging error tracking is nice, but it can be disabled with this property.
#define I2C_SLAVE_COMMS_ERRORS_ENABLE

////If you don't use a task scheduller, you need to manually the callback whenever possible.
#define I2C_SLAVE_USE_TASK_SCHEDULER

#endif

