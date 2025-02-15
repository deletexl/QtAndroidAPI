#pragma once

#include "../app/ActionBar_LayoutParams.hpp"

namespace android::app
{
	class ActionBar_LayoutParams;
}
namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace android::widget
{
	class Toolbar_LayoutParams : public android::app::ActionBar_LayoutParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Toolbar_LayoutParams(const char *className, const char *sig, Ts...agv) : android::app::ActionBar_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		Toolbar_LayoutParams(QJniObject obj);
		
		// Constructors
		Toolbar_LayoutParams(android::app::ActionBar_LayoutParams arg0);
		Toolbar_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		Toolbar_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		Toolbar_LayoutParams(android::widget::Toolbar_LayoutParams &arg0);
		Toolbar_LayoutParams(jint arg0);
		Toolbar_LayoutParams(android::content::Context arg0, JObject arg1);
		Toolbar_LayoutParams(jint arg0, jint arg1);
		Toolbar_LayoutParams(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace android::widget

