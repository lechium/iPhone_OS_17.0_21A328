//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_set<sqlite3_stmt *, std::hash<sqlite3_stmt *>, std::equal_to<sqlite3_stmt *>, std::allocator<sqlite3_stmt *>> {
    struct __hash_table<sqlite3_stmt *, std::hash<sqlite3_stmt *>, std::equal_to<sqlite3_stmt *>, std::allocator<sqlite3_stmt *>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*>, std::allocator<std::__hash_node<sqlite3_stmt *, void *>>> {
            struct __hash_node_base<std::__hash_node<sqlite3_stmt *, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<sqlite3_stmt *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<sqlite3_stmt *>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Ambiguous groups
typedef struct {
    unsigned int domain:1;
    unsigned int flags:1;
    unsigned int state:1;
} CDStruct_06c35b4c;

typedef struct {
    unsigned int flags:1;
    unsigned int domain:1;
    unsigned int state:1;
} CDStruct_214543d2;

typedef struct {
    unsigned int attachmentType:1;
    unsigned int contextType:1;
} CDStruct_d10bec72;

typedef struct {
    unsigned int attachmentType:1;
} CDStruct_d173f725;

typedef struct {
    unsigned int roleType:1;
} CDStruct_881fb62f;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

