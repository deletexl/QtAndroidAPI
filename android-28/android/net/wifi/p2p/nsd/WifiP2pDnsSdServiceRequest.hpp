#pragma once

#include "./WifiP2pServiceRequest.hpp"

class JString;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceRequest : public android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDnsSdServiceRequest(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDnsSdServiceRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest newInstance();
		static android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest newInstance(JString arg0);
		static android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest newInstance(JString arg0, JString arg1);
	};
} // namespace android::net::wifi::p2p::nsd

