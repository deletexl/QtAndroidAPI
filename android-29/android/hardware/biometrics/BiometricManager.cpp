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
	jint BiometricManager::BIOMETRIC_SUCCESS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	BiometricManager::BiometricManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint BiometricManager::canAuthenticate()
	{
		return callMethod<jint>(
			"canAuthenticate",
			"()I"
		);
	}
} // namespace android::hardware::biometrics
