#include "../CameraCaptureSession_StateCallback.hpp"
#include "../CaptureRequest.hpp"
#include "./InputConfiguration.hpp"
#include "./SessionConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint SessionConfiguration::SESSION_HIGH_SPEED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_HIGH_SPEED"
		);
	}
	jint SessionConfiguration::SESSION_REGULAR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_REGULAR"
		);
	}
	
	// QAndroidJniObject forward
	SessionConfiguration::SessionConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SessionConfiguration::SessionConfiguration(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3)
		: __JniBaseClass(
			"android.hardware.camera2.params.SessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	__JniBaseClass SessionConfiguration::getExecutor()
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	android::hardware::camera2::params::InputConfiguration SessionConfiguration::getInputConfiguration()
	{
		return callObjectMethod(
			"getInputConfiguration",
			"()Landroid/hardware/camera2/params/InputConfiguration;"
		);
	}
	__JniBaseClass SessionConfiguration::getOutputConfigurations()
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	android::hardware::camera2::CaptureRequest SessionConfiguration::getSessionParameters()
	{
		return callObjectMethod(
			"getSessionParameters",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint SessionConfiguration::getSessionType()
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	android::hardware::camera2::CameraCaptureSession_StateCallback SessionConfiguration::getStateCallback()
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraCaptureSession$StateCallback;"
		);
	}
	void SessionConfiguration::setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0)
	{
		callMethod<void>(
			"setInputConfiguration",
			"(Landroid/hardware/camera2/params/InputConfiguration;)V",
			arg0.object()
		);
	}
	void SessionConfiguration::setSessionParameters(android::hardware::camera2::CaptureRequest arg0)
	{
		callMethod<void>(
			"setSessionParameters",
			"(Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2::params
