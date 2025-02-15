#pragma once

#include "../../app/Service.hpp"

class JArray;
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::voice
{
	class AlwaysOnHotwordDetector;
}
namespace android::service::voice
{
	class AlwaysOnHotwordDetector_Callback;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::service::voice
{
	class VoiceInteractionService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionService(QJniObject obj);
		
		// Constructors
		VoiceInteractionService();
		
		// Methods
		static jboolean isActiveService(android::content::Context arg0, android::content::ComponentName arg1);
		android::service::voice::AlwaysOnHotwordDetector createAlwaysOnHotwordDetector(JString arg0, java::util::Locale arg1, android::service::voice::AlwaysOnHotwordDetector_Callback arg2) const;
		jint getDisabledShowContext() const;
		JObject onBind(android::content::Intent arg0) const;
		JObject onGetSupportedVoiceActions(JObject arg0) const;
		void onLaunchVoiceAssistFromKeyguard() const;
		void onReady() const;
		void onShutdown() const;
		void setDisabledShowContext(jint arg0) const;
		void setUiHints(android::os::Bundle arg0) const;
		void showSession(android::os::Bundle arg0, jint arg1) const;
	};
} // namespace android::service::voice

