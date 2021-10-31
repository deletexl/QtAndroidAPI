#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WifiNetworkSuggestion : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::net::MacAddress getBssid();
		android::net::wifi::WifiEnterpriseConfig getEnterpriseConfig();
		jstring getPassphrase();
		android::net::wifi::hotspot2::PasspointConfiguration getPasspointConfig();
		jint getPriority();
		jstring getSsid();
		jint hashCode();
		jboolean isAppInteractionRequired();
		jboolean isCredentialSharedWithUser();
		jboolean isEnhancedOpen();
		jboolean isHiddenSsid();
		jboolean isInitialAutojoinEnabled();
		jboolean isMetered();
		jboolean isUntrusted();
		jboolean isUserInteractionRequired();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi
