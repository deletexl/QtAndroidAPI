#include "./BiometricPrompt_AuthenticationCallback.hpp"
#include "./BiometricPrompt_CryptoObject.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../JString.hpp"
#include "./BiometricPrompt.hpp"

namespace android::hardware::biometrics
{
	// Fields
	jint BiometricPrompt::AUTHENTICATION_RESULT_TYPE_BIOMETRIC()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"AUTHENTICATION_RESULT_TYPE_BIOMETRIC"
		);
	}
	jint BiometricPrompt::AUTHENTICATION_RESULT_TYPE_DEVICE_CREDENTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"AUTHENTICATION_RESULT_TYPE_DEVICE_CREDENTIAL"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_GOOD()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_GOOD"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_IMAGER_DIRTY()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_IMAGER_DIRTY"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_INSUFFICIENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_INSUFFICIENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_PARTIAL"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_FAST"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_SLOW()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_SLOW"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_CANCELED"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_HW_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_NOT_PRESENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT_PERMANENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT_PERMANENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_BIOMETRICS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_BIOMETRICS"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_SPACE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_SPACE"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_TIMEOUT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_UNABLE_TO_PROCESS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_UNABLE_TO_PROCESS"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_USER_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_USER_CANCELED"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_VENDOR"
		);
	}
	
	// QJniObject forward
	BiometricPrompt::BiometricPrompt(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BiometricPrompt::authenticate(android::os::CancellationSignal arg0, JObject arg1, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg2) const
	{
		callMethod<void>(
			"authenticate",
			"(Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BiometricPrompt::authenticate(android::hardware::biometrics::BiometricPrompt_CryptoObject arg0, android::os::CancellationSignal arg1, JObject arg2, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg3) const
	{
		callMethod<void>(
			"authenticate",
			"(Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jint BiometricPrompt::getAllowedAuthenticators() const
	{
		return callMethod<jint>(
			"getAllowedAuthenticators",
			"()I"
		);
	}
	JString BiometricPrompt::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricPrompt::getNegativeButtonText() const
	{
		return callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricPrompt::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricPrompt::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean BiometricPrompt::isConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isConfirmationRequired",
			"()Z"
		);
	}
} // namespace android::hardware::biometrics

