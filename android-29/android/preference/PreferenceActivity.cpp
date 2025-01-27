#include "../app/Fragment.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./Preference.hpp"
#include "./PreferenceActivity_Header.hpp"
#include "./PreferenceFragment.hpp"
#include "./PreferenceManager.hpp"
#include "./PreferenceScreen.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceActivity.hpp"

namespace android::preference
{
	// Fields
	JString PreferenceActivity::EXTRA_NO_HEADERS()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_NO_HEADERS",
			"Ljava/lang/String;"
		);
	}
	JString PreferenceActivity::EXTRA_SHOW_FRAGMENT()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT",
			"Ljava/lang/String;"
		);
	}
	JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_ARGUMENTS()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_ARGUMENTS",
			"Ljava/lang/String;"
		);
	}
	JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_SHORT_TITLE()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_SHORT_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString PreferenceActivity::EXTRA_SHOW_FRAGMENT_TITLE()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity",
			"EXTRA_SHOW_FRAGMENT_TITLE",
			"Ljava/lang/String;"
		);
	}
	jlong PreferenceActivity::HEADER_ID_UNDEFINED()
	{
		return getStaticField<jlong>(
			"android.preference.PreferenceActivity",
			"HEADER_ID_UNDEFINED"
		);
	}
	
	// QJniObject forward
	PreferenceActivity::PreferenceActivity(QJniObject obj) : android::app::ListActivity(obj) {}
	
	// Constructors
	PreferenceActivity::PreferenceActivity()
		: android::app::ListActivity(
			"android.preference.PreferenceActivity",
			"()V"
		) {}
	
	// Methods
	void PreferenceActivity::addPreferencesFromIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"addPreferencesFromIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::addPreferencesFromResource(jint arg0) const
	{
		callMethod<void>(
			"addPreferencesFromResource",
			"(I)V",
			arg0
		);
	}
	android::preference::Preference PreferenceActivity::findPreference(JString arg0) const
	{
		return callObjectMethod(
			"findPreference",
			"(Ljava/lang/CharSequence;)Landroid/preference/Preference;",
			arg0.object<jstring>()
		);
	}
	void PreferenceActivity::finishPreferencePanel(android::app::Fragment arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"finishPreferencePanel",
			"(Landroid/app/Fragment;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::preference::PreferenceManager PreferenceActivity::getPreferenceManager() const
	{
		return callObjectMethod(
			"getPreferenceManager",
			"()Landroid/preference/PreferenceManager;"
		);
	}
	android::preference::PreferenceScreen PreferenceActivity::getPreferenceScreen() const
	{
		return callObjectMethod(
			"getPreferenceScreen",
			"()Landroid/preference/PreferenceScreen;"
		);
	}
	jboolean PreferenceActivity::hasHeaders() const
	{
		return callMethod<jboolean>(
			"hasHeaders",
			"()Z"
		);
	}
	void PreferenceActivity::invalidateHeaders() const
	{
		callMethod<void>(
			"invalidateHeaders",
			"()V"
		);
	}
	jboolean PreferenceActivity::isMultiPane() const
	{
		return callMethod<jboolean>(
			"isMultiPane",
			"()Z"
		);
	}
	void PreferenceActivity::loadHeadersFromResource(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"loadHeadersFromResource",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
	void PreferenceActivity::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void PreferenceActivity::onBuildHeaders(JObject arg0) const
	{
		callMethod<void>(
			"onBuildHeaders",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	android::content::Intent PreferenceActivity::onBuildStartFragmentIntent(JString arg0, android::os::Bundle arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"onBuildStartFragmentIntent",
			"(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void PreferenceActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	android::preference::PreferenceActivity_Header PreferenceActivity::onGetInitialHeader() const
	{
		return callObjectMethod(
			"onGetInitialHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	android::preference::PreferenceActivity_Header PreferenceActivity::onGetNewHeader() const
	{
		return callObjectMethod(
			"onGetNewHeader",
			"()Landroid/preference/PreferenceActivity$Header;"
		);
	}
	void PreferenceActivity::onHeaderClick(android::preference::PreferenceActivity_Header arg0, jint arg1) const
	{
		callMethod<void>(
			"onHeaderClick",
			"(Landroid/preference/PreferenceActivity$Header;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean PreferenceActivity::onIsHidingHeaders() const
	{
		return callMethod<jboolean>(
			"onIsHidingHeaders",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onIsMultiPane() const
	{
		return callMethod<jboolean>(
			"onIsMultiPane",
			"()Z"
		);
	}
	jboolean PreferenceActivity::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	jboolean PreferenceActivity::onPreferenceStartFragment(android::preference::PreferenceFragment arg0, android::preference::Preference arg1) const
	{
		return callMethod<jboolean>(
			"onPreferenceStartFragment",
			"(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean PreferenceActivity::onPreferenceTreeClick(android::preference::PreferenceScreen arg0, android::preference::Preference arg1) const
	{
		return callMethod<jboolean>(
			"onPreferenceTreeClick",
			"(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void PreferenceActivity::setListFooter(android::view::View arg0) const
	{
		callMethod<void>(
			"setListFooter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::setParentTitle(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void PreferenceActivity::setPreferenceScreen(android::preference::PreferenceScreen arg0) const
	{
		callMethod<void>(
			"setPreferenceScreen",
			"(Landroid/preference/PreferenceScreen;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::showBreadCrumbs(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"showBreadCrumbs",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void PreferenceActivity::startPreferenceFragment(android::app::Fragment arg0, jboolean arg1) const
	{
		callMethod<void>(
			"startPreferenceFragment",
			"(Landroid/app/Fragment;Z)V",
			arg0.object(),
			arg1
		);
	}
	void PreferenceActivity::startPreferencePanel(JString arg0, android::os::Bundle arg1, jint arg2, JString arg3, android::app::Fragment arg4, jint arg5) const
	{
		callMethod<void>(
			"startPreferencePanel",
			"(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object(),
			arg5
		);
	}
	void PreferenceActivity::startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3) const
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void PreferenceActivity::startWithFragment(JString arg0, android::os::Bundle arg1, android::app::Fragment arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"startWithFragment",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	void PreferenceActivity::switchToHeader(android::preference::PreferenceActivity_Header arg0) const
	{
		callMethod<void>(
			"switchToHeader",
			"(Landroid/preference/PreferenceActivity$Header;)V",
			arg0.object()
		);
	}
	void PreferenceActivity::switchToHeader(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"switchToHeader",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::preference

