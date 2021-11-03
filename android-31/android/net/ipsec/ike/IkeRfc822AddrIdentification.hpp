#pragma once

#include "../../../../JObject.hpp"
#include "./IkeIdentification.hpp"


namespace android::net::ipsec::ike
{
	class IkeRfc822AddrIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		jstring rfc822Name();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeRfc822AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeRfc822AddrIdentification(QAndroidJniObject obj);
		
		// Constructors
		IkeRfc822AddrIdentification(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

