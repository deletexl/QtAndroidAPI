#pragma once

#include "../../../JObject.hpp"

namespace android::media::session
{
	class PlaybackState;
}
namespace android::media::session
{
	class PlaybackState_CustomAction;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::media::session
{
	class PlaybackState_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackState_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackState_Builder(QJniObject obj);
		
		// Constructors
		PlaybackState_Builder();
		PlaybackState_Builder(android::media::session::PlaybackState arg0);
		
		// Methods
		android::media::session::PlaybackState_Builder addCustomAction(android::media::session::PlaybackState_CustomAction arg0) const;
		android::media::session::PlaybackState_Builder addCustomAction(JString arg0, JString arg1, jint arg2) const;
		android::media::session::PlaybackState build() const;
		android::media::session::PlaybackState_Builder setActions(jlong arg0) const;
		android::media::session::PlaybackState_Builder setActiveQueueItemId(jlong arg0) const;
		android::media::session::PlaybackState_Builder setBufferedPosition(jlong arg0) const;
		android::media::session::PlaybackState_Builder setErrorMessage(JString arg0) const;
		android::media::session::PlaybackState_Builder setExtras(android::os::Bundle arg0) const;
		android::media::session::PlaybackState_Builder setState(jint arg0, jlong arg1, jfloat arg2) const;
		android::media::session::PlaybackState_Builder setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3) const;
	};
} // namespace android::media::session

