#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"
#include "./BiometricPrompt_CryptoObject.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QJniObject forward
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(java::security::Signature arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.object()
		) {}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.object()
		) {}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Mac arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.object()
		) {}
	
	// Methods
	javax::crypto::Cipher BiometricPrompt_CryptoObject::getCipher() const
	{
		return callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	javax::crypto::Mac BiometricPrompt_CryptoObject::getMac() const
	{
		return callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	java::security::Signature BiometricPrompt_CryptoObject::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::biometrics

