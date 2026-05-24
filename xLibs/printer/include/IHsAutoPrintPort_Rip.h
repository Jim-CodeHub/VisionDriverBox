/**
 * @file 	IHsAutoPrintPort_Rip.h
 * @brief 	Honson shared memory client-side port
 * @author 	Jim
 * @note
*/

#ifndef _IHSAUTOPRINTPORT_RIP_H
#define _IHSAUTOPRINTPORT_RIP_H

#include <cstdint>

#define		SEND_SIZE_ONCE								(8*1024*1024)

/**
 * @brief	Check if shared memeory is opened or not
 * @return
 * - true
 * - false
 * @note	Implement before 'OpenAutoPrintPort_Rip()'
*/
bool    	IsOpendedMemMap(void);

/**
 * @brief	Open shared memory
 * @return
 * - 0			if success
 * - negative	if error
 * @note	Only need to implement it once each time the program starts
*/
int     	OpenAutoPrintPort_Rip(void);

/**
 * @brief	Ready to send data to shared memory
 * @return
 * - 0			if success
 * - negative	if error
 * @note	'OpenAutoPrintPort_Rip()' SHALL be called first
 * @note	'StopSendRipTask_Rip()' SAHLL be called, if start failure, then try to restart it after ms delay
*/
int     	StartSendRipTask_Rip(void);

/**
 * @brief	Check if the printer buffer is full or not while data sending
 * @param	size : data size to be sent
 * @return
 * - true
 * - false
 * @note	Do some ms delay, if return false then try to check it agian
*/
bool    	IsCanSendData(uint64_t size);

/**
 * @brief	Send data to shared memory
 * @param	p	 : data buffer to be sent
 * @param	size : data size to be sent
 * @return
 * - 0			if success
 * - negative	if error
 * @note	Check by 'IsCanSendData()' first, before any data send
*/
int     	SendDataAutoPrintPort_Rip(unsigned char *p, uint64_t size);

/**
 * @brief	Check shared memory data write
 * @return	All shared memory writen size
 * @note	Calculate start from every 'StartSendRipTask_Rip()'
*/
uint64_t	GetMemMapAllWriteSize(void);

/**
 * @brief	Finish shared memory data send
 * @return
 * - 0			if success
 * - negative	if error
 * @note	Implement every finish data send (after any 'SendDataAutoPrintPort_Rip()')
*/
int     	FinishSendRipTask_Rip(void);

/**
 * @brief 	Stop shared memory data send
 * @return
 * - 0			if success
 * - negative	if error
 * @note 	TBD
*/
int     	StopSendRipTask_Rip(void);

/**
 * @brief	Close shared memory
 * @return
 * - 0			if success
 * - negative	if error
 * @note	Implement it each time the program exit
*/
int     	CloseAutoPrintPort_Rip(void);

#endif
