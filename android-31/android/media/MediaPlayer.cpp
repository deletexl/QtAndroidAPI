#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "./AudioAttributes.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./MediaDataSource.hpp"
#include "./MediaDrm_KeyRequest.hpp"
#include "./MediaPlayer_DrmInfo.hpp"
#include "./MediaTimestamp.hpp"
#include "./PlaybackParams.hpp"
#include "./SyncParams.hpp"
#include "./VolumeShaper.hpp"
#include "./VolumeShaper_Configuration.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./MediaPlayer.hpp"

namespace android::media
{
	// Fields
	jint MediaPlayer::MEDIA_ERROR_IO()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_IO"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_MALFORMED"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_SERVER_DIED()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_SERVER_DIED"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_TIMED_OUT"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNKNOWN"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNSUPPORTED"
		);
	}
	jint MediaPlayer::MEDIA_INFO_AUDIO_NOT_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_AUDIO_NOT_PLAYING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BAD_INTERLEAVING()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BAD_INTERLEAVING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_END()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_END"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_START()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_START"
		);
	}
	jint MediaPlayer::MEDIA_INFO_METADATA_UPDATE()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_METADATA_UPDATE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_NOT_SEEKABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_NOT_SEEKABLE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_STARTED_AS_NEXT()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_STARTED_AS_NEXT"
		);
	}
	jint MediaPlayer::MEDIA_INFO_SUBTITLE_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_SUBTITLE_TIMED_OUT"
		);
	}
	jint MediaPlayer::MEDIA_INFO_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNKNOWN"
		);
	}
	jint MediaPlayer::MEDIA_INFO_UNSUPPORTED_SUBTITLE()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNSUPPORTED_SUBTITLE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_NOT_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_NOT_PLAYING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_RENDERING_START()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_RENDERING_START"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_TRACK_LAGGING()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_TRACK_LAGGING"
		);
	}
	JString MediaPlayer::MEDIA_MIMETYPE_TEXT_SUBRIP()
	{
		return getStaticObjectField(
			"android.media.MediaPlayer",
			"MEDIA_MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PREPARATION_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PREPARATION_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_SUCCESS"
		);
	}
	jint MediaPlayer::SEEK_CLOSEST()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST"
		);
	}
	jint MediaPlayer::SEEK_CLOSEST_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST_SYNC"
		);
	}
	jint MediaPlayer::SEEK_NEXT_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_NEXT_SYNC"
		);
	}
	jint MediaPlayer::SEEK_PREVIOUS_SYNC()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_PREVIOUS_SYNC"
		);
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT"
		);
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING"
		);
	}
	
	// QJniObject forward
	MediaPlayer::MediaPlayer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaPlayer::MediaPlayer()
		: JObject(
			"android.media.MediaPlayer",
			"()V"
		) {}
	
	// Methods
	android::media::MediaPlayer MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;",
			arg0.object(),
			arg1.object()
		);
	}
	android::media::MediaPlayer MediaPlayer::create(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;I)Landroid/media/MediaPlayer;",
			arg0.object(),
			arg1
		);
	}
	android::media::MediaPlayer MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::media::MediaPlayer MediaPlayer::create(android::content::Context arg0, jint arg1, android::media::AudioAttributes arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;ILandroid/media/AudioAttributes;I)Landroid/media/MediaPlayer;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::media::MediaPlayer MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1, JObject arg2, android::media::AudioAttributes arg3, jint arg4)
	{
		return callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;Landroid/media/AudioAttributes;I)Landroid/media/MediaPlayer;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	void MediaPlayer::addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::addTimedTextSource(java::io::FileDescriptor arg0, JString arg1) const
	{
		callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"addTimedTextSource",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(android::content::Context arg0, android::net::Uri arg1, JString arg2) const
	{
		callMethod<void>(
			"addTimedTextSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, JString arg3) const
	{
		callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;JJLjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	void MediaPlayer::attachAuxEffect(jint arg0) const
	{
		callMethod<void>(
			"attachAuxEffect",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::clearOnMediaTimeDiscontinuityListener() const
	{
		callMethod<void>(
			"clearOnMediaTimeDiscontinuityListener",
			"()V"
		);
	}
	void MediaPlayer::clearOnSubtitleDataListener() const
	{
		callMethod<void>(
			"clearOnSubtitleDataListener",
			"()V"
		);
	}
	android::media::VolumeShaper MediaPlayer::createVolumeShaper(android::media::VolumeShaper_Configuration arg0) const
	{
		return callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.object()
		);
	}
	void MediaPlayer::deselectTrack(jint arg0) const
	{
		callMethod<void>(
			"deselectTrack",
			"(I)V",
			arg0
		);
	}
	jint MediaPlayer::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint MediaPlayer::getCurrentPosition() const
	{
		return callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	android::media::MediaPlayer_DrmInfo MediaPlayer::getDrmInfo() const
	{
		return callObjectMethod(
			"getDrmInfo",
			"()Landroid/media/MediaPlayer$DrmInfo;"
		);
	}
	JString MediaPlayer::getDrmPropertyString(JString arg0) const
	{
		return callObjectMethod(
			"getDrmPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint MediaPlayer::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	android::media::MediaDrm_KeyRequest MediaPlayer::getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, JObject arg4) const
	{
		return callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/Map;)Landroid/media/MediaDrm$KeyRequest;",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jstring>(),
			arg3,
			arg4.object()
		);
	}
	android::os::PersistableBundle MediaPlayer::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::media::PlaybackParams MediaPlayer::getPlaybackParams() const
	{
		return callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	android::media::AudioDeviceInfo MediaPlayer::getPreferredDevice() const
	{
		return callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	android::media::AudioDeviceInfo MediaPlayer::getRoutedDevice() const
	{
		return callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint MediaPlayer::getSelectedTrack(jint arg0) const
	{
		return callMethod<jint>(
			"getSelectedTrack",
			"(I)I",
			arg0
		);
	}
	android::media::SyncParams MediaPlayer::getSyncParams() const
	{
		return callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	android::media::MediaTimestamp MediaPlayer::getTimestamp() const
	{
		return callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	JArray MediaPlayer::getTrackInfo() const
	{
		return callObjectMethod(
			"getTrackInfo",
			"()[Landroid/media/MediaPlayer$TrackInfo;"
		);
	}
	jint MediaPlayer::getVideoHeight() const
	{
		return callMethod<jint>(
			"getVideoHeight",
			"()I"
		);
	}
	jint MediaPlayer::getVideoWidth() const
	{
		return callMethod<jint>(
			"getVideoWidth",
			"()I"
		);
	}
	jboolean MediaPlayer::isLooping() const
	{
		return callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean MediaPlayer::isPlaying() const
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void MediaPlayer::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaPlayer::prepare() const
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaPlayer::prepareAsync() const
	{
		callMethod<void>(
			"prepareAsync",
			"()V"
		);
	}
	void MediaPlayer::prepareDrm(java::util::UUID arg0) const
	{
		callMethod<void>(
			"prepareDrm",
			"(Ljava/util/UUID;)V",
			arg0.object()
		);
	}
	JByteArray MediaPlayer::provideKeyResponse(JByteArray arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	void MediaPlayer::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaPlayer::releaseDrm() const
	{
		callMethod<void>(
			"releaseDrm",
			"()V"
		);
	}
	void MediaPlayer::removeOnRoutingChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaPlayer::restoreKeys(JByteArray arg0) const
	{
		callMethod<void>(
			"restoreKeys",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaPlayer::seekTo(jint arg0) const
	{
		callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::seekTo(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::selectTrack(jint arg0) const
	{
		callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setAudioSessionId(jint arg0) const
	{
		callMethod<void>(
			"setAudioSessionId",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAudioStreamType(jint arg0) const
	{
		callMethod<void>(
			"setAudioStreamType",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAuxEffectSendLevel(jfloat arg0) const
	{
		callMethod<void>(
			"setAuxEffectSendLevel",
			"(F)V",
			arg0
		);
	}
	void MediaPlayer::setDataSource(android::content::res::AssetFileDescriptor arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setDataSource(android::media::MediaDataSource arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setDataSource(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setDataSource(JString arg0) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaPlayer::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void MediaPlayer::setDisplay(JObject arg0) const
	{
		callMethod<void>(
			"setDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setDrmPropertyString(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setDrmPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void MediaPlayer::setLooping(jboolean arg0) const
	{
		callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void MediaPlayer::setNextMediaPlayer(android::media::MediaPlayer arg0) const
	{
		callMethod<void>(
			"setNextMediaPlayer",
			"(Landroid/media/MediaPlayer;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnBufferingUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnBufferingUpdateListener",
			"(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnCompletionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnDrmConfigHelper(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrmConfigHelper",
			"(Landroid/media/MediaPlayer$OnDrmConfigHelper;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::setOnPreparedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnSeekCompleteListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSeekCompleteListener",
			"(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaPlayer::setOnTimedMetaDataAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTimedMetaDataAvailableListener",
			"(Landroid/media/MediaPlayer$OnTimedMetaDataAvailableListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnTimedTextListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTimedTextListener",
			"(Landroid/media/MediaPlayer$OnTimedTextListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setOnVideoSizeChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnVideoSizeChangedListener",
			"(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	jboolean MediaPlayer::setPreferredDevice(android::media::AudioDeviceInfo arg0) const
	{
		return callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.object()
		);
	}
	void MediaPlayer::setScreenOnWhilePlaying(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenOnWhilePlaying",
			"(Z)V",
			arg0
		);
	}
	void MediaPlayer::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setSyncParams(android::media::SyncParams arg0) const
	{
		callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.object()
		);
	}
	void MediaPlayer::setVideoScalingMode(jint arg0) const
	{
		callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setVolume(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setVolume",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::setWakeMode(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setWakeMode",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void MediaPlayer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaPlayer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

