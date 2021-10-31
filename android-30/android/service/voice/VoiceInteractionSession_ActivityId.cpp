#include "./VoiceInteractionSession_ActivityId.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_ActivityId::VoiceInteractionSession_ActivityId(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean VoiceInteractionSession_ActivityId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VoiceInteractionSession_ActivityId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::service::voice
