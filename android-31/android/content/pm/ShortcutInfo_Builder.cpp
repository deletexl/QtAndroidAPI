#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../app/Person.hpp"
#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "../Intent.hpp"
#include "../LocusId.hpp"
#include "./ShortcutInfo.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ShortcutInfo_Builder.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	ShortcutInfo_Builder::ShortcutInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ShortcutInfo_Builder::ShortcutInfo_Builder(android::content::Context arg0, JString arg1)
		: JObject(
			"android.content.pm.ShortcutInfo$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::content::pm::ShortcutInfo ShortcutInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setActivity(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setCategories(JObject arg0) const
	{
		return callObjectMethod(
			"setCategories",
			"(Ljava/util/Set;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setDisabledMessage(JString arg0) const
	{
		return callObjectMethod(
			"setDisabledMessage",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setExtras(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setIntents(JArray arg0) const
	{
		return callObjectMethod(
			"setIntents",
			"([Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object<jarray>()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setLocusId(android::content::LocusId arg0) const
	{
		return callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setLongLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLongLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setLongLived(jboolean arg0) const
	{
		return callObjectMethod(
			"setLongLived",
			"(Z)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setPerson(android::app::Person arg0) const
	{
		return callObjectMethod(
			"setPerson",
			"(Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setPersons(JArray arg0) const
	{
		return callObjectMethod(
			"setPersons",
			"([Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object<jarray>()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setRank(jint arg0) const
	{
		return callObjectMethod(
			"setRank",
			"(I)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setShortLabel(JString arg0) const
	{
		return callObjectMethod(
			"setShortLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	android::content::pm::ShortcutInfo_Builder ShortcutInfo_Builder::setStartingTheme(jint arg0) const
	{
		return callObjectMethod(
			"setStartingTheme",
			"(I)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
} // namespace android::content::pm

