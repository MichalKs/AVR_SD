/**
 * @file:   fat.h
 * @brief:  FAT file system implementation.
 * @date:   4 maj 2014
 * @author: Michal Ksiezopolski
 * 
 * @verbatim
 * Copyright (c) 2014 Michal Ksiezopolski.
 * All rights reserved. This program and the 
 * accompanying materials are made available 
 * under the terms of the GNU Public License 
 * v3.0 which accompanies this distribution, 
 * and is available at 
 * http://www.gnu.org/licenses/gpl.html
 * @endverbatim
 */

#ifndef FAT_H_
#define FAT_H_

#include <inttypes.h>

int8_t FAT_Init(void (*phyInit)(void),
    uint8_t (*phyReadSectors)(uint8_t* buf, uint32_t sector, uint32_t count),
    uint8_t (*phyWriteSectors)(uint8_t* buf, uint32_t sector, uint32_t count));

#endif /* FAT_H_ */
