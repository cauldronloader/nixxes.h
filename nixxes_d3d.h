#ifndef _NIXXES_D3D_H_
#define _NIXXES_D3D_H_

#include "nixxes_d3d_driver.h"

struct ID3D12CommandQueue;
struct ID3D12Device;
struct ID3D12Resource;
struct NxD3D12Driver;

namespace nx {
    class INxD3D {
    public:
        static INxD3D *Instance();

        // @formatter:off
        virtual ~INxD3D();
        virtual void Initialize();
        virtual void INxD3D_Unk10();
        virtual void INxD3D_Unk18();
        virtual void INxD3D_Unk20();
        virtual void INxD3D_Unk28();
        virtual void INxD3D_Unk30();
        virtual void INxD3D_Unk38();
        virtual void INxD3D_Unk40();
        virtual void INxD3D_Unk48();
        virtual void Present();
        virtual void INxD3D_Unk58();
        virtual void INxD3D_Unk60();
        virtual void INxD3D_Unk68();
        virtual void INxD3D_Unk70();
        virtual void INxD3D_Unk78();
        virtual void INxD3D_Unk80();
        virtual void INxD3D_Unk88();
        virtual void INxD3D_Unk90();
        virtual void INxD3D_Unk98();
        virtual void INxD3D_UnkA0();
        virtual void INxD3D_UnkA8();
        virtual void INxD3D_UnkB0();
        virtual void INxD3D_UnkB8();
        virtual void INxD3D_UnkC0();
        virtual void SetCanCreateDx11_1_Device();
        virtual void GetBackBufferCount();
        virtual void INxD3D_UnkD8();
        virtual ID3D12Device *GetDevice();
        virtual void INxD3D_UnkE8();
        virtual ID3D12Resource* GetBackBuffer(unsigned int index);
        virtual void INxD3D_UnkF8();
        virtual void INxD3D_Unk100();
        virtual ID3D12CommandQueue *GetCommandQueue(unsigned int index);
        virtual void INxD3D_Unk110();
        virtual void INxD3D_Unk118();
        virtual void INxD3D_Unk120();
        virtual void INxD3D_Unk128();
        virtual void INxD3D_Unk130();
        virtual void INxD3D_Unk138();
        virtual void INxD3D_Unk140();
        virtual void INxD3D_Unk148();
        virtual void INxD3D_Unk150();
        virtual void INxD3D_Unk158();
        virtual void INxD3D_Unk160();
        virtual void INxD3D_Unk168();
        virtual void INxD3D_Unk170();
        virtual void INxD3D_Unk178();
        virtual void INxD3D_Unk180();
        virtual void CanCreateDx11_1_Device();
        virtual void INxD3D_Unk190();
        virtual void INxD3D_Unk198();
        virtual void INxD3D_Unk1A0();
        virtual void INxD3D_Unk1A8();
        virtual void INxD3D_Unk1B0();
        // @formatter:on
    };

    class NxD3DImpl : public INxD3D {
    public:
        unsigned char Unk8[0x178];
        NxD3D12Driver *Driver;
        unsigned char Unk188[0x78];
    };
}

#endif // _NIXXES_D3D_H_
