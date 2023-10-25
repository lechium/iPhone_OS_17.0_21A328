//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DAAPParserDelegate;

struct Element;

struct ML3DAAPDeleteImportItem;

struct ML3DAAPImportItem;

struct ML3ImportItem;

struct ML3VirtualTableDataSource;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct shared_ptr<DAAPParserDelegate> {
    struct DAAPParserDelegate *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ML3CPP::Element> {
    struct Element *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3DAAPDeleteImportItem> {
    struct ML3DAAPDeleteImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3DAAPImportItem> {
    struct ML3DAAPImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long long, NSString *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>> {
    struct __hash_table<std::__hash_value_type<long long, NSString *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, NSString *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>, std::allocator<std::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__hash_node<long long, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::unordered_set<std::string>*, std::allocator<std::unordered_set<std::string>>> {
        void *_field1;
    } _field3;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Template types
typedef struct shared_ptr<ML3CPP::Element> {
    struct Element *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_37fa1f3d;

typedef struct shared_ptr<ML3DAAPDeleteImportItem> {
    struct ML3DAAPDeleteImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_55dea43e;

typedef struct shared_ptr<ML3DAAPImportItem> {
    struct ML3DAAPImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_9dbb0ac9;

typedef struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_de333b55;

typedef struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c3e79333;

typedef struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_1ee95920;

typedef struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::unordered_set<std::string>*, std::allocator<std::unordered_set<std::string>>> {
        void *_field1;
    } _field3;
} vector_c589d274;
