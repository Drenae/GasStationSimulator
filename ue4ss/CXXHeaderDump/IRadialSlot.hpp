#ifndef UE4SS_SDK_IRadialSlot_HPP
#define UE4SS_SDK_IRadialSlot_HPP

class IIRadialSlot_C : public IInterface
{

    void CanBeHighlighted(bool& CanBeHighlighted);
    void OnUnhighlight();
    void OnHighlight();
}; // Size: 0x28

#endif
