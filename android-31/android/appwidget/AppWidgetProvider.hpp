#pragma once

#include "../content/BroadcastReceiver.hpp"

class JIntArray;
namespace android::appwidget
{
	class AppWidgetManager;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}

namespace android::appwidget
{
	class AppWidgetProvider : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppWidgetProvider(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetProvider(QJniObject obj);
		
		// Constructors
		AppWidgetProvider();
		
		// Methods
		void onAppWidgetOptionsChanged(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, jint arg2, android::os::Bundle arg3) const;
		void onDeleted(android::content::Context arg0, JIntArray arg1) const;
		void onDisabled(android::content::Context arg0) const;
		void onEnabled(android::content::Context arg0) const;
		void onReceive(android::content::Context arg0, android::content::Intent arg1) const;
		void onRestored(android::content::Context arg0, JIntArray arg1, JIntArray arg2) const;
		void onUpdate(android::content::Context arg0, android::appwidget::AppWidgetManager arg1, JIntArray arg2) const;
	};
} // namespace android::appwidget

