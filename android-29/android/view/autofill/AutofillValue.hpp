#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::autofill
{
	class AutofillValue : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutofillValue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AutofillValue(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject forDate(jlong arg0);
		static QAndroidJniObject forList(jint arg0);
		static QAndroidJniObject forText(jstring arg0);
		static QAndroidJniObject forToggle(jboolean arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDateValue();
		jint getListValue();
		jstring getTextValue();
		jboolean getToggleValue();
		jint hashCode();
		jboolean isDate();
		jboolean isList();
		jboolean isText();
		jboolean isToggle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::autofill

