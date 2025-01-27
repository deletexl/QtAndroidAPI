#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_GroupingStrategy : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_GroupingStrategy AUTO();
		static android::icu::number::NumberFormatter_GroupingStrategy MIN2();
		static android::icu::number::NumberFormatter_GroupingStrategy OFF();
		static android::icu::number::NumberFormatter_GroupingStrategy ON_ALIGNED();
		static android::icu::number::NumberFormatter_GroupingStrategy THOUSANDS();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatter_GroupingStrategy(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_GroupingStrategy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_GroupingStrategy valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

