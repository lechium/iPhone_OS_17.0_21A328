//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MTLDevice, MTLLibrary, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EspressoMetalKernelsCache : NSObject
{
    id <MTLLibrary> m_ShaderLibrary;	// 8 = 0x8
    id <MTLLibrary> m_DefaultLibrary;	// 16 = 0x10
    id <MTLDevice> _device;	// 24 = 0x18
    _Bool isSupportingiOSGPUFamilyV2;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *dictionary_write_queue;	// 40 = 0x28
    NSMutableDictionary *auxLibraries;	// 48 = 0x30
    NSMutableDictionary *m_kernelCache_rw;	// 56 = 0x38
    struct mutex setup_mutex;	// 64 = 0x40
    NSString *_kernelPrefix;	// 128 = 0x80
    NSDictionary *_m_kernelCache;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x00000000008e43a0
- (void).cxx_destruct;	// IMP=0x00000000008e4327
@property(retain) NSDictionary *m_kernelCache; // @synthesize m_kernelCache=_m_kernelCache;
@property(retain, nonatomic) NSString *kernelPrefix; // @synthesize kernelPrefix=_kernelPrefix;
- (_Bool)shouldUseTexArray;	// IMP=0x00000000008e42dd
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;	// IMP=0x00000000008e30dd
- (id)kernelForFunction:(const char *)arg1;	// IMP=0x00000000008e30c6
- (void)addLibraryAtPath:(id)arg1;	// IMP=0x00000000008e2ed3
- (void)loadLibraryNamed:(id)arg1;	// IMP=0x00000000008e2cab
- (_Bool)wasSetup;	// IMP=0x00000000008e2c9d
- (void)lazySetup;	// IMP=0x00000000008e2434
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000008e22fe

@end

