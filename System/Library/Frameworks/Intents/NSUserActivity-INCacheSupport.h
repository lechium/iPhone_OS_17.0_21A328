//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSUserActivity.h>

@class INInteraction, NSString;

@interface NSUserActivity (INCacheSupport)
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d6a8
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;	// IMP=0x00100000000cb6ce
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;	// IMP=0x00100000000cb6b3
+ (void)deleteAllInteractions;	// IMP=0x00100000000cb698
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0010000000127b8b
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d461
- (id)_intents_copy;	// IMP=0x00100000000cb4d6
- (long long)_executionContext;	// IMP=0x00100000000cb454
- (void)_setExecutionContext:(long long)arg1;	// IMP=0x00100000000cb3e8
- (_Bool)_isEligibleForPrediction;	// IMP=0x00100000000cb3d6
- (void)_setEligibleForPrediction:(_Bool)arg1;	// IMP=0x00100000000cb3c4
- (void)_intentsPrepareForEncoding;	// IMP=0x00100000000cb314
- (id)_intentsIdentifier;	// IMP=0x00100000000cb0a7
@property(nonatomic) unsigned long long shortcutAvailability;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
- (void)setInteraction:(id)arg1;	// IMP=0x00100000000caeae
- (void)_setAccessedInteraction:(_Bool)arg1;	// IMP=0x00100000000cae55
- (_Bool)_accessedInteraction;	// IMP=0x00100000000cae13
- (_Bool)_hasInteraction;	// IMP=0x00100000000cadc4
- (void)_setInteraction:(id)arg1 donate:(_Bool)arg2;	// IMP=0x00100000000cacd1
@property(readonly, nonatomic) INInteraction *interaction;
- (void)_setAppIntent:(id)arg1;	// IMP=0x00100000000caac0
- (id)_appIntent;	// IMP=0x00100000000ca962
- (id)_initWithIntent:(id)arg1;	// IMP=0x00100000000ca875
- (void)setInInteraction:(id)arg1;	// IMP=0x00100000000ca863
- (id)inInteraction;	// IMP=0x00100000000ca851
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0010000000127b1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

