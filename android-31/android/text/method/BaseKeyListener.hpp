#pragma once

#include "./MetaKeyKeyListener.hpp"

namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class BaseKeyListener : public android::text::method::MetaKeyKeyListener
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::MetaKeyKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		BaseKeyListener(QJniObject obj);
		
		// Constructors
		BaseKeyListener();
		
		// Methods
		jboolean backspace(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		jboolean forwardDelete(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		jboolean onKeyOther(android::view::View arg0, JObject arg1, android::view::KeyEvent arg2) const;
	};
} // namespace android::text::method

