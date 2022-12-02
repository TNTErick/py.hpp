#pragma once
#ifndef __PY_NONE_
#define __PY_NONE_


namespace py
{
    class None_t
    {
    public:
        static constexpr None_t none_instance;
        operator bool(){return false;}
    protected:    
    private:
        None_t(){}
        ~None_t(){}

        None_t(const None_t&) = delete;
        operator=(const None_t&) = delete;
    };

    None_t None_t::none_instance;

    constexpr None_t& None = None_t::none_instance;
}


#endif//__PY_NONE_