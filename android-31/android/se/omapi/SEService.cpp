#include "../../../JArray.hpp"
#include "../../content/Context.hpp"
#include "./Reader.hpp"
#include "../../../JString.hpp"
#include "./SEService.hpp"

namespace android::se::omapi
{
	// Fields
	JString SEService::ACTION_SECURE_ELEMENT_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"ACTION_SECURE_ELEMENT_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SEService::EXTRA_READER_NAME()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"EXTRA_READER_NAME",
			"Ljava/lang/String;"
		);
	}
	JString SEService::EXTRA_READER_STATE()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"EXTRA_READER_STATE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SEService::SEService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SEService::SEService(android::content::Context arg0, JObject arg1, JObject arg2)
		: JObject(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	JArray SEService::getReaders() const
	{
		return callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		);
	}
	android::se::omapi::Reader SEService::getUiccReader(jint arg0) const
	{
		return callObjectMethod(
			"getUiccReader",
			"(I)Landroid/se/omapi/Reader;",
			arg0
		);
	}
	JString SEService::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	jboolean SEService::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void SEService::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::se::omapi

