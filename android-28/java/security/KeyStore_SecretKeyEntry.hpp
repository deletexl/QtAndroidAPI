#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::security
{
	class KeyStore_SecretKeyEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_SecretKeyEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_SecretKeyEntry(QJniObject obj);
		
		// Constructors
		KeyStore_SecretKeyEntry(JObject arg0);
		KeyStore_SecretKeyEntry(JObject arg0, JObject arg1);
		
		// Methods
		JObject getAttributes() const;
		JObject getSecretKey() const;
		JString toString() const;
	};
} // namespace java::security

