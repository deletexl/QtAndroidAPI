#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
namespace java::net
{
	class URI;
}

namespace java::nio::file
{
	class Paths : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Paths(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Paths(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject get(java::net::URI arg0);
		static JObject get(JString arg0, JArray arg1);
	};
} // namespace java::nio::file

