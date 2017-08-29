/*
 * D_SYS.h
 *
 * Created: 12/10/2014 1:18:17 PM
 *  Author: wid7
 */ 


#ifndef D_SYS_H_
#define D_SYS_H_
#include "asf.h"

#include "Platform/Driver/Driver_call.h"
#include "Platform/Service/sv_interface.h"


uint8_t CPU3_D_SET_PUMP(sv_pumptype id_pump);
uint8_t CPU3_D_RESET_PUMP(sv_pumptype id_pump);
uint8_t CPU3_D_SET_VALVE(sv_valvetype id_valve);
uint8_t CPU3_D_RESET_VALVE(sv_valvetype id_valve);
uint16_t CPU3_D_READ_SENSORS(sv_sensortype ID_SENSOR);
uint8_t CPU3_D_RD_SENSIN(sv_sensintype );
uint8_t CPU3_D_CONFIG_TIMER(uint8_t timer_no, uint8_t timer_res);
uint8_t CPU3_D_STOP_TIMER(uint8_t timer_no);




#endif /* D_SYS_H_ */