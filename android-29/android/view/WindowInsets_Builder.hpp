#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::view
{
	class DisplayCutout;
}
namespace android::view
{
	class WindowInsets;
}

namespace android::view
{
	class WindowInsets_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsets_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets_Builder(QJniObject obj);
		
		// Constructors
		WindowInsets_Builder();
		WindowInsets_Builder(android::view::WindowInsets arg0);
		
		// Methods
		android::view::WindowInsets build() const;
		android::view::WindowInsets_Builder setDisplayCutout(android::view::DisplayCutout arg0) const;
		android::view::WindowInsets_Builder setMandatorySystemGestureInsets(android::graphics::Insets arg0) const;
		android::view::WindowInsets_Builder setStableInsets(android::graphics::Insets arg0) const;
		android::view::WindowInsets_Builder setSystemGestureInsets(android::graphics::Insets arg0) const;
		android::view::WindowInsets_Builder setSystemWindowInsets(android::graphics::Insets arg0) const;
		android::view::WindowInsets_Builder setTappableElementInsets(android::graphics::Insets arg0) const;
	};
} // namespace android::view

