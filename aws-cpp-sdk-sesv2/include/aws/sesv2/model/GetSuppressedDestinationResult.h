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
#include <aws/sesv2/model/SuppressedDestination.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the suppressed email destination.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestinationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API GetSuppressedDestinationResult
  {
  public:
    GetSuppressedDestinationResult();
    GetSuppressedDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSuppressedDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the suppressed email destination.</p>
     */
    inline const SuppressedDestination& GetSuppressedDestination() const{ return m_suppressedDestination; }

    /**
     * <p>An object containing information about the suppressed email destination.</p>
     */
    inline void SetSuppressedDestination(const SuppressedDestination& value) { m_suppressedDestination = value; }

    /**
     * <p>An object containing information about the suppressed email destination.</p>
     */
    inline void SetSuppressedDestination(SuppressedDestination&& value) { m_suppressedDestination = std::move(value); }

    /**
     * <p>An object containing information about the suppressed email destination.</p>
     */
    inline GetSuppressedDestinationResult& WithSuppressedDestination(const SuppressedDestination& value) { SetSuppressedDestination(value); return *this;}

    /**
     * <p>An object containing information about the suppressed email destination.</p>
     */
    inline GetSuppressedDestinationResult& WithSuppressedDestination(SuppressedDestination&& value) { SetSuppressedDestination(std::move(value)); return *this;}

  private:

    SuppressedDestination m_suppressedDestination;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
