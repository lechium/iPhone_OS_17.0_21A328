//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface IDSFamilyManager : NSObject
{
    int currentFetchCount;	// 8 = 0x8
    _Bool allowForceFetch;	// 12 = 0xc
    _Bool _isPendingFetch;	// 13 = 0xd
    _Bool _storedIncomingFamilyMessage;	// 14 = 0xe
    NSSet *_familyMembers;	// 16 = 0x10
    NSSet *_familyDevices;	// 24 = 0x18
    NSMutableSet *_familyHandles;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000131517
- (void).cxx_destruct;	// IMP=0x0020000000132b22
@property(nonatomic) _Bool storedIncomingFamilyMessage; // @synthesize storedIncomingFamilyMessage=_storedIncomingFamilyMessage;
@property(nonatomic) _Bool isPendingFetch; // @synthesize isPendingFetch=_isPendingFetch;
@property(retain, nonatomic) NSMutableSet *familyHandles; // @synthesize familyHandles=_familyHandles;
@property(retain, nonatomic) NSSet *familyDevices; // @synthesize familyDevices=_familyDevices;
@property(retain, nonatomic) NSSet *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)_notifyFamilyServicesOfUpdate;	// IMP=0x0000000000132561
- (void)_familyDidUpdate:(id)arg1;	// IMP=0x0010000000132441
- (void)forceFamilyFetch;	// IMP=0x0010000000132253
- (_Bool)canForceFamilyFetch;	// IMP=0x001000000013223d
- (id)initWithFamilyRequest:(id)arg1;	// IMP=0x001000000013214c
- (id)init;	// IMP=0x001000000013204a
- (void)fetchFamilyWithFamilyRequest:(id)arg1;	// IMP=0x0010000000131728
- (id)handlesFromFamilyMember:(id)arg1;	// IMP=0x001000000013156c

@end

