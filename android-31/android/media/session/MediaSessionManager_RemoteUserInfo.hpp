#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSessionManager_RemoteUserInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSessionManager_RemoteUserInfo(QJniObject obj);
		
		// Constructors
		MediaSessionManager_RemoteUserInfo(JString arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPackageName() const;
		jint getPid() const;
		jint getUid() const;
		jint hashCode() const;
	};
} // namespace android::media::session

