#ifndef _NIXXES_LOG_H_
#define _NIXXES_LOG_H_

namespace nx {
    class INxLog {
    public:
        static INxLog *Instance();

        // @formatter:off
        virtual ~INxLog() = 0;
        virtual void Startup() = 0;
        virtual void OpenLog() = 0;
        virtual void AllocConsole() = 0;
        virtual void CloseConsole() = 0;
        virtual const wchar_t *Unk05() = 0;
        virtual const wchar_t *GetLogPath() = 0;
        virtual void PrintA(const char *) = 0;
        virtual void PrintLnA(const char *) = 0;
        virtual void LogA(const char *category, const char *fmt, ...) = 0;
        virtual void LogW(const wchar_t *category, const wchar_t *fmt, ...) = 0;
        virtual void LogMemoryInfo(const char* category) = 0;
        virtual void LogPlatformInfo(const char* category) = 0;
        virtual const wchar_t *MaskUsername(const wchar_t *input) = 0;
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
