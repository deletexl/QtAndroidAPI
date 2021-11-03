#include "./BiometricManager.hpp"

namespace android::hardware::biometrics
{
	// Fields
	jint BiometricManager::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	jint BiometricManager::BIOMETRIC_ERROR_NONE_ENROLLED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NONE_ENROLLED"
		);
	}
	jint BiometricManager::BIOMETRIC_ERROR_NO_HARDWARE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NO_HARDWARE"
		);
	}
	jint BiometricManager::BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED"
		);
	}
	jint BiometricManager::BIOMETRIC_SUCCESS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	BiometricManager::BiometricManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BiometricManager::canAuthenticate()
	{
		return callMethod<jint>(
			"canAuthenticate",
			"()I"
		);
	}
	jint BiometricManager::canAuthenticate(jint arg0)
	{
		return callMethod<jint>(
			"canAuthenticate",
			"(I)I",
			arg0
		);
	}
} // namespace android::hardware::biometrics

