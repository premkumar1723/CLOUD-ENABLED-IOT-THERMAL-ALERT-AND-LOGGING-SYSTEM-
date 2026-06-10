#ifndef  I2C_DEFINES_H
#define  I2C_DEFINES_H

// I2C - Inter Integerated Circuit.
// Peripheral Method.
// So we to Provide Speed of the I2C BUS And Also Provide the Clock to the Perpheral is also necsseccary.

#define    FOSC          12000000               // Frequecny Oscillator.
#define    CCLK          (5*FOSC)               // LPC2129 & LPC2148 Operationg Frequecny.
#define    PCLK          (CCLK/4)               // Peripheral Clock Frequecny.
#define    I2C_SPEED     100000                // In Hz's.
#define    I2C_DIVIDER   ((PCLK/I2C_SPEED)/2)   // CLOCK GENERATION.

// BIT NAMES DEFINING ACCORDING TO THE DATA SHEET.

//  I2CONSET I2C SFR (8BIT Register)  same as the IOSET0.

#define    AA_BIT     2   // Accert Acknolwdegment Bit. AA - 0 Need More Bytes to Read.
                          // AA - 1 Master accknowledge that enough no of bytes.
#define    SI_BIT     3     // Serial Interrupt Bit.
                          /* 
													   The SI bit is tell that after every event or action like start,ack,nack,
														 and stop conditions and data soo on. whether it is done succsefully or not.
														 SI - 0 Not Successufull. 
														 SI - 1 Successufully Completed the event.
                          */
#define    STO_BIT    4   //  LOW to HIGH Pulse Generation.
#define    STA_BIT    5   //  HIGH to LOW Pulse Generation.
#define    I2CENABLE  6   // if we want to start or make a I2C Communcication only connections are not enough.
                          // We need to set this bit as 1.
													// Then only the I2C Peripheral Can Understand that the use need me. so in that way it will Does the Work.
													
//  I2CONCLR I2C SFR (8BIT Register)  same as the IOCLR0.	
//  For Clearing Purpose we use this I2CONCLR  Register so  bit names (MACRO Names ) we are changing.
// C ---> Indicates that Clearing Purposes.

#define    AAC_BIT    2    // Acert ACK Bit For Clearing Purpose.
#define    SIC_BIT    3    // Serial Interrupt.
#define    STAC_BIT   5    // START BIT. (for stoping the pulse) as HIGH to LOW.
#define    I2CDISABLE 6    // To stop the BUS as the I2C Communication.

#endif
