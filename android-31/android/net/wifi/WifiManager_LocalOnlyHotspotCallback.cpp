#include "./WifiManager_LocalOnlyHotspotReservation.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_GENERIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_GENERIC"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_INCOMPATIBLE_MODE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_INCOMPATIBLE_MODE"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_NO_CHANNEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_NO_CHANNEL"
		);
	}
	jint WifiManager_LocalOnlyHotspotCallback::ERROR_TETHERING_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_TETHERING_DISALLOWED"
		);
	}
	
	// QJniObject forward
	WifiManager_LocalOnlyHotspotCallback::WifiManager_LocalOnlyHotspotCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiManager_LocalOnlyHotspotCallback::WifiManager_LocalOnlyHotspotCallback()
		: JObject(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_LocalOnlyHotspotCallback::onFailed(jint arg0) const
	{
		callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_LocalOnlyHotspotCallback::onStarted(android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0) const
	{
		callMethod<void>(
			"onStarted",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotReservation;)V",
			arg0.object()
		);
	}
	void WifiManager_LocalOnlyHotspotCallback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net::wifi

