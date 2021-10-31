#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ClipData_Item;
}
namespace android::content
{
	class ClipDescription;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class ClipData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ClipData(QAndroidJniObject obj);
		
		// Constructors
		ClipData(android::content::ClipData &arg0);
		ClipData(android::content::ClipDescription arg0, android::content::ClipData_Item arg1);
		ClipData(jstring arg0, jarray arg1, android::content::ClipData_Item arg2);
		
		// Methods
		static QAndroidJniObject newHtmlText(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject newIntent(jstring arg0, android::content::Intent arg1);
		static QAndroidJniObject newPlainText(jstring arg0, jstring arg1);
		static QAndroidJniObject newRawUri(jstring arg0, android::net::Uri arg1);
		static QAndroidJniObject newUri(android::content::ContentResolver arg0, jstring arg1, android::net::Uri arg2);
		void addItem(android::content::ClipData_Item arg0);
		void addItem(android::content::ContentResolver arg0, android::content::ClipData_Item arg1);
		jint describeContents();
		QAndroidJniObject getDescription();
		QAndroidJniObject getItemAt(jint arg0);
		jint getItemCount();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

