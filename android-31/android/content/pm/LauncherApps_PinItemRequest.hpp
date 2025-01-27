#pragma once

#include "../../../JObject.hpp"

namespace android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class LauncherApps_PinItemRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint REQUEST_TYPE_APPWIDGET();
		static jint REQUEST_TYPE_SHORTCUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps_PinItemRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_PinItemRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean accept() const;
		jboolean accept(android::os::Bundle arg0) const;
		jint describeContents() const;
		android::appwidget::AppWidgetProviderInfo getAppWidgetProviderInfo(android::content::Context arg0) const;
		android::os::Bundle getExtras() const;
		jint getRequestType() const;
		android::content::pm::ShortcutInfo getShortcutInfo() const;
		jboolean isValid() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

