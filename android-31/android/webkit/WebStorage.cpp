#include "./WebStorage.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebStorage::WebStorage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::webkit::WebStorage WebStorage::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.WebStorage",
			"getInstance",
			"()Landroid/webkit/WebStorage;"
		);
	}
	void WebStorage::deleteAllData()
	{
		callMethod<void>(
			"deleteAllData",
			"()V"
		);
	}
	void WebStorage::deleteOrigin(jstring arg0)
	{
		callMethod<void>(
			"deleteOrigin",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebStorage::getOrigins(JObject arg0)
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	void WebStorage::getQuotaForOrigin(jstring arg0, JObject arg1)
	{
		callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void WebStorage::getUsageForOrigin(jstring arg0, JObject arg1)
	{
		callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void WebStorage::setQuotaForOrigin(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"setQuotaForOrigin",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
} // namespace android::webkit

