#include "MagicLeapAudioFunctionLibrary.h"

UMagicLeapAudioFunctionLibrary::UMagicLeapAudioFunctionLibrary() {
}

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(const FMagicLeapAudioJackUnpluggedDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(const FMagicLeapAudioJackPluggedDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted) {
    return false;
}

bool UMagicLeapAudioFunctionLibrary::IsMicMuted() {
    return false;
}


