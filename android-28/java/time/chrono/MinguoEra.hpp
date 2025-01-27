#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;
namespace java::time::format
{
	class TextStyle;
}
namespace java::util
{
	class Locale;
}

namespace java::time::chrono
{
	class MinguoEra : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::chrono::MinguoEra BEFORE_ROC();
		static java::time::chrono::MinguoEra ROC();
		
		// QJniObject forward
		template<typename ...Ts> explicit MinguoEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MinguoEra(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::MinguoEra of(jint arg0);
		static java::time::chrono::MinguoEra valueOf(JString arg0);
		static JArray values();
		JString getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const;
		jint getValue() const;
	};
} // namespace java::time::chrono

