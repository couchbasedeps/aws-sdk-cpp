﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageFeedbackStatus.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class PutMessageFeedbackResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutMessageFeedbackResult();
    AWS_PINPOINTSMSVOICEV2_API PutMessageFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API PutMessageFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }
    inline PutMessageFeedbackResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline PutMessageFeedbackResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline PutMessageFeedbackResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the message.</p>
     */
    inline const MessageFeedbackStatus& GetMessageFeedbackStatus() const{ return m_messageFeedbackStatus; }
    inline void SetMessageFeedbackStatus(const MessageFeedbackStatus& value) { m_messageFeedbackStatus = value; }
    inline void SetMessageFeedbackStatus(MessageFeedbackStatus&& value) { m_messageFeedbackStatus = std::move(value); }
    inline PutMessageFeedbackResult& WithMessageFeedbackStatus(const MessageFeedbackStatus& value) { SetMessageFeedbackStatus(value); return *this;}
    inline PutMessageFeedbackResult& WithMessageFeedbackStatus(MessageFeedbackStatus&& value) { SetMessageFeedbackStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutMessageFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutMessageFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutMessageFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_messageId;

    MessageFeedbackStatus m_messageFeedbackStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
