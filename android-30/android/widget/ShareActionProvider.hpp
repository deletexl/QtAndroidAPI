#pragma once

#include "../view/ActionProvider.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::widget
{
	class ShareActionProvider : public android::view::ActionProvider
	{
	public:
		// Fields
		static JString DEFAULT_SHARE_HISTORY_FILE_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit ShareActionProvider(const char *className, const char *sig, Ts...agv) : android::view::ActionProvider(className, sig, std::forward<Ts>(agv)...) {}
		ShareActionProvider(QJniObject obj);
		
		// Constructors
		ShareActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean hasSubMenu() const;
		android::view::View onCreateActionView() const;
		void onPrepareSubMenu(JObject arg0) const;
		void setOnShareTargetSelectedListener(JObject arg0) const;
		void setShareHistoryFileName(JString arg0) const;
		void setShareIntent(android::content::Intent arg0) const;
	};
} // namespace android::widget

