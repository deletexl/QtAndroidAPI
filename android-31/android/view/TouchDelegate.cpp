#include "../graphics/Rect.hpp"
#include "./MotionEvent.hpp"
#include "./View.hpp"
#include "./accessibility/AccessibilityNodeInfo_TouchDelegateInfo.hpp"
#include "./TouchDelegate.hpp"

namespace android::view
{
	// Fields
	jint TouchDelegate::ABOVE()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"ABOVE"
		);
	}
	jint TouchDelegate::BELOW()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"BELOW"
		);
	}
	jint TouchDelegate::TO_LEFT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_LEFT"
		);
	}
	jint TouchDelegate::TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.TouchDelegate",
			"TO_RIGHT"
		);
	}
	
	// QJniObject forward
	TouchDelegate::TouchDelegate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TouchDelegate::TouchDelegate(android::graphics::Rect arg0, android::view::View arg1)
		: JObject(
			"android.view.TouchDelegate",
			"(Landroid/graphics/Rect;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo TouchDelegate::getTouchDelegateInfo() const
	{
		return callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	jboolean TouchDelegate::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TouchDelegate::onTouchExplorationHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchExplorationHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::view

