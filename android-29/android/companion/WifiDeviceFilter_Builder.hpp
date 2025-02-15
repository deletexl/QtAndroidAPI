#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class WifiDeviceFilter;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class WifiDeviceFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiDeviceFilter_Builder(QJniObject obj);
		
		// Constructors
		WifiDeviceFilter_Builder();
		
		// Methods
		android::companion::WifiDeviceFilter build() const;
		android::companion::WifiDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0) const;
	};
} // namespace android::companion

