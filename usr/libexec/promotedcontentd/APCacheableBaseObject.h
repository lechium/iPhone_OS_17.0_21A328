//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APCacheableBaseObject : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _objectSize;	// 16 = 0x10
}

+ (id)deserializeFromData:(id)arg1 ignoreKeys:(id)arg2;	// IMP=0x00200000000f0910
+ (id)deserializeFromData:(id)arg1;	// IMP=0x00100000000f08fc
+ (id)cacheKeyForIdentifier:(id)arg1;	// IMP=0x00100000000f06c5
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f050b
+ (id)proxyForIdentifier:(id)arg1;	// IMP=0x0010000000104436
- (void).cxx_destruct;	// IMP=0x00100000000f0bcd
@property(nonatomic) unsigned long long objectSize; // @synthesize objectSize=_objectSize;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (long long)garbageCollect;	// IMP=0x00100000000f0b98
- (id)serialize;	// IMP=0x00100000000f074b
- (void)unlockObject;	// IMP=0x00100000000f0745
- (void)lockObject;	// IMP=0x00100000000f073f
@property(readonly, nonatomic) NSString *cacheKey;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000f05fe
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000f0583
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000f0513
- (id)proxy;	// IMP=0x00100000001044ed

@end
