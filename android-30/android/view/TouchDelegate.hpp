#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
}

namespace android::view
{
	class TouchDelegate : public JObject
	{
	public:
		// Fields
		static jint ABOVE();
		static jint BELOW();
		static jint TO_LEFT();
		static jint TO_RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TouchDelegate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TouchDelegate(QJniObject obj);
		
		// Constructors
		TouchDelegate(android::graphics::Rect arg0, android::view::View arg1);
		
		// Methods
		android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo getTouchDelegateInfo() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTouchExplorationHoverEvent(android::view::MotionEvent arg0) const;
	};
} // namespace android::view

