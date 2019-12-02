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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Regex.h>
#include <aws/wafv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API CreateRegexPatternSetRequest : public WAFV2Request
  {
  public:
    CreateRegexPatternSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRegexPatternSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline CreateRegexPatternSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline CreateRegexPatternSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline CreateRegexPatternSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline CreateRegexPatternSetRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB) or an API Gateway stage. </p> <p>To work with CloudFront, you must also
     * specify the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI -
     * Specify the region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline CreateRegexPatternSetRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline CreateRegexPatternSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline CreateRegexPatternSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline CreateRegexPatternSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Array of regular expression strings. </p>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const{ return m_regularExpressionList; }

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline void SetRegularExpressionList(const Aws::Vector<Regex>& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = value; }

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline void SetRegularExpressionList(Aws::Vector<Regex>&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::move(value); }

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline CreateRegexPatternSetRequest& WithRegularExpressionList(const Aws::Vector<Regex>& value) { SetRegularExpressionList(value); return *this;}

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline CreateRegexPatternSetRequest& WithRegularExpressionList(Aws::Vector<Regex>&& value) { SetRegularExpressionList(std::move(value)); return *this;}

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline CreateRegexPatternSetRequest& AddRegularExpressionList(const Regex& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(value); return *this; }

    /**
     * <p>Array of regular expression strings. </p>
     */
    inline CreateRegexPatternSetRequest& AddRegularExpressionList(Regex&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateRegexPatternSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateRegexPatternSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateRegexPatternSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateRegexPatternSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Regex> m_regularExpressionList;
    bool m_regularExpressionListHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws