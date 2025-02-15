#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SessionTranscriptMismatchException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SessionTranscriptMismatchException::SessionTranscriptMismatchException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.SessionTranscriptMismatchException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

