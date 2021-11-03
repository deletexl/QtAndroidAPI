#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class KeyStore;
}

namespace javax::net::ssl
{
	class KeyManagerFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyManagerFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagerFactorySpi(QAndroidJniObject obj);
		
		// Constructors
		KeyManagerFactorySpi();
		
		// Methods
	};
} // namespace javax::net::ssl

