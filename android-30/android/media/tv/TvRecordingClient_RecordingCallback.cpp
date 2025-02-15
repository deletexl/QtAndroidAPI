#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./TvRecordingClient_RecordingCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvRecordingClient_RecordingCallback::TvRecordingClient_RecordingCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvRecordingClient_RecordingCallback::TvRecordingClient_RecordingCallback()
		: JObject(
			"android.media.tv.TvRecordingClient$RecordingCallback",
			"()V"
		) {}
	
	// Methods
	void TvRecordingClient_RecordingCallback::onConnectionFailed(JString arg0) const
	{
		callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvRecordingClient_RecordingCallback::onDisconnected(JString arg0) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvRecordingClient_RecordingCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onRecordingStopped(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvRecordingClient_RecordingCallback::onTuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

