#pragma once

#include "./PackageItemInfo.hpp"

namespace android::content::pm
{
	class PackageManager;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::content::pm
{
	class PermissionInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_COSTS_MONEY();
		static jint FLAG_HARD_RESTRICTED();
		static jint FLAG_IMMUTABLY_RESTRICTED();
		static jint FLAG_INSTALLED();
		static jint FLAG_SOFT_RESTRICTED();
		static jint PROTECTION_DANGEROUS();
		static jint PROTECTION_FLAG_APPOP();
		static jint PROTECTION_FLAG_DEVELOPMENT();
		static jint PROTECTION_FLAG_INSTALLER();
		static jint PROTECTION_FLAG_INSTANT();
		static jint PROTECTION_FLAG_PRE23();
		static jint PROTECTION_FLAG_PREINSTALLED();
		static jint PROTECTION_FLAG_PRIVILEGED();
		static jint PROTECTION_FLAG_RUNTIME_ONLY();
		static jint PROTECTION_FLAG_SETUP();
		static jint PROTECTION_FLAG_SYSTEM();
		static jint PROTECTION_FLAG_VERIFIER();
		static jint PROTECTION_MASK_BASE();
		static jint PROTECTION_MASK_FLAGS();
		static jint PROTECTION_NORMAL();
		static jint PROTECTION_SIGNATURE();
		static jint PROTECTION_SIGNATURE_OR_SYSTEM();
		jint descriptionRes();
		jint flags();
		JString group();
		JString nonLocalizedDescription();
		jint protectionLevel();
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		PermissionInfo(QJniObject obj);
		
		// Constructors
		PermissionInfo();
		PermissionInfo(android::content::pm::PermissionInfo &arg0);
		
		// Methods
		jint describeContents() const;
		jint getProtection() const;
		jint getProtectionFlags() const;
		JString loadDescription(android::content::pm::PackageManager arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

