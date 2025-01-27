#include "./GestureDescription.hpp"
#include "./AccessibilityService_GestureResultCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	AccessibilityService_GestureResultCallback::AccessibilityService_GestureResultCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityService_GestureResultCallback::AccessibilityService_GestureResultCallback()
		: JObject(
			"android.accessibilityservice.AccessibilityService$GestureResultCallback",
			"()V"
		) {}
	
	// Methods
	void AccessibilityService_GestureResultCallback::onCancelled(android::accessibilityservice::GestureDescription arg0) const
	{
		callMethod<void>(
			"onCancelled",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.object()
		);
	}
	void AccessibilityService_GestureResultCallback::onCompleted(android::accessibilityservice::GestureDescription arg0) const
	{
		callMethod<void>(
			"onCompleted",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

