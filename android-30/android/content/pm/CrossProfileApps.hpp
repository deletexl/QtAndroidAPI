#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class UserHandle;
}
class JString;
class JString;

namespace android::content::pm
{
	class CrossProfileApps : public JObject
	{
	public:
		// Fields
		static JString ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CrossProfileApps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CrossProfileApps(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canInteractAcrossProfiles() const;
		jboolean canRequestInteractAcrossProfiles() const;
		android::content::Intent createRequestInteractAcrossProfilesIntent() const;
		android::graphics::drawable::Drawable getProfileSwitchingIconDrawable(android::os::UserHandle arg0) const;
		JString getProfileSwitchingLabel(android::os::UserHandle arg0) const;
		JObject getTargetUserProfiles() const;
		void startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2) const;
		void startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2, android::os::Bundle arg3) const;
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
	};
} // namespace android::content::pm

