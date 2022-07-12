/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
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

#ifndef FOUNDATION_ABILITY_FORM_FWK_SERVICES_INCLUDE_KVSTORE_DEATH_RECIPIENT_CALLBACK_H
#define FOUNDATION_ABILITY_FORM_FWK_SERVICES_INCLUDE_KVSTORE_DEATH_RECIPIENT_CALLBACK_H

#include "kvstore_death_recipient.h"

namespace OHOS {
namespace AppExecFwk {
class KvStoreDeathRecipientCallback : public DistributedKv::KvStoreDeathRecipient {
public:
    KvStoreDeathRecipientCallback();
    virtual ~KvStoreDeathRecipientCallback();

    virtual void OnRemoteDied() override;
};
} // namespace AppExecFwk
} // namespace OHOS
#endif // FOUNDATION_ABILITY_FORM_FWK_SERVICES_INCLUDE_KVSTORE_DEATH_RECIPIENT_CALLBACK_H