#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

