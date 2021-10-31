#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}

namespace android::view::translation
{
	class TranslationResponse : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TRANSLATION_STATUS_CONTEXT_UNSUPPORTED();
		static jint TRANSLATION_STATUS_SUCCESS();
		static jint TRANSLATION_STATUS_UNKNOWN_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::util::SparseArray getTranslationResponseValues();
		jint getTranslationStatus();
		android::util::SparseArray getViewTranslationResponses();
		jboolean isFinalResponse();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::translation

