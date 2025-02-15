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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession2_ControllerInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2_ControllerInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::os::Bundle getConnectionHints() const;
		JString getPackageName() const;
		android::media::session::MediaSessionManager_RemoteUserInfo getRemoteUserInfo() const;
		jint getUid() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::media

