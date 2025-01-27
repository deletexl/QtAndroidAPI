#include "./AccessibilityButtonController.hpp"
#include "./AccessibilityButtonController_AccessibilityButtonCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	AccessibilityButtonController_AccessibilityButtonCallback::AccessibilityButtonController_AccessibilityButtonCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityButtonController_AccessibilityButtonCallback::AccessibilityButtonController_AccessibilityButtonCallback()
		: JObject(
			"android.accessibilityservice.AccessibilityButtonController$AccessibilityButtonCallback",
			"()V"
		) {}
	
	// Methods
	void AccessibilityButtonController_AccessibilityButtonCallback::onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onAvailabilityChanged",
			"(Landroid/accessibilityservice/AccessibilityButtonController;Z)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityButtonController_AccessibilityButtonCallback::onClicked(android::accessibilityservice::AccessibilityButtonController arg0) const
	{
		callMethod<void>(
			"onClicked",
			"(Landroid/accessibilityservice/AccessibilityButtonController;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

