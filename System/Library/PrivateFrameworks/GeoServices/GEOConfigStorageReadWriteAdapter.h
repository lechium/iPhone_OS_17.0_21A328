//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOConfigStorageReadOnly;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageReadWriteAdapter : NSObject
{
    id <GEOConfigStorageReadOnly> _storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000404e39
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;	// IMP=0x0000000000404de5
- (void)resync;	// IMP=0x0000000000404dcf
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x0000000000404db9
- (id)initWithStorage:(id)arg1;	// IMP=0x0000000000404d4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
