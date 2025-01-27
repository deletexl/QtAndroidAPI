#pragma once

#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	class VoiceInteractor_Prompt;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class VoiceInteractor_AbortVoiceRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_AbortVoiceRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_AbortVoiceRequest(QJniObject obj);
		
		// Constructors
		VoiceInteractor_AbortVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1);
		
		// Methods
		void onAbortResult(android::os::Bundle arg0) const;
	};
} // namespace android::app

