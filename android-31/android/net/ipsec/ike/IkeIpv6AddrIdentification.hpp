#pragma once

#include "./IkeIdentification.hpp"

class JObject;
namespace java::net
{
	class Inet6Address;
}

namespace android::net::ipsec::ike
{
	class IkeIpv6AddrIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		java::net::Inet6Address ipv6Address();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeIpv6AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeIpv6AddrIdentification(QJniObject obj);
		
		// Constructors
		IkeIpv6AddrIdentification(java::net::Inet6Address arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

