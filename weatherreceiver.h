/* weatherreceiver.h
 *
 * This program is written to listen to the transmitter
 * on a Davis Vantage Pro2 weather station, and collect
 * the data from the sensors.
 * 
 * 
 * By: K D Sarchet - N5KS
 * 
 * Initial version: 10/17/2026
 * 
 * 
 * 
 */

/* The frequency hopping sequence for transmitter
 * ID 1 on the Davis Vantage Pro2 weather station.
 * For Transmitter ID 1, the frequency hops every
 * 41/16ths ( 2.5625) seconds or 16 Hz.
 */
#ifndef WXRX
$define WXRX
uint8_t hopindex[] = { 18, 0, 19, 41, 25, 8, 47, 32,
                       13, 36, 22, 3, 29, 44, 16, 5,
                       27, 38, 10, 49, 21, 2, 30, 42,
                       14, 48, 7, 24, 34, 45, 1, 17,
                       39, 26, 9, 31, 50, 37, 12, 20,
                       33, 4, 43, 28, 15, 35, 6, 40,
                       11, 23, 46 }

/* 
 * The frequency for each hop will be calculated by
 * the formula: 902.5 + hopindex * 0.5
 * This will give us 51 frequencies for SSFH.
 */

#endif
