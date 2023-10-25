//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioObjectPropertyAddress {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioServerPlugInClientInfo {
    unsigned int _field1;
    int _field2;
    unsigned char _field3;
    struct __CFString *_field4;
};

struct AudioServerPlugInHostInterface {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct DSP_Host_IOProcessor {
    CDUnknownFunctionPointerType *_field1;
};

struct DictionaryRef {
    struct ObjectRef<const __CFDictionary *> mObject;
};

struct Driver_Property_Identity {
    unsigned int _field1;
    int _field2;
    struct AudioObjectPropertyAddress _field3;
};

struct Host_Interface;

struct ObjectRef<const __CFDictionary *> {
    struct __CFDictionary *mCFObject;
};

struct ObjectRef<const __CFString *> {
    struct __CFString *_field1;
};

struct ObjectRef<const void *> {
    void *_field1;
};

struct PropertyListRef {
    struct ObjectRef<const void *> _field1;
};

struct Property_Type_Info;

struct StringRef {
    struct ObjectRef<const __CFString *> _field1;
};

struct __CFString;

struct __shared_weak_count;

struct dict {
    struct object _field1;
};

struct function<void (const AudioObjectPropertyAddress &)> {
    struct __value_func<void (const AudioObjectPropertyAddress &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)> {
    struct __value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct object {
    id _field1;
};

struct shared_ptr<Host_Interface> {
    struct Host_Interface *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Property_Type_Info> {
    struct Property_Type_Info *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<caulk::mach::unfair_lock> {
    struct unfair_lock *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::map<unsigned long long, void *>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> {
        id _field1;
        unsigned int _field2;
        unsigned int _field3;
    } _field1;
};

struct type {
    unsigned char __lx[32];
};

struct unfair_lock;

#pragma mark Typedef'd Structures

// Template types
typedef struct function<void (const AudioObjectPropertyAddress &)> {
    struct __value_func<void (const AudioObjectPropertyAddress &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_30e455e6;

typedef struct function<void (const DSP_Host_Types::MutationRequestConfiguration &)> {
    struct __value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_dd4a833b;

typedef struct shared_ptr<Host_Interface> {
    struct Host_Interface *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_515a953c;

typedef struct shared_ptr<Property_Type_Info> {
    struct Property_Type_Info *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2969c241;

typedef struct shared_ptr<caulk::mach::unfair_lock> {
    struct unfair_lock *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_53c12af5;

typedef struct shared_ptr<std::map<unsigned long long, void *>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e6fe39fb;

typedef struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_981505df;

typedef struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_cae1ecd9;

typedef struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> {
        id _field1;
        unsigned int _field2;
        unsigned int _field3;
    } _field1;
} tuple_d0bf0a06;
