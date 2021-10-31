#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class GatewayInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GatewayInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GatewayInfo(QAndroidJniObject obj);
		
		// Constructors
		GatewayInfo(jstring arg0, android::net::Uri arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents();
		android::net::Uri getGatewayAddress();
		jstring getGatewayProviderPackageName();
		android::net::Uri getOriginalAddress();
		jboolean isEmpty();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom
