#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::wifi::p2p
{
	class WifiP2pConfig;
}
namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel;
}
namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo;
}
namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest;
}
namespace android::os
{
	class Looper;
}

namespace android::net::wifi::p2p
{
	class WifiP2pManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint BUSY();
		static jint ERROR();
		static jstring EXTRA_DISCOVERY_STATE();
		static jstring EXTRA_NETWORK_INFO();
		static jstring EXTRA_P2P_DEVICE_LIST();
		static jstring EXTRA_WIFI_P2P_DEVICE();
		static jstring EXTRA_WIFI_P2P_GROUP();
		static jstring EXTRA_WIFI_P2P_INFO();
		static jstring EXTRA_WIFI_STATE();
		static jint NO_SERVICE_REQUESTS();
		static jint P2P_UNSUPPORTED();
		static jstring WIFI_P2P_CONNECTION_CHANGED_ACTION();
		static jstring WIFI_P2P_DISCOVERY_CHANGED_ACTION();
		static jint WIFI_P2P_DISCOVERY_STARTED();
		static jint WIFI_P2P_DISCOVERY_STOPPED();
		static jstring WIFI_P2P_PEERS_CHANGED_ACTION();
		static jstring WIFI_P2P_STATE_CHANGED_ACTION();
		static jint WIFI_P2P_STATE_DISABLED();
		static jint WIFI_P2P_STATE_ENABLED();
		static jstring WIFI_P2P_THIS_DEVICE_CHANGED_ACTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __JniBaseClass arg2);
		void addServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __JniBaseClass arg2);
		void cancelConnect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void clearLocalServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void clearServiceRequests(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void connect(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::WifiP2pConfig arg1, __JniBaseClass arg2);
		void createGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void discoverPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void discoverServices(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		android::net::wifi::p2p::WifiP2pManager_Channel initialize(android::content::Context arg0, android::os::Looper arg1, __JniBaseClass arg2);
		void removeGroup(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void removeLocalService(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceInfo arg1, __JniBaseClass arg2);
		void removeServiceRequest(android::net::wifi::p2p::WifiP2pManager_Channel arg0, android::net::wifi::p2p::nsd::WifiP2pServiceRequest arg1, __JniBaseClass arg2);
		void requestConnectionInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void requestGroupInfo(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void requestPeers(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void setDnsSdResponseListeners(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void setServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void setUpnpServiceResponseListener(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
		void stopPeerDiscovery(android::net::wifi::p2p::WifiP2pManager_Channel arg0, __JniBaseClass arg1);
	};
} // namespace android::net::wifi::p2p
