#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AccessibilityRecord.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::accessibility
{
	class AccessibilityRecord;
}

namespace android::view::accessibility
{
	class AccessibilityEvent : public android::view::accessibility::AccessibilityRecord
	{
	public:
		// Fields
		static jint CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION();
		static jint CONTENT_CHANGE_TYPE_PANE_APPEARED();
		static jint CONTENT_CHANGE_TYPE_PANE_DISAPPEARED();
		static jint CONTENT_CHANGE_TYPE_PANE_TITLE();
		static jint CONTENT_CHANGE_TYPE_SUBTREE();
		static jint CONTENT_CHANGE_TYPE_TEXT();
		static jint CONTENT_CHANGE_TYPE_UNDEFINED();
		static QAndroidJniObject CREATOR();
		static jint INVALID_POSITION();
		static jint MAX_TEXT_LENGTH();
		static jint TYPES_ALL_MASK();
		static jint TYPE_ANNOUNCEMENT();
		static jint TYPE_ASSIST_READING_CONTEXT();
		static jint TYPE_GESTURE_DETECTION_END();
		static jint TYPE_GESTURE_DETECTION_START();
		static jint TYPE_NOTIFICATION_STATE_CHANGED();
		static jint TYPE_TOUCH_EXPLORATION_GESTURE_END();
		static jint TYPE_TOUCH_EXPLORATION_GESTURE_START();
		static jint TYPE_TOUCH_INTERACTION_END();
		static jint TYPE_TOUCH_INTERACTION_START();
		static jint TYPE_VIEW_ACCESSIBILITY_FOCUSED();
		static jint TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED();
		static jint TYPE_VIEW_CLICKED();
		static jint TYPE_VIEW_CONTEXT_CLICKED();
		static jint TYPE_VIEW_FOCUSED();
		static jint TYPE_VIEW_HOVER_ENTER();
		static jint TYPE_VIEW_HOVER_EXIT();
		static jint TYPE_VIEW_LONG_CLICKED();
		static jint TYPE_VIEW_SCROLLED();
		static jint TYPE_VIEW_SELECTED();
		static jint TYPE_VIEW_TEXT_CHANGED();
		static jint TYPE_VIEW_TEXT_SELECTION_CHANGED();
		static jint TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY();
		static jint TYPE_WINDOWS_CHANGED();
		static jint TYPE_WINDOW_CONTENT_CHANGED();
		static jint TYPE_WINDOW_STATE_CHANGED();
		static jint WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED();
		static jint WINDOWS_CHANGE_ACTIVE();
		static jint WINDOWS_CHANGE_ADDED();
		static jint WINDOWS_CHANGE_BOUNDS();
		static jint WINDOWS_CHANGE_CHILDREN();
		static jint WINDOWS_CHANGE_FOCUSED();
		static jint WINDOWS_CHANGE_LAYER();
		static jint WINDOWS_CHANGE_PARENT();
		static jint WINDOWS_CHANGE_PIP();
		static jint WINDOWS_CHANGE_REMOVED();
		static jint WINDOWS_CHANGE_TITLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityEvent(const char *className, const char *sig, Ts...agv) : android::view::accessibility::AccessibilityRecord(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring eventTypeToString(jint arg0);
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(android::view::accessibility::AccessibilityEvent arg0);
		static QAndroidJniObject obtain(jint arg0);
		void appendRecord(android::view::accessibility::AccessibilityRecord arg0);
		jint describeContents();
		jint getAction();
		jint getContentChangeTypes();
		jlong getEventTime();
		jint getEventType();
		jint getMovementGranularity();
		jstring getPackageName();
		QAndroidJniObject getRecord(jint arg0);
		jint getRecordCount();
		jint getWindowChanges();
		void initFromParcel(android::os::Parcel arg0);
		void recycle();
		void setAction(jint arg0);
		void setContentChangeTypes(jint arg0);
		void setEventTime(jlong arg0);
		void setEventType(jint arg0);
		void setMovementGranularity(jint arg0);
		void setPackageName(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::accessibility

