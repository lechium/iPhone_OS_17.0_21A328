//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerCreatedZoneRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    NSString *_zoneAccountIdentifier;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000049bae8
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *zoneAccountIdentifier; // @synthesize zoneAccountIdentifier=_zoneAccountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000049b842
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049b802
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x001000000049b51c
- (id)requestIdentifier;	// IMP=0x001000000049b4a2
- (unsigned long long)requestType;	// IMP=0x001000000049b497
- (id)initWithZoneAccountIdentifier:(id)arg1 containerName:(id)arg2 zoneName:(id)arg3;	// IMP=0x001000000049b3c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

