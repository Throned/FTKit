/***************************************************************************
 *  ftApi - fischertechnik c++ progamming api                              *
 *  Copyright (C) 2004,2005 by                                             *
 *  Holger Friedrich <holgerf@vsi.cs.uni-frankfurt.de>,                    *
 *  Visual Sensorics and Information processing lab,                       * 
 *  University of Frankfurt                                                *
 *                                                                         *
 *  This library is free software; you can redistribute it and/or          *
 *  modify it under the terms of the GNU Lesser General Public             *
 *  License as published by the Free Software Foundation; either           *
 *  version 2.1 of the License, or (at your option) any later version.     *
 *                                                                         *
 *  This library is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 *  Lesser General Public License for more details.                        *
 *                                                                         *
 *  You should have received a copy of the GNU Lesser General Public       *
 *  License along with this library; if not, write to the Free Software    *
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA02110-1301 USA*
 ***************************************************************************/
#ifndef FT_INTERNAL_H
#define FT_INTERNAL_H

#include <iosfwd>

namespace ftapi {

  /**
  * helper function for crc16
  * @see crc16
  * @param oldcrc old crc (start value)
  * @param data data to do crc with
  * @return X.25 CCITT CRC-16
  */
  unsigned short crc16Helper(unsigned short oldcrc, unsigned char data);
  
  /**
  * calculate crc16 of a buffer
  * @param size bytes to read
  * @param buffer buffer
  * @return X.25 CCITT CRC-16
  */
  unsigned short crc16(size_t size, unsigned char* buffer);

}
#endif
