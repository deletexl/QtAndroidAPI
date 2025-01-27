#include "../os/Handler.hpp"
#include "../../JString.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	AccessibilityService_SoftKeyboardController::AccessibilityService_SoftKeyboardController(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.object()
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint AccessibilityService_SoftKeyboardController::getShowMode() const
	{
		return callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setShowMode",
			"(I)Z",
			arg0
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::switchToInputMethod(JString arg0) const
	{
		return callMethod<jboolean>(
			"switchToInputMethod",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::accessibilityservice

