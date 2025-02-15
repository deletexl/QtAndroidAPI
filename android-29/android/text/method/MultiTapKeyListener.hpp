#pragma once

#include "./BaseKeyListener.hpp"

namespace android::text::method
{
	class TextKeyListener_Capitalize;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
class JObject;

namespace android::text::method
{
	class MultiTapKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiTapKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::BaseKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		MultiTapKeyListener(QJniObject obj);
		
		// Constructors
		MultiTapKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static android::text::method::MultiTapKeyListener getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1);
		jint getInputType() const;
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		void onSpanAdded(JObject arg0, JObject arg1, jint arg2, jint arg3) const;
		void onSpanChanged(JObject arg0, JObject arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void onSpanRemoved(JObject arg0, JObject arg1, jint arg2, jint arg3) const;
	};
} // namespace android::text::method

