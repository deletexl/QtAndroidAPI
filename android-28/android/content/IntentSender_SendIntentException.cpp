#include "../../java/lang/Exception.hpp"
#include "../../JString.hpp"
#include "./IntentSender_SendIntentException.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	IntentSender_SendIntentException::IntentSender_SendIntentException(QJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	IntentSender_SendIntentException::IntentSender_SendIntentException()
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
			"()V"
		) {}
	IntentSender_SendIntentException::IntentSender_SendIntentException(java::lang::Exception arg0)
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	IntentSender_SendIntentException::IntentSender_SendIntentException(JString arg0)
		: android::util::AndroidException(
			"android.content.IntentSender$SendIntentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content

