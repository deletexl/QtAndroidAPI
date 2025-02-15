#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
class JString;

namespace android::app::role
{
	class RoleManager : public JObject
	{
	public:
		// Fields
		static JString ROLE_ASSISTANT();
		static JString ROLE_BROWSER();
		static JString ROLE_CALL_REDIRECTION();
		static JString ROLE_CALL_SCREENING();
		static JString ROLE_DIALER();
		static JString ROLE_EMERGENCY();
		static JString ROLE_HOME();
		static JString ROLE_SMS();
		
		// QJniObject forward
		template<typename ...Ts> explicit RoleManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RoleManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createRequestRoleIntent(JString arg0) const;
		jboolean isRoleAvailable(JString arg0) const;
		jboolean isRoleHeld(JString arg0) const;
	};
} // namespace android::app::role

