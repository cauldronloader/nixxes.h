#ifndef _NIXXES_DXGI_H_
#define _NIXXES_DXGI_H_

struct IDXGISwapChain3;
struct IDXGIFactory1;

namespace nx {
    class INxDXGI {
    public:
        static INxDXGI *Instance();

        // @formatter:off
        virtual ~INxDXGI();
        virtual void Initialize();
        virtual void INxDXGI_Unk10();
        virtual void DestroySwapChain();
        virtual void ResizeSwapChain();
        virtual bool IsSwapChainFullScreen();
        virtual void SetSwapChainFullScreen();
        virtual void INxDXGI_Unk38();
        virtual void SetColorSpace();
        virtual void INxDXGI_Unk48();
        virtual bool Present(void *);
        virtual void INxDXGI_Unk58();
        virtual void INxDXGI_Unk60();
        virtual void INxDXGI_Unk68();
        virtual void INxDXGI_Unk70();
        virtual void INxDXGI_Unk78();
        virtual void INxDXGI_Unk80();
        virtual void GetDXGIFactory1();
        virtual void INxDXGI_Unk90();
        virtual void INxDXGI_Unk98();
        virtual void INxDXGI_UnkA0();
        virtual void INxDXGI_UnkA8();
        virtual void INxDXGI_UnkB0();
        virtual void INxDXGI_UnkB8();
        virtual void INxDXGI_UnkC0();
        // @formatter:on
    };

    class NxDXGIImpl : public INxDXGI {
    public:
        bool bInitialized;
        void *pUnk8;
        void *hDxgiModule /* HMODULE */;
        IDXGIFactory1 *mDxgiFactoryA;
        IDXGIFactory1 *mDxgiFactoryB;
        IDXGISwapChain3 *SwapChain;
        unsigned int NumBuffers;
        unsigned char Unk38[0xB4];
    };
}

#endif // _NIXXES_DXGI_H_