#include "../content/Intent.hpp"
#include "./RouteDiscoveryPreference.hpp"
#include "./RoutingSessionInfo.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2ProviderService.hpp"

namespace android::media
{
	// Fields
	jint MediaRoute2ProviderService::REASON_INVALID_COMMAND()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_INVALID_COMMAND"
		);
	}
	jint MediaRoute2ProviderService::REASON_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_NETWORK_ERROR"
		);
	}
	jint MediaRoute2ProviderService::REASON_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_REJECTED"
		);
	}
	jint MediaRoute2ProviderService::REASON_ROUTE_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_ROUTE_NOT_AVAILABLE"
		);
	}
	jint MediaRoute2ProviderService::REASON_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_UNKNOWN_ERROR"
		);
	}
	jlong MediaRoute2ProviderService::REQUEST_ID_NONE()
	{
		return getStaticField<jlong>(
			"android.media.MediaRoute2ProviderService",
			"REQUEST_ID_NONE"
		);
	}
	JString MediaRoute2ProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2ProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaRoute2ProviderService::MediaRoute2ProviderService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	MediaRoute2ProviderService::MediaRoute2ProviderService()
		: android::app::Service(
			"android.media.MediaRoute2ProviderService",
			"()V"
		) {}
	
	// Methods
	JObject MediaRoute2ProviderService::getAllSessionInfo() const
	{
		return callObjectMethod(
			"getAllSessionInfo",
			"()Ljava/util/List;"
		);
	}
	android::media::RoutingSessionInfo MediaRoute2ProviderService::getSessionInfo(JString arg0) const
	{
		return callObjectMethod(
			"getSessionInfo",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo;",
			arg0.object<jstring>()
		);
	}
	void MediaRoute2ProviderService::notifyRequestFailed(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyRequestFailed",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void MediaRoute2ProviderService::notifyRoutes(JObject arg0) const
	{
		callMethod<void>(
			"notifyRoutes",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void MediaRoute2ProviderService::notifySessionCreated(jlong arg0, android::media::RoutingSessionInfo arg1) const
	{
		callMethod<void>(
			"notifySessionCreated",
			"(JLandroid/media/RoutingSessionInfo;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaRoute2ProviderService::notifySessionReleased(JString arg0) const
	{
		callMethod<void>(
			"notifySessionReleased",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaRoute2ProviderService::notifySessionUpdated(android::media::RoutingSessionInfo arg0) const
	{
		callMethod<void>(
			"notifySessionUpdated",
			"(Landroid/media/RoutingSessionInfo;)V",
			arg0.object()
		);
	}
	JObject MediaRoute2ProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void MediaRoute2ProviderService::onCreateSession(jlong arg0, JString arg1, JString arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"onCreateSession",
			"(JLjava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void MediaRoute2ProviderService::onDeselectRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onDeselectRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void MediaRoute2ProviderService::onDiscoveryPreferenceChanged(android::media::RouteDiscoveryPreference arg0) const
	{
		callMethod<void>(
			"onDiscoveryPreferenceChanged",
			"(Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object()
		);
	}
	void MediaRoute2ProviderService::onReleaseSession(jlong arg0, JString arg1) const
	{
		callMethod<void>(
			"onReleaseSession",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void MediaRoute2ProviderService::onSelectRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onSelectRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void MediaRoute2ProviderService::onSetRouteVolume(jlong arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onSetRouteVolume",
			"(JLjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	void MediaRoute2ProviderService::onSetSessionVolume(jlong arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onSetSessionVolume",
			"(JLjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	void MediaRoute2ProviderService::onTransferToRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onTransferToRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
} // namespace android::media

