/*******************************************************************************
* This file is part of the 3DViewer                                            *
*                                                                              *
* Copyright (C) 2022 Revopoint3D Company Ltd.                                  *
* All rights reserved.                                                         *
*                                                                              *
* This program is free software: you can redistribute it and/or modify         *
* it under the terms of the GNU General Public License as published by         *
* the Free Software Foundation, either version 3 of the License, or            *
* (at your option) any later version.                                          *
*                                                                              *
* This program is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY; without even the implied warranty of               *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)             *
* for more details.                                                            *
*                                                                              *
********************************************************************************/

#ifndef _CS_CSCAMERAAPI_H
#define _CS_CSCAMERAAPI_H

#include <QtCore/qglobal.h>

#ifdef WIN32
    #if defined(CS_CAMERA_API)
        #define CS_CAMERA_EXPORT Q_DECL_EXPORT
    #else
        #define CS_CAMERA_EXPORT Q_DECL_IMPORT
    #endif
#else
    #define CS_CAMERA_EXPORT
#endif

#endif // _CS_CSCAMERAAPI_H
