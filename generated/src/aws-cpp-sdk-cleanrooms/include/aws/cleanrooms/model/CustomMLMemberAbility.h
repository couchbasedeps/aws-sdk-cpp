﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class CustomMLMemberAbility
  {
    NOT_SET,
    CAN_RECEIVE_MODEL_OUTPUT,
    CAN_RECEIVE_INFERENCE_OUTPUT
  };

namespace CustomMLMemberAbilityMapper
{
AWS_CLEANROOMS_API CustomMLMemberAbility GetCustomMLMemberAbilityForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForCustomMLMemberAbility(CustomMLMemberAbility value);
} // namespace CustomMLMemberAbilityMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
