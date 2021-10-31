#include "./NsdServiceInfo.hpp"
#include "./NsdManager.hpp"

namespace android::net::nsd
{
	// Fields
	jstring NsdManager::ACTION_NSD_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.nsd.NsdManager",
			"ACTION_NSD_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NsdManager::EXTRA_NSD_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.nsd.NsdManager",
			"EXTRA_NSD_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NsdManager::FAILURE_ALREADY_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_ALREADY_ACTIVE"
		);
	}
	jint NsdManager::FAILURE_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_INTERNAL_ERROR"
		);
	}
	jint NsdManager::FAILURE_MAX_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_MAX_LIMIT"
		);
	}
	jint NsdManager::NSD_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_DISABLED"
		);
	}
	jint NsdManager::NSD_STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_ENABLED"
		);
	}
	jint NsdManager::PROTOCOL_DNS_SD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"PROTOCOL_DNS_SD"
		);
	}
	
	// QAndroidJniObject forward
	NsdManager::NsdManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void NsdManager::discoverServices(jstring arg0, jint arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void NsdManager::registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"registerService",
			"(Landroid/net/nsd/NsdServiceInfo;ILandroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void NsdManager::resolveService(android::net::nsd::NsdServiceInfo arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"resolveService",
			"(Landroid/net/nsd/NsdServiceInfo;Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NsdManager::stopServiceDiscovery(__JniBaseClass arg0)
	{
		callMethod<void>(
			"stopServiceDiscovery",
			"(Landroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.object()
		);
	}
	void NsdManager::unregisterService(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterService",
			"(Landroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object()
		);
	}
} // namespace android::net::nsd

