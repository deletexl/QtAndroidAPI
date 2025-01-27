#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class UnicodeSetSpanner_CountMethod : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSetSpanner_CountMethod MIN_ELEMENTS();
		static android::icu::text::UnicodeSetSpanner_CountMethod WHOLE_SPAN();
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner_CountMethod(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner_CountMethod(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSetSpanner_CountMethod valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

