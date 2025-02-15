#pragma once

#include "./ScrollingMovementMethod.hpp"

namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::widget
{
	class TextView;
}

namespace android::text::method
{
	class LinkMovementMethod : public android::text::method::ScrollingMovementMethod
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkMovementMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ScrollingMovementMethod(className, sig, std::forward<Ts>(agv)...) {}
		LinkMovementMethod(QJniObject obj);
		
		// Constructors
		LinkMovementMethod();
		
		// Methods
		static JObject getInstance();
		jboolean canSelectArbitrarily() const;
		void initialize(android::widget::TextView arg0, JObject arg1) const;
		void onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const;
		jboolean onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const;
	};
} // namespace android::text::method

