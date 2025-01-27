#pragma once

#include "./ViewAnimator.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
class JString;

namespace android::widget
{
	class ViewSwitcher : public android::widget::ViewAnimator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewSwitcher(const char *className, const char *sig, Ts...agv) : android::widget::ViewAnimator(className, sig, std::forward<Ts>(agv)...) {}
		ViewSwitcher(QJniObject obj);
		
		// Constructors
		ViewSwitcher(android::content::Context arg0);
		ViewSwitcher(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		JString getAccessibilityClassName() const;
		android::view::View getNextView() const;
		void reset() const;
		void setFactory(JObject arg0) const;
	};
} // namespace android::widget

