#include "./CameraExtensionSession.hpp"
#include "./CaptureRequest.hpp"
#include "./CameraExtensionSession_ExtensionCaptureCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraExtensionSession_ExtensionCaptureCallback::CameraExtensionSession_ExtensionCaptureCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraExtensionSession_ExtensionCaptureCallback::CameraExtensionSession_ExtensionCaptureCallback()
		: JObject(
			"android.hardware.camera2.CameraExtensionSession$ExtensionCaptureCallback",
			"()V"
		) {}
	
	// Methods
	void CameraExtensionSession_ExtensionCaptureCallback::onCaptureFailed(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const
	{
		callMethod<void>(
			"onCaptureFailed",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraExtensionSession_ExtensionCaptureCallback::onCaptureProcessStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const
	{
		callMethod<void>(
			"onCaptureProcessStarted",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraExtensionSession_ExtensionCaptureCallback::onCaptureSequenceAborted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onCaptureSequenceAborted",
			"(Landroid/hardware/camera2/CameraExtensionSession;I)V",
			arg0.object(),
			arg1
		);
	}
	void CameraExtensionSession_ExtensionCaptureCallback::onCaptureSequenceCompleted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onCaptureSequenceCompleted",
			"(Landroid/hardware/camera2/CameraExtensionSession;I)V",
			arg0.object(),
			arg1
		);
	}
	void CameraExtensionSession_ExtensionCaptureCallback::onCaptureStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2) const
	{
		callMethod<void>(
			"onCaptureStarted",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::hardware::camera2

