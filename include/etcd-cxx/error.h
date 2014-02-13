/*
 *    Copyright 2014 Zhe Yuan
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef _ETCD_CXX_ERROR_H_
#define _ETCD_CXX_ERROR_H_
#include <string>

namespace etcd {
namespace error {
    enum type {
        EcodeKeyNotFound    = 100,
        EcodeTestFailed     = 101,
        EcodeNotFile        = 102,
        EcodeNoMorePeer     = 103,
        EcodeNotDir         = 104,
        EcodeNodeExist      = 105,
        EcodeKeyIsPreserved = 106,

        EcodeValueRequired     = 200,
        EcodePrevValueRequired = 201,
        EcodeTTLNaN            = 202,
        EcodeIndexNaN          = 203,

        EcodeRaftInternal = 300,
        EcodeLeaderElect  = 301,

        EcodeWatcherCleared = 400,
        EcodeEventIndexCleared = 401,
    };

    const std::string toString(type errorCode);
}  // namespace error
}  // namespace etcd

#endif  /* _ETCD_CXX_ERROR_H_ */

