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

#include "form_data_mgr.h"

namespace {
    bool g_mockGetFormRecordRet = true;
}

void MockGetFormRecord(bool mockRet)
{
    g_mockGetFormRecordRet = mockRet;
}

namespace OHOS {
namespace AppExecFwk {
bool FormDataMgr::GetFormRecord(const int64_t formId, FormRecord &formRecord) const
{
    FormRecord formRecord_;
    formRecord_.formId = 100;
    formRecord = formRecord_;
    return g_mockGetFormRecordRet;
}

void FormDataMgr::GetFormHostRemoteObj(const int64_t formId, std::vector<sptr<IRemoteObject>> &formHostObjs) const
{
    formHostObjs.emplace_back(nullptr);
}
}  // namespace AppExecFwk
}  // namespace OHOS
