#pragma once

class TData
{
public:
    virtual TData* Copy() = 0; // �������� �����
    ~TData() {} 
    virtual int operator==(const TData& data) const;
    virtual int operator<(const TData& data) const;
    virtual int operator>(const TData& data) const;
    virtual int operator+(const TData& data) const;
};
