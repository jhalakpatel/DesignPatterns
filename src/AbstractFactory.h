#include "common.h"

//! UI Product
class UI
{
public:
    UI();
    virtual void getUIName() = 0;
};

class WinUI : public UI
{
public:
    WinUI();
    virtual void getUIName() override;
};

class MacUI : public UI
{
public:
    MacUI();
    virtual void getUIName() override;
};

class LinuxUI : public UI
{
public:
    LinuxUI();
    virtual void getUIName() override;
};

//! Library Product
class Libs
{
public:
    Libs();
    virtual void getLibsVersion() = 0;
};

class WinLibs : public Libs
{
public:
    WinLibs();
    virtual void getLibsVersion() override;
};

class MacLibs : public Libs
{
public:
    MacLibs();
    virtual void getLibsVersion() override;
};

class LinuxLibs : public Libs
{
public:
    LinuxLibs();
    virtual void getLibsVersion() override;
};

//! Factory
class OS
{
public:
    //! Constructor
    OS(const char* os);
    //! Factory method to create UI
    virtual std::unique_ptr<UI> createUI() = 0;
    //! Factory method to create Library
    virtual std::unique_ptr<Libs> createLibs() = 0;
private:
    std::string mOS;
};

//! Create Windows factory
class Windows : public OS
{
public:
    Windows(const char* os);
    virtual std::unique_ptr<UI> createUI() override;
    virtual std::unique_ptr<Libs> createLibs() override;
};

//! Create Linux factory
class Linux : public OS
{
public:
    Linux(const char* os);
    virtual std::unique_ptr<UI> createUI() override;
    virtual std::unique_ptr<Libs> createLibs() override;
};

//! Create Mac factory
class MacOS : public OS
{
public:
    MacOS(const char* os);
    virtual std::unique_ptr<UI> createUI() override;
    virtual std::unique_ptr<Libs> createLibs() override;
};