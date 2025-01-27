#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class Locale_LanguageRange : public JObject
	{
	public:
		// Fields
		static jdouble MAX_WEIGHT();
		static jdouble MIN_WEIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_LanguageRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Locale_LanguageRange(QJniObject obj);
		
		// Constructors
		Locale_LanguageRange(JString arg0);
		Locale_LanguageRange(JString arg0, jdouble arg1);
		
		// Methods
		static JObject mapEquivalents(JObject arg0, JObject arg1);
		static JObject parse(JString arg0);
		static JObject parse(JString arg0, JObject arg1);
		jboolean equals(JObject arg0) const;
		JString getRange() const;
		jdouble getWeight() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::util

