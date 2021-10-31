#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class EditorInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint IME_ACTION_DONE();
		static jint IME_ACTION_GO();
		static jint IME_ACTION_NEXT();
		static jint IME_ACTION_NONE();
		static jint IME_ACTION_PREVIOUS();
		static jint IME_ACTION_SEARCH();
		static jint IME_ACTION_SEND();
		static jint IME_ACTION_UNSPECIFIED();
		static jint IME_FLAG_FORCE_ASCII();
		static jint IME_FLAG_NAVIGATE_NEXT();
		static jint IME_FLAG_NAVIGATE_PREVIOUS();
		static jint IME_FLAG_NO_ACCESSORY_ACTION();
		static jint IME_FLAG_NO_ENTER_ACTION();
		static jint IME_FLAG_NO_EXTRACT_UI();
		static jint IME_FLAG_NO_FULLSCREEN();
		static jint IME_FLAG_NO_PERSONALIZED_LEARNING();
		static jint IME_MASK_ACTION();
		static jint IME_NULL();
		jint actionId();
		jstring actionLabel();
		jarray contentMimeTypes();
		QAndroidJniObject extras();
		jint fieldId();
		jstring fieldName();
		QAndroidJniObject hintLocales();
		jstring hintText();
		jint imeOptions();
		jint initialCapsMode();
		jint initialSelEnd();
		jint initialSelStart();
		jint inputType();
		jstring label();
		jstring packageName();
		jstring privateImeOptions();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EditorInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EditorInfo(QAndroidJniObject obj);
		
		// Constructors
		EditorInfo();
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		void makeCompatible(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

