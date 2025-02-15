#pragma once

#include "./ChildSessionParams.hpp"

class JObject;

namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TunnelModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TunnelModeChildSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getConfigurationRequests() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

