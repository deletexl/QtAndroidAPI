#include "./AssociationRequest.hpp"
#include "./CompanionDeviceManager_Callback.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Handler.hpp"
#include "./CompanionDeviceManager.hpp"

namespace android::companion
{
	// Fields
	jstring CompanionDeviceManager::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CompanionDeviceManager::CompanionDeviceManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void CompanionDeviceManager::associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Landroid/companion/CompanionDeviceManager$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CompanionDeviceManager::disassociate(jstring arg0)
	{
		callMethod<void>(
			"disassociate",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject CompanionDeviceManager::getAssociations()
	{
		return callObjectMethod(
			"getAssociations",
			"()Ljava/util/List;"
		);
	}
	jboolean CompanionDeviceManager::hasNotificationAccess(android::content::ComponentName arg0)
	{
		return callMethod<jboolean>(
			"hasNotificationAccess",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	void CompanionDeviceManager::requestNotificationAccess(android::content::ComponentName arg0)
	{
		callMethod<void>(
			"requestNotificationAccess",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
} // namespace android::companion

