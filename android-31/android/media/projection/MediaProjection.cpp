#include "../../hardware/display/VirtualDisplay.hpp"
#include "../../hardware/display/VirtualDisplay_Callback.hpp"
#include "./MediaProjection_Callback.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Surface.hpp"
#include "../../../JString.hpp"
#include "./MediaProjection.hpp"

namespace android::media::projection
{
	// Fields
	
	// QJniObject forward
	MediaProjection::MediaProjection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::hardware::display::VirtualDisplay MediaProjection::createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7) const
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6.object(),
			arg7.object()
		);
	}
	void MediaProjection::registerCallback(android::media::projection::MediaProjection_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/projection/MediaProjection$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaProjection::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaProjection::unregisterCallback(android::media::projection::MediaProjection_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/projection/MediaProjection$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::media::projection

