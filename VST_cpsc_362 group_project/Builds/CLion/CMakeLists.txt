# Automatically generated CMakeLists, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required (VERSION 3.4.1)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Debug"  CACHE STRING "Choose the type of build." FORCE)
endif (NOT CMAKE_BUILD_TYPE)

###############################################################################
# Xcode (MacOSX)
###############################################################################

if (APPLE)

project ("VST_cpsc_362 group_project" C CXX)

add_executable (APP
    "../../Source/MainComponent.h"
    "../../Source/MainComponent.cpp"
    "../../Source/Main.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../Desktop/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../Desktop/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_android_Video.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../../Desktop/JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../../Desktop/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.mm"
    "../../JuceLibraryCode/include_juce_audio_devices.mm"
    "../../JuceLibraryCode/include_juce_audio_formats.mm"
    "../../JuceLibraryCode/include_juce_audio_processors.mm"
    "../../JuceLibraryCode/include_juce_audio_utils.mm"
    "../../JuceLibraryCode/include_juce_core.mm"
    "../../JuceLibraryCode/include_juce_cryptography.mm"
    "../../JuceLibraryCode/include_juce_data_structures.mm"
    "../../JuceLibraryCode/include_juce_events.mm"
    "../../JuceLibraryCode/include_juce_graphics.mm"
    "../../JuceLibraryCode/include_juce_gui_basics.mm"
    "../../JuceLibraryCode/include_juce_gui_extra.mm"
    "../../JuceLibraryCode/include_juce_opengl.mm"
    "../../JuceLibraryCode/include_juce_video.mm"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_android_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "/Users/robertrivas/Desktop/JUCE/modules"
)

target_compile_definitions (APP PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
    "JucePlugin_Build_Unity=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O0
    -stdlib=libc++
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/robertrivas/Documents/github/VST_Project_cpsc362/VST_cpsc_362 group_project/Builds/CLion/Debug-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.VST_cpsc_362group_project
    XCODE_ATTRIBUTE_PRODUCT_NAME "VST_cpsc_362 group_project"
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Users/robertrivas/Documents/github/VST_Project_cpsc362/VST_cpsc_362 group_project/Builds/CLion/Debug-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "VST_cpsc_362 group_project"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "/Users/robertrivas/Desktop/JUCE/modules"
)

