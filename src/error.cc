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

#include "etcd-cxx/error.h"

const std::string
etcd::error::toString(etcd::error::type errorCode) {
    switch (errorCode) {
    // command related errors
    case    EcodeKeyNotFound        :
        return "Key Not Found";
    case    EcodeTestFailed         :
        return "Test Failed"; 
    case    EcodeNotFile            :
        return "Not A File";
    case    EcodeNoMorePeer         :
        return "Reached the max number of peers in the cluster";
    case    EcodeNotDir             :
        return "Not A Directory";
    case    EcodeNodeExist          :
        return "Already exists";
    case    EcodeKeyIsPreserved     :
        return "The prefix of given key is a keyword in etcd";
    // Post form related errors
    case    EcodeValueRequired      :
        return "Value is Required in POST form";
    case    EcodePrevValueRequired  :
        return "PrevValue is Required in POST form";
    case    EcodeTTLNaN             :
        return "The given TTL in POST form is not a number";
    case    EcodeIndexNaN           :
        return "The given index in POST form is not a number";
    // raft related errors
    case    EcodeRaftInternal       :
        return "Raft Internal Error";
    case    EcodeLeaderElect        :
        return "During Leader Election";
    // etcd related errors
    case    EcodeWatcherCleared     :
        return "watcher is cleared due to etcd recovery";
    case    EcodeEventIndexCleared  :
        return "The event in requested index is outdated and cleared";
    default     :
            ;
    }
    return "UNKNOW";
}
