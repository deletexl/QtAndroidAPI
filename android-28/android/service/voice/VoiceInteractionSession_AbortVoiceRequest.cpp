#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_AbortVoiceRequest::VoiceInteractionSession_AbortVoiceRequest(QJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	JString VoiceInteractionSession_AbortVoiceRequest::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::VoiceInteractor_Prompt VoiceInteractionSession_AbortVoiceRequest::getVoicePrompt() const
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_AbortVoiceRequest::sendAbortResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

