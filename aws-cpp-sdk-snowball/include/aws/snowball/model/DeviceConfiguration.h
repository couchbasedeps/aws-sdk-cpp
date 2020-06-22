﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/SnowconeDeviceConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The container for <code>SnowconeDeviceConfiguration</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DeviceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API DeviceConfiguration
  {
  public:
    DeviceConfiguration();
    DeviceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DeviceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline const SnowconeDeviceConfiguration& GetSnowconeDeviceConfiguration() const{ return m_snowconeDeviceConfiguration; }

    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline bool SnowconeDeviceConfigurationHasBeenSet() const { return m_snowconeDeviceConfigurationHasBeenSet; }

    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline void SetSnowconeDeviceConfiguration(const SnowconeDeviceConfiguration& value) { m_snowconeDeviceConfigurationHasBeenSet = true; m_snowconeDeviceConfiguration = value; }

    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline void SetSnowconeDeviceConfiguration(SnowconeDeviceConfiguration&& value) { m_snowconeDeviceConfigurationHasBeenSet = true; m_snowconeDeviceConfiguration = std::move(value); }

    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline DeviceConfiguration& WithSnowconeDeviceConfiguration(const SnowconeDeviceConfiguration& value) { SetSnowconeDeviceConfiguration(value); return *this;}

    /**
     * <p>Returns information about the device configuration for an AWS Snowcone
     * job.</p>
     */
    inline DeviceConfiguration& WithSnowconeDeviceConfiguration(SnowconeDeviceConfiguration&& value) { SetSnowconeDeviceConfiguration(std::move(value)); return *this;}

  private:

    SnowconeDeviceConfiguration m_snowconeDeviceConfiguration;
    bool m_snowconeDeviceConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws