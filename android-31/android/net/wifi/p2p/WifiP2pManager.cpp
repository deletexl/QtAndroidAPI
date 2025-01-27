#include "../../../content/Context.hpp"
#include "./WifiP2pConfig.hpp"
#include "./WifiP2pManager_Channel.hpp"
#include "./nsd/WifiP2pServiceInfo.hpp"
#include "./nsd/WifiP2pServiceRequest.hpp"
#include "../../../os/Looper.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pManager.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	jint WifiP2pManager::BUSY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"BUSY"
		);
	}
	jint WifiP2pManager::ERROR()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"ERROR"
		);
	}
	JString WifiP2pManager::EXTRA_DISCOVERY_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_DISCOVERY_STATE",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_P2P_DEVICE_LIST()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_P2P_DEVICE_LIST",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_WIFI_P2P_DEVICE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_WIFI_P2P_GROUP()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_GROUP",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_WIFI_P2P_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_P2P_INFO",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::EXTRA_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	jint WifiP2pManager::NO_SERVICE_REQUESTS()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"NO_SERVICE_REQUESTS"
		);
	}
	jint WifiP2pManager::P2P_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"P2P_UNSUPPORTED"
		);
	}
	JString WifiP2pManager::WIFI_P2P_CONNECTION_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_CONNECTION_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::WIFI_P2P_DISCOVERY_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	jint WifiP2pManager::WIFI_P2P_DISCOVERY_STARTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STARTED"
		);
	}
	jint WifiP2pManager::WIFI_P2P_DISCOVERY_STOPPED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_DISCOVERY_STOPPED"
		);
	}
	JString WifiP2pManager::WIFI_P2P_PEERS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_PEERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pManager::WIFI_P2P_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	jint WifiP2pManager::WIFI_P2P_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_DISABLED"
		);
	}
	jint WifiP2pManager::WIFI_P2P_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_STATE_ENABLED"
		);
	}
	JString WifiP2pManager::WIFI_P2P_THIS_DEVICE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pManager",
			"WIFI_P2P_THIS_DEVICE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiP2pManager::WifiP2pManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiP2pManager::addLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const
	{
		callMethod<void>(
			"addLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::addServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const
	{
		callMethod<void>(
			"addServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::cancelConnect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"cancelConnect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::clearLocalServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"clearLocalServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::clearServiceRequests(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"clearServiceRequests",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::connect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, JObject arg2) const
	{
		callMethod<void>(
			"createGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pConfig;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::discoverPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"discoverPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::discoverServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"discoverServices",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::wifi::p2p::WifiP2pManager_Channel WifiP2pManager::initialize(android::content::Context arg0, android::os::Looper arg1, JObject arg2) const
	{
		return callObjectMethod(
			"initialize",
			"(Landroid/content/Context;Landroid/os/Looper;Landroid/net/wifi/p2p/WifiP2pManager$ChannelListener;)Landroid/net/wifi/p2p/WifiP2pManager$Channel;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::removeGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"removeGroup",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::removeLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeLocalService",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceInfo;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::removeServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeServiceRequest",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::requestConnectionInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestConnectionInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ConnectionInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestDeviceInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestDeviceInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DeviceInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestDiscoveryState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestDiscoveryState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DiscoveryStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestGroupInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestGroupInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$GroupInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestNetworkInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestNetworkInfo",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$NetworkInfoListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestP2pState(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestP2pState",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$P2pStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::requestPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestPeers",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$PeerListListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::setDnsSdResponseListeners(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDnsSdResponseListeners",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdServiceResponseListener;Landroid/net/wifi/p2p/WifiP2pManager$DnsSdTxtRecordListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void WifiP2pManager::setServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"setServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ServiceResponseListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::setUpnpServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"setUpnpServiceResponseListener",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$UpnpServiceResponseListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiP2pManager::stopPeerDiscovery(android::net::wifi::p2p::WifiP2pManager_Channel arg0, JObject arg1) const
	{
		callMethod<void>(
			"stopPeerDiscovery",
			"(Landroid/net/wifi/p2p/WifiP2pManager$Channel;Landroid/net/wifi/p2p/WifiP2pManager$ActionListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::wifi::p2p

