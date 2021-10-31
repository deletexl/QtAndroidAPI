#include "../media/AudioAttributes.hpp"
#include "./VibrationEffect.hpp"
#include "./Vibrator.hpp"

namespace android::os
{
	// Fields
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_NO()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_NO"
		);
	}
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_UNKNOWN"
		);
	}
	jint Vibrator::VIBRATION_EFFECT_SUPPORT_YES()
	{
		return getStaticField<jint>(
			"android.os.Vibrator",
			"VIBRATION_EFFECT_SUPPORT_YES"
		);
	}
	
	// QAndroidJniObject forward
	Vibrator::Vibrator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Vibrator::areAllEffectsSupported(jintArray arg0)
	{
		return callMethod<jint>(
			"areAllEffectsSupported",
			"([I)I",
			arg0
		);
	}
	jboolean Vibrator::areAllPrimitivesSupported(jintArray arg0)
	{
		return callMethod<jboolean>(
			"areAllPrimitivesSupported",
			"([I)Z",
			arg0
		);
	}
	jintArray Vibrator::areEffectsSupported(jintArray arg0)
	{
		return callObjectMethod(
			"areEffectsSupported",
			"([I)[I",
			arg0
		).object<jintArray>();
	}
	jbooleanArray Vibrator::arePrimitivesSupported(jintArray arg0)
	{
		return callObjectMethod(
			"arePrimitivesSupported",
			"([I)[Z",
			arg0
		).object<jbooleanArray>();
	}
	void Vibrator::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Vibrator::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jintArray Vibrator::getPrimitiveDurations(jintArray arg0)
	{
		return callObjectMethod(
			"getPrimitiveDurations",
			"([I)[I",
			arg0
		).object<jintArray>();
	}
	jboolean Vibrator::hasAmplitudeControl()
	{
		return callMethod<jboolean>(
			"hasAmplitudeControl",
			"()Z"
		);
	}
	jboolean Vibrator::hasVibrator()
	{
		return callMethod<jboolean>(
			"hasVibrator",
			"()Z"
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;)V",
			arg0.object()
		);
	}
	void Vibrator::vibrate(jlong arg0)
	{
		callMethod<void>(
			"vibrate",
			"(J)V",
			arg0
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1)
	{
		callMethod<void>(
			"vibrate",
			"([JI)V",
			arg0,
			arg1
		);
	}
	void Vibrator::vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"vibrate",
			"(Landroid/os/VibrationEffect;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Vibrator::vibrate(jlong arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"vibrate",
			"(JLandroid/media/AudioAttributes;)V",
			arg0,
			arg1.object()
		);
	}
	void Vibrator::vibrate(jlongArray arg0, jint arg1, android::media::AudioAttributes arg2)
	{
		callMethod<void>(
			"vibrate",
			"([JILandroid/media/AudioAttributes;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::os
