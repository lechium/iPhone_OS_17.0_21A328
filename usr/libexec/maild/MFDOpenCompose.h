//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFDOpenComposeDelegateConfigurationStore, NSString;

@interface MFDOpenCompose
{
    _Bool _isEntitledClient;	// 8 = 0x8
    MFDOpenComposeDelegateConfigurationStore *_store;	// 16 = 0x10
}

+ (id)endpointInfo;	// IMP=0x0020000000078224
+ (id);	// IMP=0x0010000000078204
+ (id)log;	// IMP=0x0010000000078127
- (void).cxx_destruct;	// IMP=0x002000000007944f
- (void)presentNewMailWithContext:(id)arg1 delegateEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078478
- (id)initWithClient:(id)arg1 store:(id)arg2;	// IMP=0x001000000007839c
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000078305

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
