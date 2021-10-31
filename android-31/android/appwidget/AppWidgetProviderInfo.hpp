#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::appwidget
{
	class AppWidgetProviderInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
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
		jstring label();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppWidgetProviderInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProviderInfo(QAndroidJniObject obj);
		
		// Constructors
		AppWidgetProviderInfo();
		AppWidgetProviderInfo(android::os::Parcel arg0);
		
		// Methods
		android::appwidget::AppWidgetProviderInfo clone();
		jint describeContents();
		android::content::pm::ActivityInfo getActivityInfo();
		android::os::UserHandle getProfile();
		jstring loadDescription(android::content::Context arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::Context arg0, jint arg1);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadPreviewImage(android::content::Context arg0, jint arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::appwidget
