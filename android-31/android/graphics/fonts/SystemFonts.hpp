#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::fonts
{
	class SystemFonts : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemFonts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemFonts(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableFonts();
	};
} // namespace android::graphics::fonts

