#include "./AttachCallback.hpp"
#include "./AwareResources.hpp"
#include "./Characteristics.hpp"
#include "./IdentityChangedListener.hpp"
#include "../../../os/Handler.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareManager.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JString WifiAwareManager::ACTION_WIFI_AWARE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_INITIATOR()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_INITIATOR"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_RESPONDER()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_RESPONDER"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN"
		);
	}
	
	// QJniObject forward
	WifiAwareManager::WifiAwareManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/net/wifi/aware/IdentityChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::net::wifi::aware::AwareResources WifiAwareManager::getAvailableAwareResources() const
	{
		return callObjectMethod(
			"getAvailableAwareResources",
			"()Landroid/net/wifi/aware/AwareResources;"
		);
	}
	android::net::wifi::aware::Characteristics WifiAwareManager::getCharacteristics() const
	{
		return callObjectMethod(
			"getCharacteristics",
			"()Landroid/net/wifi/aware/Characteristics;"
		);
	}
	jboolean WifiAwareManager::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean WifiAwareManager::isDeviceAttached() const
	{
		return callMethod<jboolean>(
			"isDeviceAttached",
			"()Z"
		);
	}
	jboolean WifiAwareManager::isInstantCommunicationModeEnabled() const
	{
		return callMethod<jboolean>(
			"isInstantCommunicationModeEnabled",
			"()Z"
		);
	}
} // namespace android::net::wifi::aware

