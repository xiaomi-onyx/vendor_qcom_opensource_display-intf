/*
 * Copyright (c) 2014-2021, The Linux Foundation. All rights reserved.
 * Not a Contribution.
 *
 * Copyright 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Changes from Qualcomm Innovation Center are provided under the following license:
 *
 * Copyright (c) 2022-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */
#ifndef __SDM_COMPOSITOR_SIDEBAND_CB_INTF_H__
#define __SDM_COMPOSITOR_SIDEBAND_CB_INTF_H__

#include <core/sdm_types.h>

namespace sdm {

class SDMSideBandCompositorCbIntf {
public:
  virtual ~SDMSideBandCompositorCbIntf() {}

  virtual void NotifyQsyncChange(uint64_t display_id, bool qsync_enabled,
                                 uint32_t refresh_rate,
                                 uint32_t qsync_refresh_rate) = 0;

  virtual void NotifyCameraSmoothInfo(SDMCameraSmoothOp op, int32_t fps) = 0;

  virtual void NotifyResolutionChange(uint64_t display_id,
                                      SDMConfigAttributes &attr) = 0;

  virtual void NotifyTUIEventDone(uint32_t ret, uint32_t disp_id,
                                  SDMTUIEventType type) = 0;

  virtual void NotifyIdleStatus(bool status) = 0;

  virtual void NotifyCWBStatus(int32_t status, void *buffer) = 0;

  virtual void OnHdmiHotplug(bool connected) = 0;
};

} // namespace sdm

#endif // __SDM_COMPOSITOR_SIDEAND_CB_INTF_H__
