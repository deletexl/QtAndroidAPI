#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::telephony::mbms
{
	class DownloadRequest;
}
namespace android::telephony::mbms
{
	class FileServiceInfo;
}

namespace android::telephony::mbms
{
	class DownloadRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		DownloadRequest_Builder(android::net::Uri arg0, android::net::Uri arg1);
		
		// Methods
		static android::telephony::mbms::DownloadRequest_Builder fromDownloadRequest(android::telephony::mbms::DownloadRequest arg0);
		static android::telephony::mbms::DownloadRequest_Builder fromSerializedRequest(jbyteArray arg0);
		android::telephony::mbms::DownloadRequest build();
		android::telephony::mbms::DownloadRequest_Builder setAppIntent(android::content::Intent arg0);
		android::telephony::mbms::DownloadRequest_Builder setServiceInfo(android::telephony::mbms::FileServiceInfo arg0);
		android::telephony::mbms::DownloadRequest_Builder setSubscriptionId(jint arg0);
	};
} // namespace android::telephony::mbms