target_compile_definitions (APP PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
    "JucePlugin_Build_Unity=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
    -stdlib=libc++
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/robertrivas/Documents/github/VST_Project_cpsc362/VST_cpsc_362 group_project/Builds/CLion/Release-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.VST_cpsc_362group_project
    XCODE_ATTRIBUTE_PRODUCT_NAME "VST_cpsc_362 group_project"
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Users/robertrivas/Documents/github/VST_Project_cpsc362/VST_cpsc_362 group_project/Builds/CLion/Release-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "VST_cpsc_362 group_project"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

###############################################################################
# Linux Makefile
###############################################################################

if (UNIX AND NOT APPLE)

project ("VST_cpsc_362 group_project" C CXX)

find_package (PkgConfig REQUIRED)
pkg_search_module (ALSA REQUIRED alsa)
pkg_search_module (FREETYPE2 REQUIRED freetype2)
pkg_search_module (X11 REQUIRED x11)
pkg_search_module (XEXT REQUIRED xext)
pkg_search_module (XINERAMA REQUIRED xinerama)
pkg_search_module (WEBKIT2GTK-4.0 REQUIRED webkit2gtk-4.0)
pkg_search_module (GTK+-X11-3.0 REQUIRED gtk+-x11-3.0)
pkg_search_module (LIBCURL REQUIRED libcurl)

add_executable (APP
    "../../Source/MainComponent.h"
    "../../Source/MainComponent.cpp"
    "../../Source/Main.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "../../../../../../JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../../JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_android_Video.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../../JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../../JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../../JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../../JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../../JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../JuceLibraryCode/include_juce_core.cpp"
    "../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../JuceLibraryCode/include_juce_events.cpp"
    "../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../JuceLibraryCode/include_juce_video.cpp"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_android_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

set_target_properties (APP PROPERTIES SUFFIX "")

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

include_directories (
    "../../JuceLibraryCode"
    "~/JUCE/modules"
    ${ALSA_INCLUDE_DIRS}
    ${FREETYPE2_INCLUDE_DIRS}
    ${X11_INCLUDE_DIRS}
    ${XEXT_INCLUDE_DIRS}
    ${XINERAMA_INCLUDE_DIRS}
    ${WEBKIT2GTK-4.0_INCLUDE_DIRS}
    ${GTK+-X11-3.0_INCLUDE_DIRS}
    ${LIBCURL_INCLUDE_DIRS}
)

find_library (GL GL
)

find_library (DL dl
)

find_library (PTHREAD pthread
)

find_library (RT rt
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (APP PRIVATE
    LINUX=1
    DEBUG=1
    _DEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
    JucePlugin_Build_Unity=0
)

target_link_libraries (APP PRIVATE
    -march=native
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
    ${LIBCURL_LIBRARIES}
)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -pthread -g -ggdb -O0")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_C_FLAGS} ")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

include_directories (
    "../../JuceLibraryCode"
    "~/JUCE/modules"
    ${ALSA_INCLUDE_DIRS}
    ${FREETYPE2_INCLUDE_DIRS}
    ${X11_INCLUDE_DIRS}
    ${XEXT_INCLUDE_DIRS}
    ${XINERAMA_INCLUDE_DIRS}
    ${WEBKIT2GTK-4.0_INCLUDE_DIRS}
    ${GTK+-X11-3.0_INCLUDE_DIRS}
    ${LIBCURL_INCLUDE_DIRS}
)

find_library (GL GL
)

find_library (DL dl
)

find_library (PTHREAD pthread
)

find_library (RT rt
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (APP PRIVATE
    LINUX=1
    NDEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
    JucePlugin_Build_Unity=0
)

target_link_libraries (APP PRIVATE
    -march=native
    -fvisibility=hidden
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
    ${LIBCURL_LIBRARIES}
)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -pthread -O3")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_C_FLAGS} ")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

###############################################################################
# Code::Blocks (Windows)
###############################################################################

if (WIN32)

project ("VST_cpsc_362 group_project" C CXX)

add_executable (APP WIN32
    "../../Source/MainComponent.h"
    "../../Source/MainComponent.cpp"
    "../../Source/Main.cpp"
    "C:/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "C:/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "C:/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "C:/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "C:/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "C:/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "C:/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "C:/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "C:/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "C:/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "C:/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "C:/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "C:/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "C:/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "C:/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "C:/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "C:/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "C:/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "C:/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "C:/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "C:/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "C:/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "C:/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "C:/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "C:/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "C:/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "C:/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "C:/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "C:/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "C:/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "C:/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "C:/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "C:/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "C:/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "C:/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "C:/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "C:/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "C:/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "C:/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "C:/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "C:/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "C:/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "C:/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "C:/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "C:/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "C:/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "C:/JUCE/modules/juce_core/containers/juce_Array.h"
    "C:/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "C:/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "C:/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "C:/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "C:/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "C:/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "C:/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "C:/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "C:/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "C:/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "C:/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "C:/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "C:/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "C:/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "C:/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "C:/JUCE/modules/juce_core/containers/juce_Variant.h"
    "C:/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "C:/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "C:/JUCE/modules/juce_core/files/juce_File.cpp"
    "C:/JUCE/modules/juce_core/files/juce_File.h"
    "C:/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "C:/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "C:/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "C:/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "C:/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "C:/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "C:/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "C:/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "C:/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "C:/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "C:/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "C:/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "C:/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "C:/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "C:/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "C:/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "C:/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "C:/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "C:/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "C:/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "C:/JUCE/modules/juce_core/logging/juce_Logger.h"
    "C:/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "C:/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "C:/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "C:/JUCE/modules/juce_core/maths/juce_Expression.h"
    "C:/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "C:/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "C:/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "C:/JUCE/modules/juce_core/maths/juce_Random.h"
    "C:/JUCE/modules/juce_core/maths/juce_Range.h"
    "C:/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "C:/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "C:/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "C:/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "C:/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "C:/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "C:/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "C:/JUCE/modules/juce_core/memory/juce_Memory.h"
    "C:/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "C:/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "C:/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "C:/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "C:/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "C:/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "C:/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "C:/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "C:/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "C:/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "C:/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "C:/JUCE/modules/juce_core/misc/juce_Result.h"
    "C:/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "C:/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "C:/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "C:/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "C:/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "C:/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "C:/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "C:/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "C:/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "C:/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "C:/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "C:/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "C:/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "C:/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "C:/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "C:/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "C:/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "C:/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "C:/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "C:/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "C:/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "C:/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "C:/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "C:/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "C:/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "C:/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "C:/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "C:/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "C:/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "C:/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "C:/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "C:/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "C:/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "C:/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "C:/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "C:/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "C:/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "C:/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "C:/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "C:/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "C:/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "C:/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "C:/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "C:/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "C:/JUCE/modules/juce_core/network/juce_Socket.h"
    "C:/JUCE/modules/juce_core/network/juce_URL.cpp"
    "C:/JUCE/modules/juce_core/network/juce_URL.h"
    "C:/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "C:/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "C:/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "C:/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "C:/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "C:/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "C:/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "C:/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "C:/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "C:/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "C:/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "C:/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "C:/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "C:/JUCE/modules/juce_core/text/juce_Base64.h"
    "C:/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "C:/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "C:/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "C:/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "C:/JUCE/modules/juce_core/text/juce_Identifier.h"
    "C:/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "C:/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "C:/JUCE/modules/juce_core/text/juce_NewLine.h"
    "C:/JUCE/modules/juce_core/text/juce_String.cpp"
    "C:/JUCE/modules/juce_core/text/juce_String.h"
    "C:/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "C:/JUCE/modules/juce_core/text/juce_StringArray.h"
    "C:/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "C:/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "C:/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "C:/JUCE/modules/juce_core/text/juce_StringPool.h"
    "C:/JUCE/modules/juce_core/text/juce_StringRef.h"
    "C:/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "C:/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "C:/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "C:/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "C:/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "C:/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "C:/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_Process.h"
    "C:/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "C:/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_Thread.h"
    "C:/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "C:/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "C:/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "C:/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "C:/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "C:/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "C:/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "C:/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "C:/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "C:/JUCE/modules/juce_core/time/juce_Time.cpp"
    "C:/JUCE/modules/juce_core/time/juce_Time.h"
    "C:/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "C:/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "C:/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "C:/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "C:/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "C:/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "C:/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "C:/JUCE/modules/juce_core/zip/zlib/compress.c"
    "C:/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "C:/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "C:/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "C:/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "C:/JUCE/modules/juce_core/zip/zlib/infback.c"
    "C:/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "C:/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "C:/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "C:/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "C:/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "C:/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "C:/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "C:/JUCE/modules/juce_core/zip/zlib/trees.c"
    "C:/JUCE/modules/juce_core/zip/zlib/trees.h"
    "C:/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "C:/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "C:/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "C:/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "C:/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "C:/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "C:/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "C:/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "C:/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "C:/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "C:/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "C:/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "C:/JUCE/modules/juce_core/juce_core.cpp"
    "C:/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "C:/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "C:/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "C:/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "C:/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "C:/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "C:/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "C:/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "C:/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "C:/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "C:/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "C:/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "C:/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "C:/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "C:/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "C:/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "C:/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "C:/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "C:/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "C:/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "C:/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "C:/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "C:/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "C:/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "C:/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "C:/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "C:/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "C:/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "C:/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "C:/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "C:/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "C:/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "C:/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "C:/JUCE/modules/juce_events/messages/juce_Message.h"
    "C:/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "C:/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "C:/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "C:/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "C:/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "C:/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "C:/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "C:/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "C:/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "C:/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "C:/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "C:/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "C:/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "C:/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "C:/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "C:/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "C:/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "C:/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "C:/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "C:/JUCE/modules/juce_events/timers/juce_Timer.h"
    "C:/JUCE/modules/juce_events/juce_events.cpp"
    "C:/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h"
    "C:/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "C:/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "C:/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "C:/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "C:/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "C:/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "C:/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "C:/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "C:/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "C:/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "C:/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "C:/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "C:/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "C:/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "C:/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "C:/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "C:/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "C:/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "C:/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "C:/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "C:/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "C:/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "C:/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "C:/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "C:/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "C:/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "C:/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "C:/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "C:/JUCE/modules/juce_graphics/images/juce_Image.h"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "C:/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "C:/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "C:/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "C:/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "C:/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "C:/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "C:/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "C:/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "C:/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "C:/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h"
    "C:/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "C:/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "C:/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "C:/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "C:/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "C:/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "C:/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "C:/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "C:/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "C:/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "C:/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "C:/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "C:/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "C:/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "C:/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "C:/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "C:/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "C:/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "C:/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "C:/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "C:/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "C:/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "C:/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "C:/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "C:/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "C:/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "C:/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "C:/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "C:/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "C:/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "C:/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "C:/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "C:/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "C:/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "C:/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "C:/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "C:/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "C:/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "C:/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "C:/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "C:/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "C:/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "C:/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "C:/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "C:/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "C:/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "C:/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "C:/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "C:/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "C:/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h"
    "C:/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "C:/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "C:/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "C:/JUCE/modules/juce_video/native/juce_android_Video.h"
    "C:/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "C:/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "C:/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "C:/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "C:/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "C:/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "C:/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "C:/JUCE/modules/juce_video/juce_video.cpp"
    "C:/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../JuceLibraryCode/include_juce_core.cpp"
    "../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../JuceLibraryCode/include_juce_events.cpp"
    "../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../JuceLibraryCode/include_juce_video.cpp"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_android_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("C:/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../Desktop/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

set_target_properties (APP PROPERTIES PREFIX "")
set_target_properties (APP PROPERTIES SUFFIX ".exe")

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

include_directories (
    "."
    "../../JuceLibraryCode"
    "C:/JUCE/modules"
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (APP PRIVATE
    __MINGW__=1
    __MINGW_EXTENSION
    DEBUG=1
    _DEBUG=1
    JUCER_CODEBLOCKS_WINDOWS_8F9AFD66=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
    JucePlugin_Build_Unity=0
)

target_compile_options (APP PRIVATE
    "-m64"
    "-O0"
    "-mstackrealign"
    "-g"
)

target_link_libraries (APP PRIVATE
    -m64
    -lgdi32
    -luser32
    -lkernel32
    -lcomctl32
    -lcomdlg32
    -limm32
    -lole32
    -loleaut32
    -lopengl32
    -lrpcrt4
    -lshlwapi
    -luuid
    -lversion
    -lwininet
    -lwinmm
    -lws2_32
    -lwsock32
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-strict-aliasing -Wno-strict-overflow")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

include_directories (
    "."
    "../../JuceLibraryCode"
    "C:/JUCE/modules"
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "VST_cpsc_362 group_project"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (APP PRIVATE
    __MINGW__=1
    __MINGW_EXTENSION
    NDEBUG=1
    JUCER_CODEBLOCKS_WINDOWS_8F9AFD66=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
    JucePlugin_Build_Unity=0
)

target_compile_options (APP PRIVATE
    "-m64"
    "-O3"
    "-mstackrealign"
)

target_link_libraries (APP PRIVATE
    -m64
    -s
    -lgdi32
    -luser32
    -lkernel32
    -lcomctl32
    -lcomdlg32
    -limm32
    -lole32
    -loleaut32
    -lopengl32
    -lrpcrt4
    -lshlwapi
    -luuid
    -lversion
    -lwininet
    -lwinmm
    -lws2_32
    -lwsock32
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-strict-aliasing -Wno-strict-overflow")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

