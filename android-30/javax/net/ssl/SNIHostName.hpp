#pragma once

#include "./SNIServerName.hpp"

class JByteArray;
class JObject;
class JString;
namespace javax::net::ssl
{
	class SNIMatcher;
}

namespace javax::net::ssl
{
	class SNIHostName : public javax::net::ssl::SNIServerName
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SNIHostName(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SNIServerName(className, sig, std::forward<Ts>(agv)...) {}
		SNIHostName(QJniObject obj);
		
		// Constructors
		SNIHostName(JByteArray arg0);
		SNIHostName(JString arg0);
		
		// Methods
		static javax::net::ssl::SNIMatcher createSNIMatcher(JString arg0);
		jboolean equals(JObject arg0) const;
		JString getAsciiName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace javax::net::ssl

