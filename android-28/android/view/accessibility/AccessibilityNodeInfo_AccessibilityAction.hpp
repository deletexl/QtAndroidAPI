#pragma once

#include "../../../JObject.hpp"

class JString;
class JObject;
class JString;

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction : public JObject
	{
	public:
		// Fields
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_ACCESSIBILITY_FOCUS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CLEAR_ACCESSIBILITY_FOCUS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CLEAR_FOCUS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CLEAR_SELECTION();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CLICK();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_COLLAPSE();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CONTEXT_CLICK();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_COPY();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_CUT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_DISMISS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_EXPAND();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_FOCUS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_HIDE_TOOLTIP();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_LONG_CLICK();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_MOVE_WINDOW();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_NEXT_AT_MOVEMENT_GRANULARITY();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_NEXT_HTML_ELEMENT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_PASTE();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_PREVIOUS_HTML_ELEMENT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_BACKWARD();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_DOWN();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_FORWARD();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_LEFT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_RIGHT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_TO_POSITION();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SCROLL_UP();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SELECT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SET_PROGRESS();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SET_SELECTION();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SET_TEXT();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SHOW_ON_SCREEN();
		static android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction ACTION_SHOW_TOOLTIP();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_AccessibilityAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_AccessibilityAction(QJniObject obj);
		
		// Constructors
		AccessibilityNodeInfo_AccessibilityAction(jint arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getId() const;
		JString getLabel() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::view::accessibility

