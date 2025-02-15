#pragma once

#include "./ChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	class TransportModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransportModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TransportModeChildSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

