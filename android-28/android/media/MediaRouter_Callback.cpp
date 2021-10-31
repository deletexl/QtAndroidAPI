#include "./MediaRouter.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_Callback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouter_Callback::MediaRouter_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaRouter_Callback::MediaRouter_Callback()
		: __JniBaseClass(
			"android.media.MediaRouter$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter_Callback::onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		callMethod<void>(
			"onRouteAdded",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_Callback::onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		callMethod<void>(
			"onRouteChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_Callback::onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3)
	{
		callMethod<void>(
			"onRouteGrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void MediaRouter_Callback::onRoutePresentationDisplayChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		callMethod<void>(
			"onRoutePresentationDisplayChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_Callback::onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		callMethod<void>(
			"onRouteRemoved",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_Callback::onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2)
	{
		callMethod<void>(
			"onRouteSelected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void MediaRouter_Callback::onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2)
	{
		callMethod<void>(
			"onRouteUngrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaRouter_Callback::onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2)
	{
		callMethod<void>(
			"onRouteUnselected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void MediaRouter_Callback::onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		callMethod<void>(
			"onRouteVolumeChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media
