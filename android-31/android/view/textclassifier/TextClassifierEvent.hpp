#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassificationContext;
}
namespace android::view::textclassifier
{
	class TextClassifierEvent_1;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent : public JObject
	{
	public:
		// Fields
		static jint CATEGORY_CONVERSATION_ACTIONS();
		static jint CATEGORY_LANGUAGE_DETECTION();
		static jint CATEGORY_LINKIFY();
		static jint CATEGORY_SELECTION();
		static JObject CREATOR();
		static jint TYPE_ACTIONS_GENERATED();
		static jint TYPE_ACTIONS_SHOWN();
		static jint TYPE_AUTO_SELECTION();
		static jint TYPE_COPY_ACTION();
		static jint TYPE_CUT_ACTION();
		static jint TYPE_LINKS_GENERATED();
		static jint TYPE_LINK_CLICKED();
		static jint TYPE_MANUAL_REPLY();
		static jint TYPE_OTHER_ACTION();
		static jint TYPE_OVERTYPE();
		static jint TYPE_PASTE_ACTION();
		static jint TYPE_SELECTION_DESTROYED();
		static jint TYPE_SELECTION_DRAG();
		static jint TYPE_SELECTION_MODIFIED();
		static jint TYPE_SELECTION_RESET();
		static jint TYPE_SELECTION_STARTED();
		static jint TYPE_SELECT_ALL();
		static jint TYPE_SHARE_ACTION();
		static jint TYPE_SMART_ACTION();
		static jint TYPE_SMART_SELECTION_MULTI();
		static jint TYPE_SMART_SELECTION_SINGLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jintArray getActionIndices();
		jarray getEntityTypes();
		jint getEventCategory();
		android::view::textclassifier::TextClassificationContext getEventContext();
		jint getEventIndex();
		jint getEventType();
		android::os::Bundle getExtras();
		android::icu::util::ULocale getLocale();
		jstring getModelName();
		jstring getResultId();
		jfloatArray getScores();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

