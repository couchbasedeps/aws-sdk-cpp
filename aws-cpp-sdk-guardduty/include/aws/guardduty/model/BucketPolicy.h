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
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the current bucket policies for the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/BucketPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API BucketPolicy
  {
  public:
    BucketPolicy();
    BucketPolicy(Aws::Utils::Json::JsonView jsonValue);
    BucketPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline bool GetAllowsPublicReadAccess() const{ return m_allowsPublicReadAccess; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline bool AllowsPublicReadAccessHasBeenSet() const { return m_allowsPublicReadAccessHasBeenSet; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline void SetAllowsPublicReadAccess(bool value) { m_allowsPublicReadAccessHasBeenSet = true; m_allowsPublicReadAccess = value; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline BucketPolicy& WithAllowsPublicReadAccess(bool value) { SetAllowsPublicReadAccess(value); return *this;}


    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline bool GetAllowsPublicWriteAccess() const{ return m_allowsPublicWriteAccess; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline bool AllowsPublicWriteAccessHasBeenSet() const { return m_allowsPublicWriteAccessHasBeenSet; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline void SetAllowsPublicWriteAccess(bool value) { m_allowsPublicWriteAccessHasBeenSet = true; m_allowsPublicWriteAccess = value; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through a bucket policy.</p>
     */
    inline BucketPolicy& WithAllowsPublicWriteAccess(bool value) { SetAllowsPublicWriteAccess(value); return *this;}

  private:

    bool m_allowsPublicReadAccess;
    bool m_allowsPublicReadAccessHasBeenSet;

    bool m_allowsPublicWriteAccess;
    bool m_allowsPublicWriteAccessHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws