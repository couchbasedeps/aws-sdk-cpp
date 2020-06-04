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

#include <aws/medialive/model/InputDeviceHdSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDeviceHdSettings::InputDeviceHdSettings() : 
    m_activeInput(InputDeviceActiveInput::NOT_SET),
    m_activeInputHasBeenSet(false),
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_deviceState(InputDeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false),
    m_framerate(0.0),
    m_framerateHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_scanType(InputDeviceScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

InputDeviceHdSettings::InputDeviceHdSettings(JsonView jsonValue) : 
    m_activeInput(InputDeviceActiveInput::NOT_SET),
    m_activeInputHasBeenSet(false),
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_deviceState(InputDeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false),
    m_framerate(0.0),
    m_framerateHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_scanType(InputDeviceScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceHdSettings& InputDeviceHdSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeInput"))
  {
    m_activeInput = InputDeviceActiveInputMapper::GetInputDeviceActiveInputForName(jsonValue.GetString("activeInput"));

    m_activeInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuredInput"))
  {
    m_configuredInput = InputDeviceConfiguredInputMapper::GetInputDeviceConfiguredInputForName(jsonValue.GetString("configuredInput"));

    m_configuredInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceState"))
  {
    m_deviceState = InputDeviceStateMapper::GetInputDeviceStateForName(jsonValue.GetString("deviceState"));

    m_deviceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetDouble("framerate");

    m_framerateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = InputDeviceScanTypeMapper::GetInputDeviceScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceHdSettings::Jsonize() const
{
  JsonValue payload;

  if(m_activeInputHasBeenSet)
  {
   payload.WithString("activeInput", InputDeviceActiveInputMapper::GetNameForInputDeviceActiveInput(m_activeInput));
  }

  if(m_configuredInputHasBeenSet)
  {
   payload.WithString("configuredInput", InputDeviceConfiguredInputMapper::GetNameForInputDeviceConfiguredInput(m_configuredInput));
  }

  if(m_deviceStateHasBeenSet)
  {
   payload.WithString("deviceState", InputDeviceStateMapper::GetNameForInputDeviceState(m_deviceState));
  }

  if(m_framerateHasBeenSet)
  {
   payload.WithDouble("framerate", m_framerate);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", InputDeviceScanTypeMapper::GetNameForInputDeviceScanType(m_scanType));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws