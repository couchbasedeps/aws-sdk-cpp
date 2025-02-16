﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{
  enum class InstanceOnboardingJobStatusCode
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace InstanceOnboardingJobStatusCodeMapper
{
AWS_CONNECTCAMPAIGNSV2_API InstanceOnboardingJobStatusCode GetInstanceOnboardingJobStatusCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNSV2_API Aws::String GetNameForInstanceOnboardingJobStatusCode(InstanceOnboardingJobStatusCode value);
} // namespace InstanceOnboardingJobStatusCodeMapper
} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
