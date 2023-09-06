/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#pragma once

#include <app/InteractionModelEngine.h>
#include <app-common/zap-generated/cluster-objects.h>
#include <app/data-model/DecodableList.h>
#include <app/util/af-enums.h>
#include <app/util/im-client-callbacks.h>
#include <inttypes.h>
#include <lib/support/FunctionTraits.h>
#include <lib/support/Span.h>

// List specific responses
typedef void (*IdentifyGeneratedCommandListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*IdentifyAcceptedCommandListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*IdentifyEventListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::EventId> & data);
typedef void (*IdentifyAttributeListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);
typedef void (*OtaSoftwareUpdateProviderGeneratedCommandListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*OtaSoftwareUpdateProviderAcceptedCommandListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::CommandId> & data);
typedef void (*OtaSoftwareUpdateProviderEventListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::EventId> & data);
typedef void (*OtaSoftwareUpdateProviderAttributeListListAttributeCallback)(void * context, const chip::app::DataModel::DecodableList<chip::AttributeId> & data);

