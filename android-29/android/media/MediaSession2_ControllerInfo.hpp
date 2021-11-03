#pragma once

#include "../../JObject.hpp"

namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace android::os
{
	class Bundle;
}
class JObject;
class JString;

namespace android::media
{
	class MediaSession2_ControllerInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession2_ControllerInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2_ControllerInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		android::os::Bundle getConnectionHints();
		JString getPackageName();
		android::media::session::MediaSessionManager_RemoteUserInfo getRemoteUserInfo();
		jint getUid();
		jint hashCode();
		JString toString();
	};
} // namespace android::media

