#include "../../JString.hpp"
#include "./WebResourceError.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebResourceError::WebResourceError(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString WebResourceError::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint WebResourceError::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::webkit

