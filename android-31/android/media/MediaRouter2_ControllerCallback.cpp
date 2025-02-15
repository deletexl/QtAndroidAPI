#include "./MediaRouter2_RoutingController.hpp"
#include "./MediaRouter2_ControllerCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter2_ControllerCallback::MediaRouter2_ControllerCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaRouter2_ControllerCallback::MediaRouter2_ControllerCallback()
		: JObject(
			"android.media.MediaRouter2$ControllerCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter2_ControllerCallback::onControllerUpdated(android::media::MediaRouter2_RoutingController arg0) const
	{
		callMethod<void>(
			"onControllerUpdated",
			"(Landroid/media/MediaRouter2$RoutingController;)V",
			arg0.object()
		);
	}
} // namespace android::media

