﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetAccessGrantsLocationResult
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantsLocationResult();
    AWS_S3CONTROL_API GetAccessGrantsLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessGrantsLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The date and time when you registered the location. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAccessGrantsLocationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAccessGrantsLocationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationId = value; }
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationId = std::move(value); }
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationId.assign(value); }
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registered location. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationArn() const{ return m_accessGrantsLocationArn; }
    inline void SetAccessGrantsLocationArn(const Aws::String& value) { m_accessGrantsLocationArn = value; }
    inline void SetAccessGrantsLocationArn(Aws::String&& value) { m_accessGrantsLocationArn = std::move(value); }
    inline void SetAccessGrantsLocationArn(const char* value) { m_accessGrantsLocationArn.assign(value); }
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationArn(const Aws::String& value) { SetAccessGrantsLocationArn(value); return *this;}
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationArn(Aws::String&& value) { SetAccessGrantsLocationArn(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithAccessGrantsLocationArn(const char* value) { SetAccessGrantsLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI path to the registered location. The location scope can be the
     * default S3 location <code>s3://</code>, the S3 path to a bucket, or the S3 path
     * to a bucket and prefix. A prefix in S3 is a string of characters at the
     * beginning of an object key name used to organize the objects that you store in
     * your S3 buckets. For example, object key names that start with the
     * <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline const Aws::String& GetLocationScope() const{ return m_locationScope; }
    inline void SetLocationScope(const Aws::String& value) { m_locationScope = value; }
    inline void SetLocationScope(Aws::String&& value) { m_locationScope = std::move(value); }
    inline void SetLocationScope(const char* value) { m_locationScope.assign(value); }
    inline GetAccessGrantsLocationResult& WithLocationScope(const Aws::String& value) { SetLocationScope(value); return *this;}
    inline GetAccessGrantsLocationResult& WithLocationScope(Aws::String&& value) { SetLocationScope(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithLocationScope(const char* value) { SetLocationScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline const Aws::String& GetIAMRoleArn() const{ return m_iAMRoleArn; }
    inline void SetIAMRoleArn(const Aws::String& value) { m_iAMRoleArn = value; }
    inline void SetIAMRoleArn(Aws::String&& value) { m_iAMRoleArn = std::move(value); }
    inline void SetIAMRoleArn(const char* value) { m_iAMRoleArn.assign(value); }
    inline GetAccessGrantsLocationResult& WithIAMRoleArn(const Aws::String& value) { SetIAMRoleArn(value); return *this;}
    inline GetAccessGrantsLocationResult& WithIAMRoleArn(Aws::String&& value) { SetIAMRoleArn(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithIAMRoleArn(const char* value) { SetIAMRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccessGrantsLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccessGrantsLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetAccessGrantsLocationResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetAccessGrantsLocationResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetAccessGrantsLocationResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_accessGrantsLocationId;

    Aws::String m_accessGrantsLocationArn;

    Aws::String m_locationScope;

    Aws::String m_iAMRoleArn;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
