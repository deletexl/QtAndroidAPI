#include "./BiometricPrompt_CryptoObject.hpp"
#include "./BiometricPrompt_AuthenticationResult.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QJniObject forward
	BiometricPrompt_AuthenticationResult::BiometricPrompt_AuthenticationResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::hardware::biometrics::BiometricPrompt_CryptoObject BiometricPrompt_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace android::hardware::biometrics

