#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller_SessionParams : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MODE_FULL_INSTALL();
		static jint MODE_INHERIT_EXISTING();
		static JObject RESTRICTED_PERMISSIONS_ALL();
		static jint USER_ACTION_NOT_REQUIRED();
		static jint USER_ACTION_REQUIRED();
		static jint USER_ACTION_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionParams(QJniObject obj);
		
		// Constructors
		PackageInstaller_SessionParams(jint arg0);
		
		// Methods
		jint describeContents() const;
		void setAppIcon(android::graphics::Bitmap arg0) const;
		void setAppLabel(JString arg0) const;
		void setAppPackageName(JString arg0) const;
		void setAutoRevokePermissionsMode(jboolean arg0) const;
		void setInstallLocation(jint arg0) const;
		void setInstallReason(jint arg0) const;
		void setInstallScenario(jint arg0) const;
		void setMultiPackage() const;
		void setOriginatingUid(jint arg0) const;
		void setOriginatingUri(android::net::Uri arg0) const;
		void setReferrerUri(android::net::Uri arg0) const;
		void setRequireUserAction(jint arg0) const;
		void setSize(jlong arg0) const;
		void setWhitelistedRestrictedPermissions(JObject arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

