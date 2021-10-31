#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NdefRecord;
}
namespace android::os
{
	class Parcel;
}

namespace android::nfc
{
	class NdefMessage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NdefMessage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NdefMessage(QAndroidJniObject obj);
		
		// Constructors
		NdefMessage(jbyteArray arg0);
		NdefMessage(jarray arg0);
		NdefMessage(android::nfc::NdefRecord arg0, jarray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getByteArrayLength();
		jarray getRecords();
		jint hashCode();
		jbyteArray toByteArray();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

