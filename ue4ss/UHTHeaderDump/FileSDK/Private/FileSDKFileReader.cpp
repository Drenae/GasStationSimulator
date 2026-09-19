#include "FileSDKFileReader.h"

UFileSDKFileReader::UFileSDKFileReader() {
    this->BinaryMode = false;
}

bool UFileSDKFileReader::SeekFilePosition(EFileSDKFileAnchor Anchor, int32 Offset) {
    return false;
}

int32 UFileSDKFileReader::ReadStringToEnd(FString& Content) {
    return 0;
}

int32 UFileSDKFileReader::ReadString(int32 Num, FString& Content) {
    return 0;
}

int32 UFileSDKFileReader::ReadBytesToEnd(TArray<uint8>& Content) {
    return 0;
}

int32 UFileSDKFileReader::ReadBytes(int32 Num, TArray<uint8>& Content) {
    return 0;
}

bool UFileSDKFileReader::IsGood() {
    return false;
}

void UFileSDKFileReader::Close() {
}


