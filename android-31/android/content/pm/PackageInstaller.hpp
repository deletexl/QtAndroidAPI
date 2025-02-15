#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class PackageInstaller_Session;
}
namespace android::content::pm
{
	class PackageInstaller_SessionCallback;
}
namespace android::content::pm
{
	class PackageInstaller_SessionInfo;
}
namespace android::content::pm
{
	class PackageInstaller_SessionParams;
}
namespace android::content::pm
{
	class VersionedPackage;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Handler;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller : public JObject
	{
	public:
		// Fields
		static JString ACTION_SESSION_COMMITTED();
		static JString ACTION_SESSION_DETAILS();
		static JString ACTION_SESSION_UPDATED();
		static JString EXTRA_OTHER_PACKAGE_NAME();
		static JString EXTRA_PACKAGE_NAME();
		static JString EXTRA_SESSION();
		static JString EXTRA_SESSION_ID();
		static JString EXTRA_STATUS();
		static JString EXTRA_STATUS_MESSAGE();
		static JString EXTRA_STORAGE_PATH();
		static jint STATUS_FAILURE();
		static jint STATUS_FAILURE_ABORTED();
		static jint STATUS_FAILURE_BLOCKED();
		static jint STATUS_FAILURE_CONFLICT();
		static jint STATUS_FAILURE_INCOMPATIBLE();
		static jint STATUS_FAILURE_INVALID();
		static jint STATUS_FAILURE_STORAGE();
		static jint STATUS_PENDING_USER_ACTION();
		static jint STATUS_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller(QJniObject obj);
		
		// Constructors
		
		// Methods
		void abandonSession(jint arg0) const;
		jint createSession(android::content::pm::PackageInstaller_SessionParams arg0) const;
		android::content::pm::PackageInstaller_SessionInfo getActiveStagedSession() const;
		JObject getActiveStagedSessions() const;
		JObject getAllSessions() const;
		JObject getMySessions() const;
		android::content::pm::PackageInstaller_SessionInfo getSessionInfo(jint arg0) const;
		JObject getStagedSessions() const;
		void installExistingPackage(JString arg0, jint arg1, android::content::IntentSender arg2) const;
		android::content::pm::PackageInstaller_Session openSession(jint arg0) const;
		void registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0) const;
		void registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0, android::os::Handler arg1) const;
		void uninstall(android::content::pm::VersionedPackage arg0, android::content::IntentSender arg1) const;
		void uninstall(JString arg0, android::content::IntentSender arg1) const;
		void uninstallExistingPackage(JString arg0, android::content::IntentSender arg1) const;
		void unregisterSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0) const;
		void updateSessionAppIcon(jint arg0, android::graphics::Bitmap arg1) const;
		void updateSessionAppLabel(jint arg0, JString arg1) const;
	};
} // namespace android::content::pm

