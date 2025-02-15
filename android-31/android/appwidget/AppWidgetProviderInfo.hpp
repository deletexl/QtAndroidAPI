#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
class JString;
class JObject;
class JString;

namespace android::appwidget
{
	class AppWidgetProviderInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESIZE_BOTH();
		static jint RESIZE_HORIZONTAL();
		static jint RESIZE_NONE();
		static jint RESIZE_VERTICAL();
		static jint WIDGET_CATEGORY_HOME_SCREEN();
		static jint WIDGET_CATEGORY_KEYGUARD();
		static jint WIDGET_CATEGORY_SEARCHBOX();
		static jint WIDGET_FEATURE_CONFIGURATION_OPTIONAL();
		static jint WIDGET_FEATURE_HIDE_FROM_PICKER();
		static jint WIDGET_FEATURE_RECONFIGURABLE();
		jint autoAdvanceViewId();
		android::content::ComponentName configure();
		jint descriptionRes();
		jint icon();
		jint initialKeyguardLayout();
		jint initialLayout();
		JString label();
		jint maxResizeHeight();
		jint maxResizeWidth();
		jint minHeight();
		jint minResizeHeight();
		jint minResizeWidth();
		jint minWidth();
		jint previewImage();
		jint previewLayout();
		android::content::ComponentName provider();
		jint resizeMode();
		jint targetCellHeight();
		jint targetCellWidth();
		jint updatePeriodMillis();
		jint widgetCategory();
		jint widgetFeatures();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetProviderInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProviderInfo(QJniObject obj);
		
		// Constructors
		AppWidgetProviderInfo();
		AppWidgetProviderInfo(android::os::Parcel arg0);
		
		// Methods
		android::appwidget::AppWidgetProviderInfo clone() const;
		jint describeContents() const;
		android::content::pm::ActivityInfo getActivityInfo() const;
		android::os::UserHandle getProfile() const;
		JString loadDescription(android::content::Context arg0) const;
		android::graphics::drawable::Drawable loadIcon(android::content::Context arg0, jint arg1) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		android::graphics::drawable::Drawable loadPreviewImage(android::content::Context arg0, jint arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::appwidget

