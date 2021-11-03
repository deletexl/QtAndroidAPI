#pragma once

#include "../../../../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}
namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class SecureRandom;
}

namespace org::apache::http::conn::ssl
{
	class SSLSocketFactory : public JObject
	{
	public:
		// Fields
		static JObject ALLOW_ALL_HOSTNAME_VERIFIER();
		static JObject BROWSER_COMPATIBLE_HOSTNAME_VERIFIER();
		static jstring SSL();
		static jstring SSLV2();
		static JObject STRICT_HOSTNAME_VERIFIER();
		static jstring TLS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSocketFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocketFactory(QAndroidJniObject obj);
		
		// Constructors
		SSLSocketFactory(java::security::KeyStore arg0);
		SSLSocketFactory(java::security::KeyStore arg0, jstring arg1);
		SSLSocketFactory(java::security::KeyStore arg0, jstring arg1, java::security::KeyStore arg2);
		SSLSocketFactory(jstring arg0, java::security::KeyStore arg1, jstring arg2, java::security::KeyStore arg3, java::security::SecureRandom arg4, JObject arg5);
		
		// Methods
		static org::apache::http::conn::ssl::SSLSocketFactory getSocketFactory();
		java::net::Socket connectSocket(java::net::Socket arg0, jstring arg1, jint arg2, java::net::InetAddress arg3, jint arg4, JObject arg5);
		java::net::Socket createSocket();
		java::net::Socket createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		JObject getHostnameVerifier();
		jboolean isSecure(java::net::Socket arg0);
		void setHostnameVerifier(JObject arg0);
	};
} // namespace org::apache::http::conn::ssl

