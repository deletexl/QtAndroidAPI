#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiConfiguration;
}
namespace android::net::wifi
{
	class WifiManager;
}

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_LocalOnlyHotspotReservation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_LocalOnlyHotspotReservation(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		android::net::wifi::WifiConfiguration getWifiConfiguration() const;
	};
} // namespace android::net::wifi

