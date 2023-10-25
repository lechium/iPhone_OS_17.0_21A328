//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDPersistentStore;

__attribute__((visibility("hidden")))
@interface HMDEventCountersPersistentStore : NSObject
{
    id <HMDPersistentStore> _persistentStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009f4d19
@property(readonly, nonatomic) __weak id <HMDPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
- (id)unarchive;	// IMP=0x00000000009f495c
- (void)archiveDictionary:(id)arg1;	// IMP=0x00000000009f482c
- (id)initWithPersistentStore:(id)arg1;	// IMP=0x00000000009f47c8

@end
