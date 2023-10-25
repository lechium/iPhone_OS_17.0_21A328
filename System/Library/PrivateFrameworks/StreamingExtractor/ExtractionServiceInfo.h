//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface ExtractionServiceInfo : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSString *_pluginBundlePath;	// 16 = 0x10
    unsigned long long _availableExtractionServiceMemory;	// 24 = 0x18
    struct _opaque_pthread_cond_t _availableExtractionServiceMemoryCondition;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _availableExtractionServiceMemoryMutex;	// 80 = 0x50
}

+ (id)extractionServiceInfoForPluginBundlePath:(id)arg1;	// IMP=0x0060000000008ef4
- (void).cxx_destruct;	// IMP=0x0000000000009a33
@property(readonly, nonatomic) struct _opaque_pthread_cond_t availableExtractionServiceMemoryCondition; // @synthesize availableExtractionServiceMemoryCondition=_availableExtractionServiceMemoryCondition;
@property(readonly, nonatomic) struct _opaque_pthread_mutex_t availableExtractionServiceMemoryMutex; // @synthesize availableExtractionServiceMemoryMutex=_availableExtractionServiceMemoryMutex;
@property(nonatomic) unsigned long long availableExtractionServiceMemory; // @synthesize availableExtractionServiceMemory=_availableExtractionServiceMemory;
@property(readonly, nonatomic) NSString *pluginBundlePath; // @synthesize pluginBundlePath=_pluginBundlePath;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)extractionBecameInvalid;	// IMP=0x000000000000991f
- (void)releaseExtractionMemory:(id)arg1;	// IMP=0x00000000000097eb
- (id)reserveExtractionMemory:(id)arg1;	// IMP=0x00000000000092c2
- (void)dealloc;	// IMP=0x000000000000927f
- (id)initWithUUID:(id)arg1 pluginBundlePath:(id)arg2;	// IMP=0x000000000000910b
- (id)initWithPluginBundlePath:(id)arg1;	// IMP=0x000000000000908a

@end
