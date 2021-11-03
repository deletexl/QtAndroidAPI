#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassification;
}
namespace android::view::textclassifier
{
	class TextClassificationSessionId;
}
namespace android::view::textclassifier
{
	class TextSelection;
}

namespace android::view::textclassifier
{
	class SelectionEvent : public JObject
	{
	public:
		// Fields
		static jint ACTION_ABANDON();
		static jint ACTION_COPY();
		static jint ACTION_CUT();
		static jint ACTION_DRAG();
		static jint ACTION_OTHER();
		static jint ACTION_OVERTYPE();
		static jint ACTION_PASTE();
		static jint ACTION_RESET();
		static jint ACTION_SELECT_ALL();
		static jint ACTION_SHARE();
		static jint ACTION_SMART_SHARE();
		static JObject CREATOR();
		static jint EVENT_AUTO_SELECTION();
		static jint EVENT_SELECTION_MODIFIED();
		static jint EVENT_SELECTION_STARTED();
		static jint EVENT_SMART_SELECTION_MULTI();
		static jint EVENT_SMART_SELECTION_SINGLE();
		static jint INVOCATION_LINK();
		static jint INVOCATION_MANUAL();
		static jint INVOCATION_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectionEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectionEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::textclassifier::SelectionEvent createSelectionActionEvent(jint arg0, jint arg1, jint arg2);
		static android::view::textclassifier::SelectionEvent createSelectionActionEvent(jint arg0, jint arg1, jint arg2, android::view::textclassifier::TextClassification arg3);
		static android::view::textclassifier::SelectionEvent createSelectionModifiedEvent(jint arg0, jint arg1);
		static android::view::textclassifier::SelectionEvent createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextClassification arg2);
		static android::view::textclassifier::SelectionEvent createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextSelection arg2);
		static android::view::textclassifier::SelectionEvent createSelectionStartedEvent(jint arg0, jint arg1);
		static jboolean isTerminal(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDurationSincePreviousEvent();
		jlong getDurationSinceSessionStart();
		jint getEnd();
		jstring getEntityType();
		jint getEventIndex();
		jlong getEventTime();
		jint getEventType();
		jint getInvocationMethod();
		jstring getPackageName();
		jstring getResultId();
		android::view::textclassifier::TextClassificationSessionId getSessionId();
		jint getSmartEnd();
		jint getSmartStart();
		jint getStart();
		jstring getWidgetType();
		jstring getWidgetVersion();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

