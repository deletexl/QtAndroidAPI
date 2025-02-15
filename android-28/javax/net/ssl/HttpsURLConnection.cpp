#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/URL.hpp"
#include "../../../java/util/Optional.hpp"
#include "./SSLSocketFactory.hpp"
#include "./HttpsURLConnection.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	HttpsURLConnection::HttpsURLConnection(QJniObject obj) : java::net::HttpURLConnection(obj) {}
	
	// Constructors
	
	// Methods
	JObject HttpsURLConnection::getDefaultHostnameVerifier()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	javax::net::ssl::SSLSocketFactory HttpsURLConnection::getDefaultSSLSocketFactory()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	void HttpsURLConnection::setDefaultHostnameVerifier(JObject arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	void HttpsURLConnection::setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
	JString HttpsURLConnection::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	JObject HttpsURLConnection::getHostnameVerifier() const
	{
		return callObjectMethod(
			"getHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	JArray HttpsURLConnection::getLocalCertificates() const
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject HttpsURLConnection::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject HttpsURLConnection::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	java::util::Optional HttpsURLConnection::getSSLSession() const
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	javax::net::ssl::SSLSocketFactory HttpsURLConnection::getSSLSocketFactory() const
	{
		return callObjectMethod(
			"getSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	JArray HttpsURLConnection::getServerCertificates() const
	{
		return callObjectMethod(
			"getServerCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	void HttpsURLConnection::setHostnameVerifier(JObject arg0) const
	{
		callMethod<void>(
			"setHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	void HttpsURLConnection::setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0) const
	{
		callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

