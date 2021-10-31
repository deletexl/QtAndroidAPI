#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "./AppWidgetProviderInfo.hpp"

namespace android::appwidget
{
	// Fields
	QAndroidJniObject AppWidgetProviderInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_BOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_BOTH"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_HORIZONTAL"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_NONE"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_VERTICAL"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_HOME_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_HOME_SCREEN"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_KEYGUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_KEYGUARD"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_SEARCHBOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_SEARCHBOX"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_HIDE_FROM_PICKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_HIDE_FROM_PICKER"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_RECONFIGURABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_RECONFIGURABLE"
		);
	}
	jint AppWidgetProviderInfo::autoAdvanceViewId()
	{
		return getField<jint>(
			"autoAdvanceViewId"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::configure()
	{
		return getObjectField(
			"configure",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	jint AppWidgetProviderInfo::initialKeyguardLayout()
	{
		return getField<jint>(
			"initialKeyguardLayout"
		);
	}
	jint AppWidgetProviderInfo::initialLayout()
	{
		return getField<jint>(
			"initialLayout"
		);
	}
	jstring AppWidgetProviderInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppWidgetProviderInfo::minHeight()
	{
		return getField<jint>(
			"minHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeHeight()
	{
		return getField<jint>(
			"minResizeHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeWidth()
	{
		return getField<jint>(
			"minResizeWidth"
		);
	}
	jint AppWidgetProviderInfo::minWidth()
	{
		return getField<jint>(
			"minWidth"
		);
	}
	jint AppWidgetProviderInfo::previewImage()
	{
		return getField<jint>(
			"previewImage"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::provider()
	{
		return getObjectField(
			"provider",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::resizeMode()
	{
		return getField<jint>(
			"resizeMode"
		);
	}
	jint AppWidgetProviderInfo::updatePeriodMillis()
	{
		return getField<jint>(
			"updatePeriodMillis"
		);
	}
	jint AppWidgetProviderInfo::widgetCategory()
	{
		return getField<jint>(
			"widgetCategory"
		);
	}
	jint AppWidgetProviderInfo::widgetFeatures()
	{
		return getField<jint>(
			"widgetFeatures"
		);
	}
	
	// QAndroidJniObject forward
	AppWidgetProviderInfo::AppWidgetProviderInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppWidgetProviderInfo::AppWidgetProviderInfo()
		: __JniBaseClass(
			"android.appwidget.AppWidgetProviderInfo",
			"()V"
		) {}
	AppWidgetProviderInfo::AppWidgetProviderInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.appwidget.AppWidgetProviderInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject AppWidgetProviderInfo::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	jint AppWidgetProviderInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::getProfile()
	{
		return callObjectMethod(
			"getProfile",
			"()Landroid/os/UserHandle;"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::loadIcon(android::content::Context arg0, jint arg1)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	jstring AppWidgetProviderInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	QAndroidJniObject AppWidgetProviderInfo::loadPreviewImage(android::content::Context arg0, jint arg1)
	{
		return callObjectMethod(
			"loadPreviewImage",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1
		);
	}
	jstring AppWidgetProviderInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AppWidgetProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::appwidget

