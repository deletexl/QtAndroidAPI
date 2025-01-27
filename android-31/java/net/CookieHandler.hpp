#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class URI;
}

namespace java::net
{
	class CookieHandler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CookieHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CookieHandler(QJniObject obj);
		
		// Constructors
		CookieHandler();
		
		// Methods
		static java::net::CookieHandler getDefault();
		static void setDefault(java::net::CookieHandler arg0);
		JObject get(java::net::URI arg0, JObject arg1) const;
		void put(java::net::URI arg0, JObject arg1) const;
	};
} // namespace java::net

