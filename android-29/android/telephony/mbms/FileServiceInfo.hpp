#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ServiceInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::mbms
{
	class FileServiceInfo : public android::telephony::mbms::ServiceInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileServiceInfo(const char *className, const char *sig, Ts...agv) : android::telephony::mbms::ServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		FileServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFiles();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

