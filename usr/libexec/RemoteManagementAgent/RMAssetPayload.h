//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSSet, NSString, RMAssetPayloadState, RMManagementSource;

@interface RMAssetPayload
{
}

- (id)reportDetails;	// IMP=0x001000000000c54d
- (void)failedLoadingWithError:(id)arg1;	// IMP=0x001000000000cc4c
- (_Bool)_loadAnyDeclaration:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000caae
- (_Bool)reloadReturningError:(id *)arg1;	// IMP=0x001000000000c900
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000c626

// Remaining properties
@property(retain, nonatomic) NSSet *assetReferences; // @dynamic assetReferences;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) short loadState;
@property(retain, nonatomic) RMManagementSource *managementSource;
@property(readonly, copy, nonatomic) NSData *payload;
@property(nonatomic) _Bool prefetch; // @dynamic prefetch;
@property(retain, nonatomic) RMAssetPayloadState *state; // @dynamic state;
@property(readonly) Class superclass;

@end

