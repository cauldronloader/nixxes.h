#ifndef _NIXXES_LOG_H_
#define _NIXXES_LOG_H_

namespace nx {
    class INxLog {
    public:
        static INxLog *Instance();

        // @formatter:off
        virtual ~INxLog();
        virtual void Startup();
        virtual void OpenLog();
        virtual void AllocConsole();
        virtual void CloseConsole();
        virtual const wchar_t *Unk05();
        virtual const wchar_t *GetLogPath();
        virtual void PrintA(const char *);
        virtual void PrintLnA(const char *);
        virtual void LogA(const char *category, const char *fmt, ...);
        virtual void LogW(const wchar_t *category, const wchar_t *fmt, ...);
        virtual void LogMemoryInfo(const char* category);
        virtual void LogPlatformInfo(const char* category);
        virtual const wchar_t *MaskUsername(const wchar_t *input);
        // @formatter:on
    };

    class NxLogImpl : public INxLog {
    public:
        bool Initialized;
        void *FileHandle;
        int Unk18;
        int Unk1C;
        wchar_t Unk20[0x100000 / sizeof(wchar_t)];
        wchar_t Unk10020[0x100 / sizeof(wchar_t)];
        wchar_t Unk10120[0x100 / sizeof(wchar_t)];
        void * /* HANDLE */ ConsoleHandle;
        unsigned char /* CRITICAL_SECTION */ Lock[0x28];
    };
}

#endif // _NIXXES_LOG_H_
