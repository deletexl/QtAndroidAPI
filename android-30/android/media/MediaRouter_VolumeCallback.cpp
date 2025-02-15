#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_VolumeCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter_VolumeCallback::MediaRouter_VolumeCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaRouter_VolumeCallback::MediaRouter_VolumeCallback()
		: JObject(
			"android.media.MediaRouter$VolumeCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter_VolumeCallback::onVolumeSetRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"onVolumeSetRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	void MediaRouter_VolumeCallback::onVolumeUpdateRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"onVolumeUpdateRequest",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

