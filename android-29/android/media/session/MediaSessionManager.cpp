#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../Session2Token.hpp"
#include "./MediaSessionManager_RemoteUserInfo.hpp"
#include "../../os/Handler.hpp"
#include "./MediaSessionManager.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSessionManager::MediaSessionManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MediaSessionManager::addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1)
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSessionManager::addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.object()
		);
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject MediaSessionManager::getActiveSessions(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getActiveSessions",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	QAndroidJniObject MediaSessionManager::getSession2Tokens()
	{
		return callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	jboolean MediaSessionManager::isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0)
	{
		return callMethod<jboolean>(
			"isTrustedForMediaControl",
			"(Landroid/media/session/MediaSessionManager$RemoteUserInfo;)Z",
			arg0.object()
		);
	}
	void MediaSessionManager::notifySession2Created(android::media::Session2Token arg0)
	{
		callMethod<void>(
			"notifySession2Created",
			"(Landroid/media/Session2Token;)V",
			arg0.object()
		);
	}
	void MediaSessionManager::removeOnActiveSessionsChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;)V",
			arg0.object()
		);
	}
	void MediaSessionManager::removeOnSession2TokensChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

