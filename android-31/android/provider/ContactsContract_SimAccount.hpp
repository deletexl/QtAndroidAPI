#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::provider
{
	class ContactsContract_SimAccount : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADN_EF_TYPE();
		static __JniBaseClass CREATOR();
		static jint FDN_EF_TYPE();
		static jint SDN_EF_TYPE();
		static jint UNKNOWN_EF_TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SimAccount(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SimAccount(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getAccountName();
		jstring getAccountType();
		jint getEfType();
		jint getSimSlotIndex();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::provider

