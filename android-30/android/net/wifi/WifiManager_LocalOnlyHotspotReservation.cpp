#include "./SoftApConfiguration.hpp"
#include "./WifiConfiguration.hpp"
#include "./WifiManager.hpp"
#include "./WifiManager_LocalOnlyHotspotReservation.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_LocalOnlyHotspotReservation::WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_LocalOnlyHotspotReservation::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::net::wifi::SoftApConfiguration WifiManager_LocalOnlyHotspotReservation::getSoftApConfiguration()
	{
		return callObjectMethod(
			"getSoftApConfiguration",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	android::net::wifi::WifiConfiguration WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration()
	{
		return callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace android::net::wifi
