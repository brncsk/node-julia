#ifndef __nj_Values
#define __nj_Values

#include "Value.h"
#include "Types.h"

namespace nj
{

   template <typename P> class PValue
   {
      protected:

         P value;

      public:

         PValue(const P &value) {  this->value = value;  }
         const P &val() const {  return value;  }
   };

   class Null:public Primitive
   {
      public:

         Null(){}
         virtual const Type *type() const {  return Null_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException)  {  throw InvalidException("is null");  }
         virtual char toChar() const throw(InvalidException)  {  throw InvalidException("is null");  }
         virtual int64_t toInt() const throw(InvalidException)  {  throw InvalidException("is null");  }
         virtual uint64_t toUInt() const throw(InvalidException)  {  throw InvalidException("is null");  }
         virtual double toFloat() const throw(InvalidException) {  throw InvalidException("is null");  }
         virtual std::string toString() const throw(InvalidException) {  throw InvalidException("is null");  }
         virtual ~Null() throw(JuliaException) {}
   };

   class Boolean:public Primitive,public PValue<bool>
   {
      public:

         Boolean(bool b):PValue(b) {}
         virtual const Type *type() const {  return Boolean_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val();  }
         virtual char toChar() const throw(InvalidException) {  return val()?1:0;  }
         virtual int64_t toInt() const throw(InvalidException) {  return val()?1:0;  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val()?1:0;  }
         virtual double toFloat() const throw(InvalidException) {  return val()?1:0;  }
         virtual std::string toString() const throw(InvalidException) {  return val()?"true":"false";  }
         virtual ~Boolean() throw(JuliaException) {}
   };

   class Int64:public Primitive,public PValue<int64_t>
   {
      public:

         Int64(int64_t i):PValue(i) {}
         virtual const Type *type() const {  return Int64_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Int64() throw(JuliaException) {}
   }; 

   class UInt64:public Primitive,public PValue<uint64_t>
   {
      public:

         UInt64(uint64_t i):PValue(i) {}
         virtual const Type *type() const {  return UInt64_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~UInt64() throw(JuliaException) {}
   }; 

   class Int32:public Primitive,public PValue<int>
   {
      public:

         Int32(int i):PValue(i) {}
         virtual const Type *type() const {  return Int32_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Int32() throw(JuliaException) {}
   }; 

   class UInt32:public Primitive,public PValue<unsigned int>
   {
      public:

         UInt32(unsigned int i):PValue(i) {}
         virtual const Type *type() const {  return UInt32_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~UInt32() throw(JuliaException) {}
   }; 

   class Int16:public Primitive,public PValue<short>
   {
      public:

         Int16(short s):PValue(s) {}
         virtual const Type *type() const {  return Int16_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Int16() throw(JuliaException) {}
   }; 

   class UInt16:public Primitive,public PValue<unsigned short>
   {
      public:

         UInt16(unsigned int s):PValue(s) {}
         virtual const Type *type() const {  return UInt16_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~UInt16() throw(JuliaException) {}
   }; 

   class Int8:public Primitive,public PValue<char>
   {
      public:

         Int8(char c):PValue(c) {}
         virtual const Type *type() const {  return Int8_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Int8() throw(JuliaException) {}
   }; 

   class UInt8:public Primitive,public PValue<unsigned char>
   {
      public:

         UInt8(unsigned int c):PValue(c) {}
         virtual const Type *type() const {  return UInt8_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~UInt8() throw(JuliaException) {}
   }; 

   class Float64:public Primitive,public PValue<double>
   {
      public:

         Float64(double d):PValue(d) {}
         virtual const Type *type() const {  return Float64_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException)  {  throw InvalidException("is float");  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Float64() throw(JuliaException) {}
   };    

   class Float32:public Primitive,public PValue<float>
   {
      public:

         Float32(float f):PValue(f) {}
         virtual const Type *type() const {  return Float32_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException)  {  throw InvalidException("is float");  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Float32() throw(JuliaException) {}
   };    

   class ASCIIString:public Primitive,public PValue<std::string>
   {
      public:

         ASCIIString(const std::string &s):PValue(s) {}
         virtual const Type *type() const {  return ASCIIString_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException);
         virtual char toChar() const throw(InvalidException);
         virtual int64_t toInt() const throw(InvalidException);
         virtual uint64_t toUInt() const throw(InvalidException);
         virtual double toFloat() const throw(InvalidException);
         virtual std::string toString() const throw(InvalidException) {  return val();  }
         virtual ~ASCIIString() throw(JuliaException) {}
   };

   class UTF8String:public Primitive,public PValue<std::string>
   {
      public:

         UTF8String(const std::string &s):PValue(s) {}
         virtual const Type *type() const {  return UTF8String_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException);
         virtual char toChar() const throw(InvalidException);
         virtual int64_t toInt() const throw(InvalidException);
         virtual uint64_t toUInt() const throw(InvalidException);
         virtual double toFloat() const throw(InvalidException);
         virtual std::string toString() const throw(InvalidException) {  return val();  }
         virtual ~UTF8String() throw(JuliaException) {}
   };

   class Date:public Primitive,public PValue<double>
   {
      public:

         Date(double d):PValue(d) {}
         virtual const Type *type() const {  return Date_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != 0;  }
         virtual char toChar() const throw(InvalidException) {  return val();  }
         virtual int64_t toInt() const throw(InvalidException) {  return val();  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return val();  }
         virtual double toFloat() const throw(InvalidException) {  return val();  }
         virtual std::string toString() const throw(InvalidException) {  return std::to_string(val());  }
         virtual ~Date() throw(JuliaException) {}
   };

   class Regex:public Primitive,public PValue<std::string>
   {
      public:

         Regex(const std::string &s):PValue(s) {}
         virtual const Type *type() const {  return Regex_t::instance();  }
         virtual bool toBoolean() const throw(InvalidException) {  return val() != "";  }
         virtual char toChar() const throw(InvalidException) {  return 0;  }
         virtual int64_t toInt() const throw(InvalidException) {  return 0;  }
         virtual uint64_t toUInt() const throw(InvalidException) {  return 0;  }
         virtual double toFloat() const throw(InvalidException) {  return 0.0;  }
         virtual std::string toString() const throw(InvalidException) {  return val();  }
         virtual ~Regex() throw(JuliaException) {}
   };
};

#endif
