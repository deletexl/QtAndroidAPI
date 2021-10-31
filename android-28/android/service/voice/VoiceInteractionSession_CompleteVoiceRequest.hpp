#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::app
{
	class VoiceInteractor_Prompt;
}
namespace android::os
{
	class Bundle;
}

namespace android::service::voice
{
	class VoiceInteractionSession_CompleteVoiceRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_CompleteVoiceRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getMessage();
		android::app::VoiceInteractor_Prompt getVoicePrompt();
		void sendCompleteResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice
