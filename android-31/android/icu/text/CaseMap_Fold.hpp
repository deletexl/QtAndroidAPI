#pragma once

#include "./CaseMap.hpp"

namespace android::icu::text
{
	class CaseMap;
}
namespace android::icu::text
{
	class Edits;
}
class JString;
class JString;

namespace android::icu::text
{
	class CaseMap_Fold : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaseMap_Fold(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Fold(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject apply(JString arg0, JObject arg1, android::icu::text::Edits arg2) const;
		JString apply(JString arg0) const;
		android::icu::text::CaseMap_Fold omitUnchangedText() const;
		android::icu::text::CaseMap_Fold turkic() const;
	};
} // namespace android::icu::text

