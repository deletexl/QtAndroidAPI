#pragma once

#include "../../../JObject.hpp"
#include "./PackageItemInfo.hpp"

namespace android::content::pm
{
	class PackageManager;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PermissionGroupInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_PERSONAL_INFO();
		jint descriptionRes();
		jint flags();
		jstring nonLocalizedDescription();
		jint priority();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PermissionGroupInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		PermissionGroupInfo(QAndroidJniObject obj);
		
		// Constructors
		PermissionGroupInfo();
		PermissionGroupInfo(android::content::pm::PermissionGroupInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring loadDescription(android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

