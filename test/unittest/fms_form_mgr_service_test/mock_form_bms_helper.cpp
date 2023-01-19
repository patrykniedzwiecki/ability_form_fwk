/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <gtest/gtest.h>

#include "form_bms_helper.h"
#include "form_mgr_errors.h"
#include "hilog_wrapper.h"

namespace {
    int32_t getCallerBundleName = OHOS::ERR_OK;
}

void MockGetCallerBundleName(int32_t mockRet)
{
    getCallerBundleName = mockRet;
}

namespace OHOS {
namespace AppExecFwk {
FormBmsHelper::FormBmsHelper()
{}

FormBmsHelper::~FormBmsHelper()
{}

int32_t FormBmsHelper::GetCallerBundleName(std::string &callerBundleName)
{
    GTEST_LOG_(INFO) << "GetCallerBundleName called " << getCallerBundleName;
    return getCallerBundleName;
}
} // namespace AppExecFwk
} // namespace OHOS