#include "./PlaybackState.hpp"
#include "./PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_Builder.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	PlaybackState_Builder::PlaybackState_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PlaybackState_Builder::PlaybackState_Builder()
		: JObject(
			"android.media.session.PlaybackState$Builder",
			"()V"
		) {}
	PlaybackState_Builder::PlaybackState_Builder(android::media::session::PlaybackState arg0)
		: JObject(
			"android.media.session.PlaybackState$Builder",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::session::PlaybackState_Builder PlaybackState_Builder::addCustomAction(android::media::session::PlaybackState_CustomAction arg0) const
	{
		return callObjectMethod(
			"addCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::addCustomAction(JString arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"addCustomAction",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/media/session/PlaybackState$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	android::media::session::PlaybackState PlaybackState_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setActions(jlong arg0) const
	{
		return callObjectMethod(
			"setActions",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setActiveQueueItemId(jlong arg0) const
	{
		return callObjectMethod(
			"setActiveQueueItemId",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setBufferedPosition(jlong arg0) const
	{
		return callObjectMethod(
			"setBufferedPosition",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setErrorMessage(JString arg0) const
	{
		return callObjectMethod(
			"setErrorMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"setState",
			"(IJF)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::media::session::PlaybackState_Builder PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3) const
	{
		return callObjectMethod(
			"setState",
			"(IJFJ)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::session

