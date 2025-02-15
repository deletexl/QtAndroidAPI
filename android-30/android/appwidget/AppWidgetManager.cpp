#include "../../JIntArray.hpp"
#include "../app/PendingIntent.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/UserHandle.hpp"
#include "../widget/RemoteViews.hpp"
#include "../../JString.hpp"
#include "./AppWidgetManager.hpp"

namespace android::appwidget
{
	// Fields
	JString AppWidgetManager::ACTION_APPWIDGET_BIND()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_BIND",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_CONFIGURE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_CONFIGURE",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_DELETED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DELETED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_DISABLED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_DISABLED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_ENABLED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_HOST_RESTORED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_HOST_RESTORED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_OPTIONS_CHANGED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_OPTIONS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_PICK()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_PICK",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_RESTORED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_RESTORED",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::ACTION_APPWIDGET_UPDATE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"ACTION_APPWIDGET_UPDATE",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_ID()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_ID",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_IDS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_IDS",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_OLD_IDS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OLD_IDS",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_OPTIONS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_OPTIONS",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_PREVIEW()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PREVIEW",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_PROVIDER()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_APPWIDGET_PROVIDER_PROFILE()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_APPWIDGET_PROVIDER_PROFILE",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_CUSTOM_EXTRAS()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_EXTRAS",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_CUSTOM_INFO()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_CUSTOM_INFO",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::EXTRA_HOST_ID()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"EXTRA_HOST_ID",
			"Ljava/lang/String;"
		);
	}
	jint AppWidgetManager::INVALID_APPWIDGET_ID()
	{
		return getStaticField<jint>(
			"android.appwidget.AppWidgetManager",
			"INVALID_APPWIDGET_ID"
		);
	}
	JString AppWidgetManager::META_DATA_APPWIDGET_PROVIDER()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"META_DATA_APPWIDGET_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_HOST_CATEGORY()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_HOST_CATEGORY",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_MAX_HEIGHT()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_MAX_WIDTH()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MAX_WIDTH",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_MIN_HEIGHT()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_MIN_WIDTH()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_MIN_WIDTH",
			"Ljava/lang/String;"
		);
	}
	JString AppWidgetManager::OPTION_APPWIDGET_RESTORE_COMPLETED()
	{
		return getStaticObjectField(
			"android.appwidget.AppWidgetManager",
			"OPTION_APPWIDGET_RESTORE_COMPLETED",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	AppWidgetManager::AppWidgetManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::appwidget::AppWidgetManager AppWidgetManager::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.appwidget.AppWidgetManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;",
			arg0.object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::content::ComponentName arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jboolean AppWidgetManager::bindAppWidgetIdIfAllowed(jint arg0, android::os::UserHandle arg1, android::content::ComponentName arg2, android::os::Bundle arg3) const
	{
		return callMethod<jboolean>(
			"bindAppWidgetIdIfAllowed",
			"(ILandroid/os/UserHandle;Landroid/content/ComponentName;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	JIntArray AppWidgetManager::getAppWidgetIds(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAppWidgetIds",
			"(Landroid/content/ComponentName;)[I",
			arg0.object()
		);
	}
	android::appwidget::AppWidgetProviderInfo AppWidgetManager::getAppWidgetInfo(jint arg0) const
	{
		return callObjectMethod(
			"getAppWidgetInfo",
			"(I)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0
		);
	}
	android::os::Bundle AppWidgetManager::getAppWidgetOptions(jint arg0) const
	{
		return callObjectMethod(
			"getAppWidgetOptions",
			"(I)Landroid/os/Bundle;",
			arg0
		);
	}
	JObject AppWidgetManager::getInstalledProviders() const
	{
		return callObjectMethod(
			"getInstalledProviders",
			"()Ljava/util/List;"
		);
	}
	JObject AppWidgetManager::getInstalledProvidersForPackage(JString arg0, android::os::UserHandle arg1) const
	{
		return callObjectMethod(
			"getInstalledProvidersForPackage",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject AppWidgetManager::getInstalledProvidersForProfile(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getInstalledProvidersForProfile",
			"(Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.object()
		);
	}
	jboolean AppWidgetManager::isRequestPinAppWidgetSupported() const
	{
		return callMethod<jboolean>(
			"isRequestPinAppWidgetSupported",
			"()Z"
		);
	}
	void AppWidgetManager::notifyAppWidgetViewDataChanged(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void AppWidgetManager::notifyAppWidgetViewDataChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyAppWidgetViewDataChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"partiallyUpdateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	void AppWidgetManager::partiallyUpdateAppWidget(jint arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"partiallyUpdateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean AppWidgetManager::requestPinAppWidget(android::content::ComponentName arg0, android::os::Bundle arg1, android::app::PendingIntent arg2) const
	{
		return callMethod<jboolean>(
			"requestPinAppWidget",
			"(Landroid/content/ComponentName;Landroid/os/Bundle;Landroid/app/PendingIntent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AppWidgetManager::updateAppWidget(JIntArray arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"([ILandroid/widget/RemoteViews;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	void AppWidgetManager::updateAppWidget(android::content::ComponentName arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppWidgetManager::updateAppWidget(jint arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"updateAppWidget",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	void AppWidgetManager::updateAppWidgetOptions(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"updateAppWidgetOptions",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void AppWidgetManager::updateAppWidgetProviderInfo(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"updateAppWidgetProviderInfo",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::appwidget

