#pragma once

#include "../../../JObject.hpp"

namespace android::app::backup
{
	class RestoreObserver;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class UserHandle;
}
class JString;

namespace android::app::backup
{
	class BackupManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BackupManager(QJniObject obj);
		
		// Constructors
		BackupManager(android::content::Context arg0);
		
		// Methods
		static void dataChanged(JString arg0);
		void dataChanged() const;
		android::os::UserHandle getUserForAncestralSerialNumber(jlong arg0) const;
		jint requestRestore(android::app::backup::RestoreObserver arg0) const;
	};
} // namespace android::app::backup

