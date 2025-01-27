#pragma once

#include "./VoiceInteractionSession_Request.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::voice
{
	class VoiceInteractionSession_CommandRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_CommandRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_CommandRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getCommand() const;
		void sendIntermediateResult(android::os::Bundle arg0) const;
		void sendResult(android::os::Bundle arg0) const;
	};
} // namespace android::service::voice

