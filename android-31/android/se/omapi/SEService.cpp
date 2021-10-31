#include "../../content/Context.hpp"
#include "./Reader.hpp"
#include "./SEService.hpp"

namespace android::se::omapi
{
	// Fields
	jstring SEService::ACTION_SECURE_ELEMENT_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"ACTION_SECURE_ELEMENT_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SEService::EXTRA_READER_NAME()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"EXTRA_READER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SEService::EXTRA_READER_STATE()
	{
		return getStaticObjectField(
			"android.se.omapi.SEService",
			"EXTRA_READER_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SEService::SEService(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SEService::SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jarray SEService::getReaders()
	{
		return callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		).object<jarray>();
	}
	android::se::omapi::Reader SEService::getUiccReader(jint arg0)
	{
		return callObjectMethod(
			"getUiccReader",
			"(I)Landroid/se/omapi/Reader;",
			arg0
		);
	}
	jstring SEService::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SEService::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void SEService::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::se::omapi
