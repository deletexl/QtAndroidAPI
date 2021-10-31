#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSession2::MediaSession2(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MediaSession2::broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"broadcastSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession2::cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, jobject arg1)
	{
		callMethod<void>(
			"cancelSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	void MediaSession2::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	__JniBaseClass MediaSession2::getConnectedControllers()
	{
		return callObjectMethod(
			"getConnectedControllers",
			"()Ljava/util/List;"
		);
	}
	jstring MediaSession2::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::media::Session2Token MediaSession2::getToken()
	{
		return callObjectMethod(
			"getToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaSession2::isPlaybackActive()
	{
		return callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaSession2::sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	void MediaSession2::setPlaybackActive(jboolean arg0)
	{
		callMethod<void>(
			"setPlaybackActive",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media
