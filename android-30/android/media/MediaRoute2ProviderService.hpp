#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media
{
	class RouteDiscoveryPreference;
}
namespace android::media
{
	class RoutingSessionInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaRoute2ProviderService : public android::app::Service
	{
	public:
		// Fields
		static jint REASON_INVALID_COMMAND();
		static jint REASON_NETWORK_ERROR();
		static jint REASON_REJECTED();
		static jint REASON_ROUTE_NOT_AVAILABLE();
		static jint REASON_UNKNOWN_ERROR();
		static jlong REQUEST_ID_NONE();
		static jstring SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRoute2ProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2ProviderService(QAndroidJniObject obj);
		
		// Constructors
		MediaRoute2ProviderService();
		
		// Methods
		JObject getAllSessionInfo();
		android::media::RoutingSessionInfo getSessionInfo(jstring arg0);
		void notifyRequestFailed(jlong arg0, jint arg1);
		void notifyRoutes(JObject arg0);
		void notifySessionCreated(jlong arg0, android::media::RoutingSessionInfo arg1);
		void notifySessionReleased(jstring arg0);
		void notifySessionUpdated(android::media::RoutingSessionInfo arg0);
		JObject onBind(android::content::Intent arg0);
		void onCreateSession(jlong arg0, jstring arg1, jstring arg2, android::os::Bundle arg3);
		void onDeselectRoute(jlong arg0, jstring arg1, jstring arg2);
		void onDiscoveryPreferenceChanged(android::media::RouteDiscoveryPreference arg0);
		void onReleaseSession(jlong arg0, jstring arg1);
		void onSelectRoute(jlong arg0, jstring arg1, jstring arg2);
		void onSetRouteVolume(jlong arg0, jstring arg1, jint arg2);
		void onSetSessionVolume(jlong arg0, jstring arg1, jint arg2);
		void onTransferToRoute(jlong arg0, jstring arg1, jstring arg2);
	};
} // namespace android::media

