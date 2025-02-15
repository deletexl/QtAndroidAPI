#include "../CameraCaptureSession_StateCallback.hpp"
#include "../CaptureRequest.hpp"
#include "./InputConfiguration.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "./SessionConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	JObject SessionConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.params.SessionConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	
	// QJniObject forward
	SessionConfiguration::SessionConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SessionConfiguration::SessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3)
		: JObject(
			"android.hardware.camera2.params.SessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jint SessionConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SessionConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject SessionConfiguration::getExecutor() const
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	android::hardware::camera2::params::InputConfiguration SessionConfiguration::getInputConfiguration() const
	{
		return callObjectMethod(
			"getInputConfiguration",
			"()Landroid/hardware/camera2/params/InputConfiguration;"
		);
	}
	JObject SessionConfiguration::getOutputConfigurations() const
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	android::hardware::camera2::CaptureRequest SessionConfiguration::getSessionParameters() const
	{
		return callObjectMethod(
			"getSessionParameters",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint SessionConfiguration::getSessionType() const
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	android::hardware::camera2::CameraCaptureSession_StateCallback SessionConfiguration::getStateCallback() const
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraCaptureSession$StateCallback;"
		);
	}
	jint SessionConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SessionConfiguration::setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0) const
	{
		callMethod<void>(
			"setInputConfiguration",
			"(Landroid/hardware/camera2/params/InputConfiguration;)V",
			arg0.object()
		);
	}
	void SessionConfiguration::setSessionParameters(android::hardware::camera2::CaptureRequest arg0) const
	{
		callMethod<void>(
			"setSessionParameters",
			"(Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object()
		);
	}
	void SessionConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2::params

