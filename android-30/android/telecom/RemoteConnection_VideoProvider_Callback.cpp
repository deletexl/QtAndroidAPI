#include "./RemoteConnection_VideoProvider.hpp"
#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"
#include "./RemoteConnection_VideoProvider_Callback.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteConnection_VideoProvider_Callback::RemoteConnection_VideoProvider_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoteConnection_VideoProvider_Callback::RemoteConnection_VideoProvider_Callback()
		: __JniBaseClass(
			"android.telecom.RemoteConnection$VideoProvider$Callback",
			"()V"
		) {}
	
	// Methods
	void RemoteConnection_VideoProvider_Callback::onCallDataUsageChanged(android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1)
	{
		callMethod<void>(
			"onCallDataUsageChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;J)V",
			arg0.object(),
			arg1
		);
	}
	void RemoteConnection_VideoProvider_Callback::onCallSessionEvent(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1)
	{
		callMethod<void>(
			"onCallSessionEvent",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.object(),
			arg1
		);
	}
	void RemoteConnection_VideoProvider_Callback::onCameraCapabilitiesChanged(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile_CameraCapabilities arg1)
	{
		callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onPeerDimensionsChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onPeerDimensionsChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void RemoteConnection_VideoProvider_Callback::onSessionModifyRequestReceived(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile arg1)
	{
		callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onSessionModifyResponseReceived(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, android::telecom::VideoProfile arg2, android::telecom::VideoProfile arg3)
	{
		callMethod<void>(
			"onSessionModifyResponseReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onVideoQualityChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1)
	{
		callMethod<void>(
			"onVideoQualityChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom
