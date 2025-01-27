#include "../../app/Activity.hpp"
#include "../ComponentName.hpp"
#include "../Intent.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CrossProfileApps.hpp"

namespace android::content::pm
{
	// Fields
	JString CrossProfileApps::ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED()
	{
		return getStaticObjectField(
			"android.content.pm.CrossProfileApps",
			"ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CrossProfileApps::CrossProfileApps(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CrossProfileApps::canInteractAcrossProfiles() const
	{
		return callMethod<jboolean>(
			"canInteractAcrossProfiles",
			"()Z"
		);
	}
	jboolean CrossProfileApps::canRequestInteractAcrossProfiles() const
	{
		return callMethod<jboolean>(
			"canRequestInteractAcrossProfiles",
			"()Z"
		);
	}
	android::content::Intent CrossProfileApps::createRequestInteractAcrossProfilesIntent() const
	{
		return callObjectMethod(
			"createRequestInteractAcrossProfilesIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::graphics::drawable::Drawable CrossProfileApps::getProfileSwitchingIconDrawable(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getProfileSwitchingIconDrawable",
			"(Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString CrossProfileApps::getProfileSwitchingLabel(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getProfileSwitchingLabel",
			"(Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject CrossProfileApps::getTargetUserProfiles() const
	{
		return callObjectMethod(
			"getTargetUserProfiles",
			"()Ljava/util/List;"
		);
	}
	void CrossProfileApps::startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CrossProfileApps::startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void CrossProfileApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::pm

