#pragma once

#include "./IkeIdentification.hpp"

class JObject;
class JString;

namespace android::net::ipsec::ike
{
	class IkeRfc822AddrIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		JString rfc822Name();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeRfc822AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeRfc822AddrIdentification(QJniObject obj);
		
		// Constructors
		IkeRfc822AddrIdentification(JString arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

