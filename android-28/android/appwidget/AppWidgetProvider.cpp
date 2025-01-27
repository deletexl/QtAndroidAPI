#include "../../JIntArray.hpp"
#include "./AppWidgetManager.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./AppWidgetProvider.hpp"

namespace android::appwidget
{
	// Fields
	
	// QJniObject forward
	AppWidgetProvider::AppWidgetProvider(QJniObject obj) : android::content::BroadcastReceiver(obj) {}
	
	// Constructors
	AppWidgetProvider::AppWidgetProvider()
		: android::content::BroadcastReceiver(
			"android.appwidget.AppWidgetProvider",
			"()V"
		) {}
	
	// Methods
	void AppWidgetProvider::onAppWidgetOptionsChanged(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"onAppWidgetOptionsChanged",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void AppWidgetProvider::onDeleted(android::content::Context arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"onDeleted",
			"(Landroid/content/Context;[I)V",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	void AppWidgetProvider::onDisabled(android::content::Context arg0) const
	{
		callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void AppWidgetProvider::onEnabled(android::content::Context arg0) const
	{
		callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void AppWidgetProvider::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppWidgetProvider::onRestored(android::content::Context arg0, JIntArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRestored",
			"(Landroid/content/Context;[I[I)V",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		);
	}
	void AppWidgetProvider::onUpdate(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onUpdate",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;[I)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
} // namespace android::appwidget

