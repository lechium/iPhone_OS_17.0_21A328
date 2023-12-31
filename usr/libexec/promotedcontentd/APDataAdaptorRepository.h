//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSMutableDictionary;

@interface APDataAdaptorRepository : NSObject
{
    NSMutableDictionary *_registeredAdaptors;	// 8 = 0x8
    NSMutableDictionary *_adaptors;	// 16 = 0x10
    APUnfairLock *_lock;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000c7ff
+ (id)sharedRepository;	// IMP=0x001000000000c7aa
- (void).cxx_destruct;	// IMP=0x002000000000d0c1
@property(retain) APUnfairLock *lock; // @synthesize lock=_lock;
@property(retain) NSMutableDictionary *adaptors; // @synthesize adaptors=_adaptors;
@property(retain) NSMutableDictionary *registeredAdaptors; // @synthesize registeredAdaptors=_registeredAdaptors;
- (void)unregisterAdaptorClass:(Class)arg1;	// IMP=0x001000000000cf6b
- (id)registerAdaptorClass:(Class)arg1;	// IMP=0x001000000000cc1e
- (id)adaptorWithIdentifier:(id)arg1;	// IMP=0x001000000000ca58
- (id)init;	// IMP=0x001000000000c97c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000c90c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000c807

@end

