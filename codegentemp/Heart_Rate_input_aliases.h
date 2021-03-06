/*******************************************************************************
* File Name: Heart_Rate_input.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Heart_Rate_input_ALIASES_H) /* Pins Heart_Rate_input_ALIASES_H */
#define CY_PINS_Heart_Rate_input_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Heart_Rate_input_0			(Heart_Rate_input__0__PC)
#define Heart_Rate_input_0_PS		(Heart_Rate_input__0__PS)
#define Heart_Rate_input_0_PC		(Heart_Rate_input__0__PC)
#define Heart_Rate_input_0_DR		(Heart_Rate_input__0__DR)
#define Heart_Rate_input_0_SHIFT	(Heart_Rate_input__0__SHIFT)
#define Heart_Rate_input_0_INTR	((uint16)((uint16)0x0003u << (Heart_Rate_input__0__SHIFT*2u)))

#define Heart_Rate_input_INTR_ALL	 ((uint16)(Heart_Rate_input_0_INTR))


#endif /* End Pins Heart_Rate_input_ALIASES_H */


/* [] END OF FILE */
