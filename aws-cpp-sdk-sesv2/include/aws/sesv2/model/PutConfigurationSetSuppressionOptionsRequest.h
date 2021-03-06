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
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change your account's suppression preferences for an specific
   * configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API PutConfigurationSetSuppressionOptionsRequest : public SESV2Request
  {
  public:
    PutConfigurationSetSuppressionOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetSuppressionOptions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const{ return m_suppressedReasons; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = value; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = std::move(value); }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { SetSuppressedReasons(value); return *this;}

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& WithSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { SetSuppressedReasons(std::move(value)); return *this;}

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& AddSuppressedReasons(const SuppressionListReason& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(value); return *this; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutConfigurationSetSuppressionOptionsRequest& AddSuppressedReasons(SuppressionListReason&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    Aws::Vector<SuppressionListReason> m_suppressedReasons;
    bool m_suppressedReasonsHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
