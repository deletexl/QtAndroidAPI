#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::security::cert
{
	class PKIXRevocationChecker_Option : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::cert::PKIXRevocationChecker_Option NO_FALLBACK();
		static java::security::cert::PKIXRevocationChecker_Option ONLY_END_ENTITY();
		static java::security::cert::PKIXRevocationChecker_Option PREFER_CRLS();
		static java::security::cert::PKIXRevocationChecker_Option SOFT_FAIL();
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXRevocationChecker_Option(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PKIXRevocationChecker_Option(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::PKIXRevocationChecker_Option valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::security::cert

