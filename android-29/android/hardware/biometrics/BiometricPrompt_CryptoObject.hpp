#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class Signature;
}
namespace javax::crypto
{
	class Cipher;
}
namespace javax::crypto
{
	class Mac;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_CryptoObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_CryptoObject(QJniObject obj);
		
		// Constructors
		BiometricPrompt_CryptoObject(java::security::Signature arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Mac arg0);
		
		// Methods
		javax::crypto::Cipher getCipher() const;
		javax::crypto::Mac getMac() const;
		java::security::Signature getSignature() const;
	};
} // namespace android::hardware::biometrics

