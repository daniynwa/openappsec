// Copyright (C) 2022 Check Point Software Technologies Ltd. All rights reserved.

// Licensed under the Apache License, Version 2.0 (the "License");
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __I_PROXY_CONFIGURATION_H__
#define __I_PROXY_CONFIGURATION_H__

#include <string>

#include "maybe_res.h"

enum class ProxyProtocol
{
    HTTP,
    HTTPS
};

class I_ProxyConfiguration
{
public:
    virtual Maybe<std::string> getProxyDomain(ProxyProtocol protocol)      const = 0;
    virtual Maybe<std::string> getProxyCredentials(ProxyProtocol protocol) const = 0;
    virtual Maybe<uint16_t> getProxyPort(ProxyProtocol protocol)           const = 0;
    virtual bool getProxyExists(ProxyProtocol protocol)                    const = 0;
    virtual Maybe<std::string> getProxyAddress(ProxyProtocol protocol)     const = 0;
    virtual Maybe<void> loadProxy()                                              = 0;
};

#endif // __I_PROXY_CONFIGURATION_H__
