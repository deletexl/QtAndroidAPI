#pragma once

#include "./IkeProtocolException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class InvalidMajorVersionException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidMajorVersionException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidMajorVersionException(QJniObject obj);
		
		// Constructors
		InvalidMajorVersionException(jbyte arg0);
		
		// Methods
		jbyte getMajorVersion() const;
	};
} // namespace android::net::ipsec::ike::exceptions

