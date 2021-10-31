#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class CaseMap_1;
}
namespace android::icu::text
{
	class CaseMap_Fold;
}
namespace android::icu::text
{
	class CaseMap_Lower;
}
namespace android::icu::text
{
	class CaseMap_Title;
}
namespace android::icu::text
{
	class CaseMap_Upper;
}

namespace android::icu::text
{
	class CaseMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::CaseMap_Fold fold();
		static android::icu::text::CaseMap_Lower toLower();
		static android::icu::text::CaseMap_Title toTitle();
		static android::icu::text::CaseMap_Upper toUpper();
		android::icu::text::CaseMap omitUnchangedText();
	};
} // namespace android::icu::text
