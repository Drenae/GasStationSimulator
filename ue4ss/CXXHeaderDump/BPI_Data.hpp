#ifndef UE4SS_SDK_BPI_Data_HPP
#define UE4SS_SDK_BPI_Data_HPP

class IBPI_Data_C : public IInterface
{

    void TabToOpen(int32 TabIndex, class UUI_TabButton_C* CommonButtonPressed);
    void SendPhotoData(FS_PhotosData PhotoData);
}; // Size: 0x28

#endif
