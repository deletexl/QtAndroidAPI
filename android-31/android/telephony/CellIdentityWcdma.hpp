#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class ClosedSubscriberGroupInfo;
}

namespace android::telephony
{
	class CellIdentityWcdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityWcdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getAdditionalPlmns();
		jint getCid();
		android::telephony::ClosedSubscriberGroupInfo getClosedSubscriberGroupInfo();
		jint getLac();
		jint getMcc();
		jstring getMccString();
		jint getMnc();
		jstring getMncString();
		jstring getMobileNetworkOperator();
		jint getPsc();
		jint getUarfcn();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony
