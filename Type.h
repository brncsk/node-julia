#ifndef __nj_Type
#define __nj_Type

#include <map>
#include "Exception.h"

namespace nj
{
   class Type
   {
      protected:

         int id;
   
      public:
 
         template<class T> static Type *instance()
         {
            static Type *i = 0;

            if(!i) i = new T();
            return i;
         }

         Type(int id)
         {  
            this->id = id;
         }

         virtual int getId() const {  return id;  }
   };

   const int array_type = 0;

   class Array_t:public Type
   {
      protected:
 
         static std::map<Type*,Array_t*> atypes;

         Type *element_type;

      public:

         static Type *instance(Type *elementType)
         {
            if(atypes.find(elementType) == atypes.end())
            {
               atypes[elementType] = new Array_t(elementType);
            }   
            return atypes[elementType];
         }

         Array_t(Type *elementType):Type(array_type) {  element_type = elementType;  }
 
         Type const *getElementType() const {  return element_type;  }
   };
};

#endif
