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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>The response received when ConfirmPublicVirtualInterface is
   * called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmPublicVirtualInterfaceResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API ConfirmPublicVirtualInterfaceResult
  {
  public:
    ConfirmPublicVirtualInterfaceResult();
    ConfirmPublicVirtualInterfaceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ConfirmPublicVirtualInterfaceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

    
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }

    
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = std::move(value); }

    
    inline ConfirmPublicVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

    
    inline ConfirmPublicVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(std::move(value)); return *this;}

  private:
    VirtualInterfaceState m_virtualInterfaceState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
