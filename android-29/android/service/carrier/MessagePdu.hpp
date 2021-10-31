#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class MessagePdu : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePdu(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MessagePdu(QAndroidJniObject obj);
		
		// Constructors
		MessagePdu(__JniBaseClass arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getPdus();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

