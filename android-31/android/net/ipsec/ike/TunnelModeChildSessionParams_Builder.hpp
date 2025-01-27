#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class ChildSaProposal;
}
namespace android::net::ipsec::ike
{
	class IkeTrafficSelector;
}
namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams;
}
namespace java::net
{
	class Inet4Address;
}
namespace java::net
{
	class Inet6Address;
}

namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TunnelModeChildSessionParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TunnelModeChildSessionParams_Builder(QJniObject obj);
		
		// Constructors
		TunnelModeChildSessionParams_Builder();
		TunnelModeChildSessionParams_Builder(android::net::ipsec::ike::TunnelModeChildSessionParams arg0);
		
		// Methods
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInternalAddressRequest(jint arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInternalAddressRequest(java::net::Inet4Address arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInternalAddressRequest(java::net::Inet6Address arg0, jint arg1) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInternalDhcpServerRequest(jint arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addInternalDnsServerRequest(jint arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const;
		android::net::ipsec::ike::TunnelModeChildSessionParams build() const;
		android::net::ipsec::ike::TunnelModeChildSessionParams_Builder setLifetimeSeconds(jint arg0, jint arg1) const;
	};
} // namespace android::net::ipsec::ike

