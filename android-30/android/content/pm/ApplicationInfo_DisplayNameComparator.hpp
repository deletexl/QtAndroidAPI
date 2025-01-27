#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
class JObject;

namespace android::content::pm
{
	class ApplicationInfo_DisplayNameComparator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationInfo_DisplayNameComparator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationInfo_DisplayNameComparator(QJniObject obj);
		
		// Constructors
		ApplicationInfo_DisplayNameComparator(android::content::pm::PackageManager arg0);
		
		// Methods
		jint compare(android::content::pm::ApplicationInfo arg0, android::content::pm::ApplicationInfo arg1) const;
		jint compare(JObject arg0, JObject arg1) const;
	};
} // namespace android::content::pm

