//
// Do NOT modify or remove this copyright and license
//
// Copyright (c) 2012-2022 Seagate Technology LLC and/or its Affiliates, All Rights Reserved
//
// This software is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
// ******************************************************************************************
// \file of_nvme_helper.h
// \brief Defines the constants structures to help with open fabrics nvme passthrough interface.

#pragma once

#if defined (ENABLE_OFNVME)

#include "common.h"
#include "common_public.h"
#include "nvme_helper.h"
#include <stdint.h>
#include "of_nvmeIoctl.h"

#if defined (__cplusplus)
extern "C"
{
#endif


#define WIN_OFNVME_DRIVE  "\\\\.\\SCSI" //This is how the handle will actually be opened, not necessarily what should be displayed

#define WIN_OFNVME_DISPLAY "NVME" //display to user and read from user as NVME? where ? is a handle number

    //TODO: If there are other structures or necessary definitions, add them here

#if defined (__cplusplus)
}
#endif
#endif//ENABLE_OFNVME
