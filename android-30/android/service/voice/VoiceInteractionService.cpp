#include "../../../JArray.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "./AlwaysOnHotwordDetector.hpp"
#include "./AlwaysOnHotwordDetector_Callback.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./VoiceInteractionService.hpp"

namespace android::service::voice
{
	// Fields
	JString VoiceInteractionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString VoiceInteractionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	VoiceInteractionService::VoiceInteractionService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VoiceInteractionService::VoiceInteractionService()
		: android::app::Service(
			"android.service.voice.VoiceInteractionService",
			"()V"
		) {}
	
	// Methods
	jboolean VoiceInteractionService::isActiveService(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.voice.VoiceInteractionService",
			"isActiveService",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::service::voice::AlwaysOnHotwordDetector VoiceInteractionService::createAlwaysOnHotwordDetector(JString arg0, java::util::Locale arg1, android::service::voice::AlwaysOnHotwordDetector_Callback arg2) const
	{
		return callObjectMethod(
			"createAlwaysOnHotwordDetector",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/service/voice/AlwaysOnHotwordDetector$Callback;)Landroid/service/voice/AlwaysOnHotwordDetector;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	jint VoiceInteractionService::getDisabledShowContext() const
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	JObject VoiceInteractionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	JObject VoiceInteractionService::onGetSupportedVoiceActions(JObject arg0) const
	{
		return callObjectMethod(
			"onGetSupportedVoiceActions",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	void VoiceInteractionService::onLaunchVoiceAssistFromKeyguard() const
	{
		callMethod<void>(
			"onLaunchVoiceAssistFromKeyguard",
			"()V"
		);
	}
	void VoiceInteractionService::onReady() const
	{
		callMethod<void>(
			"onReady",
			"()V"
		);
	}
	void VoiceInteractionService::onShutdown() const
	{
		callMethod<void>(
			"onShutdown",
			"()V"
		);
	}
	void VoiceInteractionService::setDisabledShowContext(jint arg0) const
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionService::setUiHints(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setUiHints",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void VoiceInteractionService::showSession(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"showSession",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::voice

