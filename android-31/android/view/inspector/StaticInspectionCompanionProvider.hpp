#pragma once

#include "../../../JObject.hpp"


namespace android::view::inspector
{
	class StaticInspectionCompanionProvider : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticInspectionCompanionProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StaticInspectionCompanionProvider(QAndroidJniObject obj);
		
		// Constructors
		StaticInspectionCompanionProvider();
		
		// Methods
		JObject provide(jclass arg0);
	};
} // namespace android::view::inspector

