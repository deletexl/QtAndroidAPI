#pragma once

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
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileServiceInfo(const char *className, const char *sig, Ts...agv) : android::telephony::mbms::ServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		FileServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getFiles() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::mbms

