#include "./SearchableInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./SearchManager.hpp"

namespace android::app
{
	// Fields
	JString SearchManager::ACTION_KEY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"ACTION_KEY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::ACTION_MSG()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"ACTION_MSG",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::APP_DATA()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"APP_DATA",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::CURSOR_EXTRA_KEY_IN_PROGRESS()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"CURSOR_EXTRA_KEY_IN_PROGRESS",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::EXTRA_DATA_KEY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_DATA_KEY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::EXTRA_NEW_SEARCH()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_NEW_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::EXTRA_SELECT_QUERY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_SELECT_QUERY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::EXTRA_WEB_SEARCH_PENDINGINTENT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"EXTRA_WEB_SEARCH_PENDINGINTENT",
			"Ljava/lang/String;"
		);
	}
	jint SearchManager::FLAG_QUERY_REFINEMENT()
	{
		return getStaticField<jint>(
			"android.app.SearchManager",
			"FLAG_QUERY_REFINEMENT"
		);
	}
	JString SearchManager::INTENT_ACTION_GLOBAL_SEARCH()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_GLOBAL_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::INTENT_ACTION_SEARCHABLES_CHANGED()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCHABLES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::INTENT_ACTION_SEARCH_SETTINGS()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::INTENT_ACTION_SEARCH_SETTINGS_CHANGED()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_SEARCH_SETTINGS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::INTENT_ACTION_WEB_SEARCH_SETTINGS()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_ACTION_WEB_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"INTENT_GLOBAL_SEARCH_ACTIVITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jchar SearchManager::MENU_KEY()
	{
		return getStaticField<jchar>(
			"android.app.SearchManager",
			"MENU_KEY"
		);
	}
	jint SearchManager::MENU_KEYCODE()
	{
		return getStaticField<jint>(
			"android.app.SearchManager",
			"MENU_KEYCODE"
		);
	}
	JString SearchManager::QUERY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"QUERY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SHORTCUT_MIME_TYPE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SHORTCUT_MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_AUDIO_CHANNEL_CONFIG",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_DURATION()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_DURATION",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_FLAGS()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_FLAGS",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_FORMAT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_ICON_1()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_ICON_1",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_ICON_2()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_ICON_2",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_INTENT_ACTION()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_INTENT_DATA()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_DATA",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_INTENT_DATA_ID()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_DATA_ID",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_INTENT_EXTRA_DATA()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_INTENT_EXTRA_DATA",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_IS_LIVE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_IS_LIVE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_LAST_ACCESS_HINT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_LAST_ACCESS_HINT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_PRODUCTION_YEAR()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_PRODUCTION_YEAR",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_PURCHASE_PRICE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_PURCHASE_PRICE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_QUERY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_QUERY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_RATING_SCORE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RATING_SCORE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_RATING_STYLE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RATING_STYLE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_RENTAL_PRICE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RENTAL_PRICE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_RESULT_CARD_IMAGE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_RESULT_CARD_IMAGE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_SHORTCUT_ID()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_SHORTCUT_ID",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_TEXT_1()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_1",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_TEXT_2()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_2",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_TEXT_2_URL()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_TEXT_2_URL",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_VIDEO_HEIGHT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_COLUMN_VIDEO_WIDTH()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_MIME_TYPE()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_NEVER_MAKE_SHORTCUT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_NEVER_MAKE_SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_PARAMETER_LIMIT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_PARAMETER_LIMIT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_URI_PATH_QUERY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_URI_PATH_QUERY",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::SUGGEST_URI_PATH_SHORTCUT()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"SUGGEST_URI_PATH_SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	JString SearchManager::USER_QUERY()
	{
		return getStaticObjectField(
			"android.app.SearchManager",
			"USER_QUERY",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SearchManager::SearchManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::ComponentName SearchManager::getGlobalSearchActivity() const
	{
		return callObjectMethod(
			"getGlobalSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	android::app::SearchableInfo SearchManager::getSearchableInfo(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getSearchableInfo",
			"(Landroid/content/ComponentName;)Landroid/app/SearchableInfo;",
			arg0.object()
		);
	}
	JObject SearchManager::getSearchablesInGlobalSearch() const
	{
		return callObjectMethod(
			"getSearchablesInGlobalSearch",
			"()Ljava/util/List;"
		);
	}
	void SearchManager::onCancel(JObject arg0) const
	{
		callMethod<void>(
			"onCancel",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void SearchManager::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void SearchManager::setOnCancelListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/app/SearchManager$OnCancelListener;)V",
			arg0.object()
		);
	}
	void SearchManager::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/app/SearchManager$OnDismissListener;)V",
			arg0.object()
		);
	}
	void SearchManager::startSearch(JString arg0, jboolean arg1, android::content::ComponentName arg2, android::os::Bundle arg3, jboolean arg4) const
	{
		callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/content/ComponentName;Landroid/os/Bundle;Z)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	void SearchManager::stopSearch() const
	{
		callMethod<void>(
			"stopSearch",
			"()V"
		);
	}
	void SearchManager::triggerSearch(JString arg0, android::content::ComponentName arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app

