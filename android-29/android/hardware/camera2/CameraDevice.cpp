#include "./CameraCaptureSession_StateCallback.hpp"
#include "./CaptureRequest_Builder.hpp"
#include "./TotalCaptureResult.hpp"
#include "./params/InputConfiguration.hpp"
#include "./params/SessionConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "./CameraDevice.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraDevice::TEMPLATE_MANUAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_MANUAL"
		);
	}
	jint CameraDevice::TEMPLATE_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_PREVIEW"
		);
	}
	jint CameraDevice::TEMPLATE_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_RECORD"
		);
	}
	jint CameraDevice::TEMPLATE_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_STILL_CAPTURE"
		);
	}
	jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_VIDEO_SNAPSHOT"
		);
	}
	jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_ZERO_SHUTTER_LAG"
		);
	}
	
	// QAndroidJniObject forward
	CameraDevice::CameraDevice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void CameraDevice::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0)
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(ILjava/util/Set;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0,
			arg1.object()
		);
	}
	void CameraDevice::createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0)
	{
		callMethod<void>(
			"createCaptureSession",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)V",
			arg0.object()
		);
	}
	void CameraDevice::createCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"createCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraDevice::createCaptureSessionByOutputConfigurations(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"createCaptureSessionByOutputConfigurations",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraDevice::createConstrainedHighSpeedCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"createConstrainedHighSpeedCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0)
	{
		return callObjectMethod(
			"createReprocessCaptureRequest",
			"(Landroid/hardware/camera2/TotalCaptureResult;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.object()
		);
	}
	void CameraDevice::createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3)
	{
		callMethod<void>(
			"createReprocessableCaptureSession",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void CameraDevice::createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3)
	{
		callMethod<void>(
			"createReprocessableCaptureSessionByConfigurations",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jstring CameraDevice::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CameraDevice::isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0)
	{
		return callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2
