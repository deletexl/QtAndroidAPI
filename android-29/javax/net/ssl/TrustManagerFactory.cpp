#include "../../../java/security/KeyStore.hpp"
#include "../../../java/security/Provider.hpp"
#include "./TrustManagerFactorySpi.hpp"
#include "./TrustManagerFactory.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	TrustManagerFactory::TrustManagerFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring TrustManagerFactory::getDefaultAlgorithm()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getDefaultAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TrustManagerFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.TrustManagerFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;",
			arg0,
			arg1.object()
		);
	}
	jstring TrustManagerFactory::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustManagerFactory::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jarray TrustManagerFactory::getTrustManagers()
	{
		return callObjectMethod(
			"getTrustManagers",
			"()[Ljavax/net/ssl/TrustManager;"
		).object<jarray>();
	}
	void TrustManagerFactory::init(java::security::KeyStore arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		);
	}
	void TrustManagerFactory::init(__JniBaseClass arg0)
	{
		callMethod<void>(
			"init",
			"(Ljavax/net/ssl/ManagerFactoryParameters;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

